#define GL_SILENCE_DEPRECATION
#include <GLUT/GLUT.h>

void MyDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);       //컬러버퍼(프레임버퍼)를 초기화
    
    glViewport(0, 0, 300, 300);
    glColor3f(1.0, 1.0, 1.0);
    
    glBegin(GL_POLYGON);
        glVertex3f(-0.5, -0.5, 0.0);
        glVertex3f(0.5, -0.5, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(-0.5, 0.5, 0.0);
    glEnd();
    //드라이버는 지엘 명령어를 즉시실행하지 않음. 모았다가 함
    //현재까지 쌓인 것을 모두 프로세서에 강제전달==flush
    glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);              //꼭 넣어야 실행됨. 라이브러리 초기화. 운영체제 연결
    
    glutInitDisplayMode(GLUT_RGB);      //기본 컬러모드를 rgb 모드로
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(0, 0);
    
    glutCreateWindow("OpenGL Drawing Example");     //윈도우 생성
    
    glClearColor(0.0, 0.0, 0.0, 1.0);       //초기화 색이라는 상태변수 값 설정.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    
    
    glutDisplayFunc(MyDisplay);             //디스플레이 이벤트 발생시 마이디스플레이 콜백함수 실행
    glutMainLoop();
    return 0;
}



