#define GL_SILENCE_DEPRECATION
#include <GLUT/GLUT.h>
#include <stdlib.h>

static int Day=0, Time=0;

void MyDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glColor3f(1.0, 0.3, 0.3);
    glutWireSphere(0.2, 20, 16);
    glPushMatrix();
        //회전하고 이동해야 공전이 표현됨
        glRotatef((GLfloat) Day, 0.0, 1.0, 0.0);
        glTranslatef(0.7, 0.0, 0.0);
        glRotatef((GLfloat)Time, 0.0, 1.0, 0.0);
        glColor3f(0.5, 0.6, 0.7);
        glutWireSphere(0.1, 10, 8);
        glPushMatrix();
            glRotatef((GLfloat) Time, 0.0, 1.0, 0.0);
            glTranslatef(0.2, 0.0, 0.0);
            glColor3f(0.9, 0.8, 0.2);
            glutWireSphere(0.04, 10, 8);
        
        //This pop ensures that the rotations and translations applied to the moon do not affect subsequent objects
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    
}

void MyKeyboard(unsigned char key, int s, int y) {
    switch (key) {
        case 'd':
            Day = (Day+10)%360;
            glutPostRedisplay();
            break;
        case 't':
            Time = (Time +5)%360;
            glutPostRedisplay();
            break;
        default: break;
        
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("OpenGL Sample Drawing");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glutDisplayFunc(MyDisplay);
    glutKeyboardFunc(MyKeyboard);
    glutMainLoop();
    return 0;
}
