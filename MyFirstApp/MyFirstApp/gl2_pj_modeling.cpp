//#define GL_SILENCE_DEPRECATION
//#include <GLUT/GLUT.h>
//#include <stdlib.h>
//
//int FlatShaded = 0;
//int WireFramed = 0;
//int ViewX = 0;
//int ViewY = 0;
//
//void InitLight() {
//    GLfloat mat_diffuse[] = {0.5, 0.4, 0.3, 1.0};
//    GLfloat mat_specular[] = {1.0, 1.0, 1.0, 1.0};
//    GLfloat mat_ambient[] = {0.5, 0.4, 0.3, 1.0};
//    GLfloat mat_shininess[] = {15.0};
//    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0};
//    GLfloat light_diffuse[] = {0.8, 0.8, 0.8, 1.0};
//    GLfloat light_ambient[] = {0.3, 0.3, 0.3, 1.0};
//    GLfloat light_position[] = {-3, 6, 3.0, 0.0};
//    glShadeModel(GL_SMOOTH);
//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_LIGHTING);
//    glEnable(GL_LIGHT0);
//    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
//    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
//    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
//}
//
//void MyMouseMove(GLint x, GLint y) {
//    ViewX = x;
//    ViewY = y;
//    glutPostRedisplay();
//}
//
//void MyKeyBoard(unsigned char key, int x, int y) {
//    switch (key) {
//        case 'q': case 'Q': case '\033':
//            exit(0);
//            break;
//            
//        case 's':
//            if (FlatShaded) {
//                FlatShaded = 0;
//                glShadeModel(GL_SMOOTH);
//            }
//            else {
//                FlatShaded =1;
//                glShadeModel(GL_FLAT);
//            }
//            glutPostRedisplay();
//            break;
//        case 'w':
//            if (WireFramed){
//                WireFramed = 0;
//                glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
//            }
//            else {
//                WireFramed = 1;
//                glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//            }
//            glutPostRedisplay();
//            break;
//    }
//}
//
//void MyDispay() {
//    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    
////    gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 1.0, 1.0, 0.0);
//    
//    glRotatef(30.0, 1.0, 1.0, 1.0);
////    glutSolidTeapot(0.2);
//    glutSolidCube(0.3);
////    glBegin(GL_POLYGON);
////        glVertex3f(-0.5, -0.5, 0.0);
////        glVertex3f(0.5, -0.5, 0.0);
////        glVertex3f(0.5, 0.5, 0.0);
////        glVertex3f(-0.5, 0.5, 0.0);
////    glEnd();
//    
//    glFlush();
//}
//
////그냥 reshape에서 뷰포트만 바꾸면 윈도에 전체에 그림이 그려질 수 있을뿐 비율은 막 변함
//void MyReshape(int w, int h) {
//    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//    
//}
//
//int main(int argc, char** argv){
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA|GLUT_DEPTH);
//    glutInitWindowSize(400, 400);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("OpenGL Sample Drawing");
//    glClearColor(0.4, 0.4, 0.4, 0.0);
//    InitLight();
//    glutDisplayFunc(MyDispay);
//    glutKeyboardFunc(MyKeyBoard);
////    glutMouseFunc(MyMouseMove);
//    glutReshapeFunc(MyReshape);
//    glutMainLoop();
//
//}
