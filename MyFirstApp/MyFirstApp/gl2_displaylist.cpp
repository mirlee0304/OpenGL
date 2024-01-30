//#define GL_SILENCE_DEPRECATION
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//
//int MyListID;
//
//void MyCreateList() {
//    MyListID = glGenLists(1);       //사용안된 리스트 아이디 1개를 반환함
//    glNewList(MyListID, GL_COMPILE);    //해당 아이디를 가진 리스트를 만든다. compile모드면 실행되지않고 디플리스트에 저장됨
//    
//    glBegin(GL_POLYGON);
//        glColor3f(0.5, 0.5, 0.5);
//        glVertex3f(-0.5, -0.5, 0.0);
//        glVertex3f(0.5, -0.5, 0.0);
//        glVertex3f(0.5, 0.5, 0.0);
//        glVertex3f(-0.5, 0.5, 0.0);
//    glEnd();
//    glEndList();
//}
//
//void MyDisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glViewport(0, 0, 300, 300);
//    glCallList(MyListID);
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);      //기본 컬러모드를 rgb 모드로
//    glutInitWindowSize(300, 300);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("OpenGL Drawing Example");     //윈도우 생성
//    glClearColor(1.0, 1.0, 1.0, 1.0);       //초기화 색이라는 상태변수 값 설정.
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//
//    glutDisplayFunc(MyDisplay);
//    MyCreateList();
//    
//    glutMainLoop();
//    return 0;
//}
