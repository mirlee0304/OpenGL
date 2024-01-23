
#include <GLFW/glfw3.h>

void onDisplay(void);

void onDisplay(void){

    //화면 리셋
    glClear(GL_COLOR_BUFFER_BIT);

    //삼각형 그리기 시작
    glBegin(GL_TRIANGLES);

    //모서리 지정
    glVertex2f(0.0, 0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.0, -0.5);

    //삼각형 그리기 종료
    glEnd();

    //flush
    glFlush();
}

//int main(int argc, char * argv[])
//{
//    glutInit(&argc, argv); //init
//    glutCreateWindow("MY FIRST APP"); //window
//    glutDisplayFunc(onDisplay); //display()
//    glutMainLoop(); //start
//    return 0;
//}
