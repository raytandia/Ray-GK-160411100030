#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f (-9.0, 3.0);
glVertex2f (9.0, 3.0);
glVertex2f (-9.0, -3.0);
glVertex2f (9.0, -3.0);
glVertex2f(-3.0,9.0);
glVertex2f(-3.0,-9.0);
glVertex2f(3.0,9.0);
glVertex2f(3.0,-9.0);


glEnd();

glBegin(GL_LINE_LOOP);
glVertex2f(0.8,-0.8);
glVertex2f(-0.8,-0.8);
glVertex2f(-0.8,0.8);
glVertex2f(0.8,0.8);
glVertex2f(0.8,0.4);
glVertex2f(-0.2,0.4);
glVertex2f(-0.2,0.2);
glVertex2f(0.8,0.2);
glVertex2f(0.8,-0.2);
glVertex2f(-0.2,-0.2);
glVertex2f(-0.2,-0.4);
glVertex2f(0.8,-0.4);
glEnd();
glFlush();
}
void myinit(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-9.0,9.0,-9.0,9.0);
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
