#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
//Supaya bisa menggunakan fungsi sin(), program perlu include Math.h
#include <Math.h>
void myinit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}
void display(void)
{
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glVertex3f(-10.0,0.0,0.0);
    glVertex3f(10.0,0.0,0.0);
    glVertex3f(0.0,-10.0,0.0);
    glVertex3f(0.0,10.0,0.0);
    glEnd();

    float t = 0.0;
    glBegin(GL_POINTS);
    glColor3f(1.0,0.0,1.0);
    for(t = 0.0; t<=6.28; t+=0.01)
    {
        /* x(t) = 0.5 - t; y(t) = 1 + 2t */
        int A=3,B=4,C=0.5,D=2;
        glVertex2f (t,A*cos(B*t+C)+D);
    }
    glEnd();

    glFlush ();
}
void kunci(unsigned char key, int x, int y)
{
    switch (key)
    {
    /* aplikasi berhenti ketika tombol q ditekan */
    case 27 :
    case 'q':
        exit(0);
        break;
    }
    glutPostRedisplay();
}
int main(int argc, char *argv[])
{
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    myinit();
    glutKeyboardFunc(kunci);
    glutMainLoop();
    return 0;
}
