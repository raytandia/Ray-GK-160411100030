#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <Math.h>

void myinit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.6, 5.6, -5.6, 5.6);
    glMatrixMode(GL_MODELVIEW);
}

void baris1(){
    for(float i=1; i<=5; i+=1)
    {
        glPushMatrix();
        for(float a=1; a<=5; a+=1)
        {
            glColor3f(0.0,0.0,0.8);
            glRecti(-10, 10, -8, 8);
            glColor3f(1.0,1.0,0.0);
            glRecti(-8, 10, -6, 8);
            glTranslated(4,0,0);
        }
        glPopMatrix();
        glTranslated(0,-4,0);
    }
    glLoadIdentity();
}
/*void baris2(){

    for(float i=1; i<=5; i+=1)
    {
        glPushMatrix();
        for(float a=1; a<=5; a+=1)
        {
            glColor3f(1.0,1.0,0.0);
            glRecti(-10, 8, -8, 6);
            glColor3f(0.0,0.0,0.8);
            glRecti(-8, 8, -6, 6);
            glTranslated(4,0,0);
        }
        glPopMatrix();
        glTranslated(0,-4,0);
    }
    glLoadIdentity();
}*/

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRotated(45,0,0,1);
    baris1();
    glRotated(45,0,0,1);
    //baris2();
    glFlush();
}

int main(int argc, char* argv[])
{
    //glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Checker Board_Modul_5");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
