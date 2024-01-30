//====================================================================================
////#include <GLUT/GLUT.h>
//#include <OpenGL/gl.h> // in LoadShaders.h
////#include <GL/glew.h> // in main.cpp
//#include <GLUT/GLUT.h> // in main.cpp
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



//====================================================================================
//#include <GLFW/glfw3.h>
//
//int main(void)
//{
//    GLFWwindow* window;
//
//    /* Initialize the library */
//    if (!glfwInit())
//        return -1;
//
//    /* Create a windowed mode window and its OpenGL context */
//    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
//    
//    if (!window)
//    {
//        glfwTerminate();
//        return -1;
//    }
//
//    /* Make the window's context current */
//    glfwMakeContextCurrent(window);
//
//    /* Loop until the user closes the window */
//    while (!glfwWindowShouldClose(window))
//    {
//        /* Render here */
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        /* Swap front and back buffers */
//        glfwSwapBuffers(window);
//
//        /* Poll for and process events */
//        glfwPollEvents();
//    }
//
//    glfwTerminate();
//    return 0;
//}

//====================================================================================
////4각형 그리기 예제
//#define GL_SILENCE_DEPRECATION
//#include <OpenGL/OpenGL.h>
//#include <GLUT/GLUT.h>
//#include <iostream>
//
//
//#define _WINDOW_WIDTH 300
//#define _WINDOW_HEIGHT 300
//
//int mode = 0;
//
//void MyDisplay (void) //화면에 Display할 내용을 담고 있는 메서드
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.5, 0.5, 0.5);
//    if(mode == 0){
//        glBegin(GL_POLYGON);
//        glVertex3f(-0.5, -0.5, 0.0);
//        glVertex3f(0.5, -0.5, 0.0);
//        glVertex3f(0.5, 0.5, 0.0);
//        glVertex3f(-0.5, 0.5, 0.0);
//        glEnd();
//    }else if(mode == 1){
//        glutSolidTeapot(0.6);
//    }
//        glFlush();
//}
//
//void MyKeyboard(unsigned char KeyPressed, int X, int Y){
//    switch (KeyPressed) {
//        case 'a':
//            mode = (mode+1)%2;
//            break;
//        case 'Q':
//            exit(0);
//            break;
//        case 'q':
//            exit(0);
//            break;
//        case 27:
//            exit(0); //"esc"의 아스키코드 값
//            break;
//    }
//    glutPostRedisplay();//MainLoop에 있는 MyDisplay를 다시한번 호출하라.
//}
//
//void MyReshape(int NewWidth, int NewHeight){
//    glViewport(0, 0, NewWidth, NewHeight);
//    GLfloat WidthFactor = (GLfloat)NewWidth / (GLfloat)_WINDOW_WIDTH;
//    GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)_WINDOW_HEIGHT;
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-1.0*WidthFactor, 1.0*WidthFactor, -1.0*HeightFactor, 1.0*HeightFactor, -1.0, 1.0);
//}
//
//int main(int argc, char *argv[])
//{
//    glutInit(&argc, argv);//glut 초기화
//    glutInitDisplayMode(GLUT_RGB);
//    glutInitWindowSize(_WINDOW_WIDTH, _WINDOW_HEIGHT);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("keyboardcallback Example");
//    glClearColor(1.0,1.0,1.0,1.0);
//    
//    //콜백 함수 등록
//    glutDisplayFunc(MyDisplay);
//    glutKeyboardFunc(MyKeyboard);
//    glutReshapeFunc(MyReshape);
//    glutMainLoop();
//    return 0;
//}
//
