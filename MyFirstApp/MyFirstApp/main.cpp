//#include <GLUT/GLUT.h>
//
//void onDisplay(void);
//
//void onDisplay(void){
//    
//    //화면 리셋
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    //삼각형 그리기 시작
//    glBegin(GL_TRIANGLES);
//    
//    //모서리 지정
//    glVertex2f(0.0, 0.5);
//    glVertex2f(-0.5, -0.5);
//    glVertex2f(0.0, -0.5);
//    
//    //삼각형 그리기 종료
//    glEnd();
//    
//    //flush
//    glFlush();
//}
//
//int main(int argc, char * argv[])
//{
//    glutInit(&argc, argv); //init
//    glutCreateWindow("MY FIRST APP"); //window
//    glutDisplayFunc(onDisplay); //display()
//    glutMainLoop(); //start
//    return 0;
//}

#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
