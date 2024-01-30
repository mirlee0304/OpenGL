//#define GL_SILENCE_DEPRECATION
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//
//GLfloat Delta = 0.0;
//
//void MyDisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);       //기존의 컬러버퍼 다 지워. glclearcolor(1.0, 1.0..)으로 다시칠해
//    glBegin(GL_POLYGON);
//        glColor3f(0.0, 0.5, 0.8);
//            glVertex3f(-1.0+Delta,-0.5, 0.0);
//            glVertex3f(0.0+Delta, -0.5, 0.0);
//            glVertex3f(0.0+Delta, 0.5, 0.0);
//            glVertex3f(-1.0+Delta, 0.5, 0.0);
//    glEnd();
//    glutSwapBuffers();
//}
//
////void MyIdle() {
////    Delta = Delta + 0.001;
////    glutPostRedisplay();
////}
//
//void MyTimer(int value) {
//    Delta = Delta + 0.0001;
//    glutPostRedisplay();
//    glutTimerFunc(40, MyTimer, 1);
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
////    glutIdleFunc(MyIdle);
//    glutTimerFunc(40, MyTimer, 1);
//    
//    glutMainLoop();
//    return 0;
//}
