#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glVertex2f (-10.0, 0.0);
glVertex2f (10.0, 0.0);
glVertex2f (0.0, 10.0);
glVertex2f (0.0, -10.0);
glEnd();

//PAPAN CATUR 2X2
glBegin(GL_QUADS);
glColor3f (0.0, 0.0, 0.0);
glVertex2f(-10,10.0);
glVertex2f(-5.0,10.0);
glVertex2f(-5.0,5.0);
glVertex2f(-10.0,5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f (0.0,0.0, 1.0);
glVertex2f(-5,10.0);
glVertex2f(-5.0,5.0);
glVertex2f(0.0,5.0);
glVertex2f(0.0,10.0);
glEnd();
glBegin(GL_QUADS);
glColor3f (0.0,0.0, 0.0);
glVertex2f(-5,5.0);
glVertex2f(-5.0,0.0);
glVertex2f(0.0,0.0);
glVertex2f(0.0,5.0);
glEnd();
glBegin(GL_QUADS);
glColor3f (0.0,0.0, 1.0);
glVertex2f(-10,5.0);
glVertex2f(-10.0,0.0);
glVertex2f(-5.0,0.0);
glVertex2f(-5.0,5.0);
glEnd();

//BUAT HURUF E DENGAN QUADS
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(3.0,8.0);
glVertex2f(7.0,8.0);
glVertex2f(7.0,2.0);
glVertex2f(3.0,2.0);
glColor3f(1,1,1);
glVertex2f(7.0,7.0);
glVertex2f(4.0,7.0);
glVertex2f(4.0,5.5);
glVertex2f(7.0,5.5);
glVertex2f(7.0,4.5);
glVertex2f(4.0,4.5);
glVertex2f(4.0,3.0);
glVertex2f(7.0,3.0);

glEnd();
//papan catur 2x2 rect
glColor3f(0,0,0);
glRecti(0,-5,5,0);
glRecti(5,-10,10,-5);
glColor3f(1,0,1);
glRecti(5,-5,10,0);
glRecti(0,-10,5,-5);

//Huruf O rect



glColor3f(0,0,0);
glRecti(-7,-8,-3,-2);
glColor3f(1,1,1);
glRectf(-6,-7,-4,-3);
glFlush();
}
void myinit(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10.0,10.0,-10.0,10.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(1.0,1.0,1.0,0.0);
glColor3f (0.0, 0.0, 0.0);
}
int main(int argc, char* argv[]){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
//glutInitWindowPosition(100,100);
glutCreateWindow("Obyek Primitif");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
