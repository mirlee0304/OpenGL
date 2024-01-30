//#define GL_SILENCE_DEPRECATION
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//
//GLint TopLeftX, TopLeftY, BottomRightX, BottomRightY;
//
//void MyDisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);       //컬러버퍼에 초기화 색을 가함
//    glColor3f(0.5, 0.5, 0.5);       //gray
//    glBegin(GL_POLYGON);
//        glVertex3f(TopLeftX/300.0, (300-TopLeftY)/300.0, 0.0);
//        glVertex3f(TopLeftX/300.0, (300-BottomRightY)/300.0, 0.0);
//        glVertex3f(BottomRightX/300.0, (300-BottomRightY)/300.0, 0.0);
//        glVertex3f(BottomRightX/300.0, (300-TopLeftY)/300.0, 0.0);
//    glEnd();
//    glFlush();
//}
//
////void MyReshape(int NewWidth, int NewHeight) {
//////    glViewport(0, 0, NewWidth, NewHeight);
////    GLfloat WidthFactor = (GLfloat)NewWidth / (GLfloat)300;
////    GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)300;
////    
////    glMatrixMode(GL_PROJECTION);
////    glLoadIdentity();
////    glOrtho(-1.0*WidthFactor, 1.0*WidthFactor, -1.0*HeightFactor, 1.0*HeightFactor, -1.0, 1.0);
////}
//
//
//void MyKeyboard(unsigned char KeyPressed, int X, int Y) {
//    switch (KeyPressed) {
//        case 'Q':
//            exit(0);
//            break;
//        case 'q':
//            exit(0);
//            break;
//        case 27:        //esc
//            exit(0);
//            break;
//    }
//}
//
//void MyMouseClick(GLint Button, GLint State, GLint x, GLint y) {
//    if (Button==GLUT_LEFT_BUTTON && State==GLUT_DOWN) {
//        TopLeftX=x;
//        TopLeftY=y;
//    }
//}
//
//void MyMouseMove(GLint x, GLint y) {
//    BottomRightX = x;
//    BottomRightY = y;
//    glutPostRedisplay();        //새로 바뀐 값 디스플레이 하려면 필수임
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB);      //기본 컬러모드를 rgb 모드로
//    glutInitWindowSize(300, 300);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("OpenGL Drawing Example");     //윈도우 생성
//    glClearColor(0.0, 0.0, 0.0, 1.0);       //초기화 색이라는 상태변수 값 설정. 백색
//    
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//    
//    glutDisplayFunc(MyDisplay);             //디스플레이 이벤트 발생시 마이디스플레이 콜백함수 실행
////    glutReshapeFunc(MyReshape);
////    glutKeyboardFunc(MyKeyboard);
//    glutMouseFunc(MyMouseClick);
//    glutMotionFunc(MyMouseMove);
//    
//    glutMainLoop();
//    return 0;
//}

//reshape callback 함수 등록
//glut가 읽어들인 윈도우 폭과 높이 뉴~
//myreshape glviewport는 뷰포트 크기를 변경된 윈도우 크기와 일치시켜 윈도우 내 어느곳에라도 물체를 그릴 수 있도록 함

//프로그램 처음 시작할때 뷰 포트는 윈도우사이즈 300 300 맞춘것과 일치함.
//그런데 마이디스플레이 내부의 회색 사각형 좌표는 기본 glortho에 의해 정의되는 투상면을 기준으로 부여한 값임
//즉 (-1.0, 1.0 ....) 이럼
//그리고 기본 뷰포트(윈도우와동일) 내에 그려짐
//========
//ㅣ   -  ㅣ
//ㅣ      ㅣ
//ㅣ   -  ㅣ
//========
//그런데 reshape 되었는데 reshape callback 안하면:
//          윈도우 비율 바뀌어도 뷰포트 위치, 크기는 동일, 투상면 비율도 뷰포트와 동일함(사각형 왜곡없음 크기도 동일)
//          그러나 가려질수있음 사각형이
//reshape 되었는데 콜백 함. 뷰포트만 맞춤:
//          뷰포트 비율과 윈도우 비율 동일, 투상면은 이전과 그대로임. 1:1
//          사각형 크기 자유자재, 비율도 자유자재
//뷰포트 안맞추고 투상면만 맞춤 glortho로:
//          뷰포트 위치 그대로니까 300, 300 좌하단
//          윈도우 길어지면 사각형 짧아지고.. 역으로 됨


