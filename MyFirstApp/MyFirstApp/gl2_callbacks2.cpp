//#define GL_SILENCE_DEPRECATION
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//
//GLboolean IsSphere = true;
//GLboolean IsSmall = true;
//
//
//void MyDisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.5, 0.0, 0.5);
//    if (IsSphere && IsSmall)
//        glutWireSphere(0.2, 15, 15);
//    else if (IsSphere && !IsSmall)
//        glutWireSphere(0.4, 15, 15);
//    else if (!IsSphere && IsSmall)
//        glutWireTorus(0.1, 0.3, 40, 20);
//    else if (!IsSphere && !IsSmall)
//        glutWireTorus(0.2, 0.5, 40, 20);
//    glFlush();
//}
//
//void MyMainMenu(int entryID) {
//    if (entryID==1) IsSphere=true;
//    else if (entryID==2) IsSphere=false;
//    else if (entryID==3) exit(0);
//    glutPostRedisplay();
//}
//
//void MySubMenu(int entryID) {
//    if (entryID==1) IsSmall=true;
//    else if (entryID==2) IsSmall=false;
//    glutPostRedisplay();
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
//    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//    
//    GLint MySubMenuID = glutCreateMenu(MySubMenu);
//    glutAddMenuEntry("Small One", 1);
//    glutAddMenuEntry("Big One", 2);
//    
//    GLint MyMainMenuID = glutCreateMenu(MyMainMenu);
//    glutAddMenuEntry("Draw Sphere", 1);
//    glutAddMenuEntry("Draw Torus", 2);
//    
//    glutAddSubMenu("ChangeSize", MySubMenuID);
//    
//    glutAddMenuEntry("Exit", 3);
//    glutAttachMenu(GLUT_RIGHT_BUTTON);
//    glutDisplayFunc(MyDisplay);
//    
//    glutMainLoop();
//    return 0;
//}
