#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <Math.h>

void diamond_(){

    glBegin(GL_TRIANGLES);
    //depan atas
    glColor3f(0.0, 0.0, 1);
    glVertex3d(1, 0, -1);
    glVertex3d(-1, 0, -1);
    glVertex3d(0,3,0);
    glEnd();
    //belakang atas
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0);
    glVertex3d(1, 0, 1);
    glVertex3d(-1, 0,1);
    glVertex3d(0,3,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 0);
    glVertex3d(-1, 0, -1);
    glVertex3d(-1, 0,1);
    glVertex3d(0,3,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3d(1, 0, -1);
    glVertex3d(1, 0,1);
    glVertex3d(0,3,0);
    glEnd();



    glBegin(GL_TRIANGLES);
    //depan atas
    glColor3f(0.0, 1.0, 1);
    glVertex3d(1, 0, -1);
    glVertex3d(-1, 0, -1);
    glVertex3d(0,-3,0);
    glEnd();
    //belakang atas
    glBegin(GL_TRIANGLES);
    glColor3f(0, 0.0, 1.0);
    glVertex3d(1, 0, 1);
    glVertex3d(-1, 0,1);
    glVertex3d(0,-3,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0);
    glVertex3d(-1, 0, -1);
    glVertex3d(-1, 0,1);
    glVertex3d(0,-3,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3d(1, 0, -1);
    glVertex3d(1, 0,1);
    glVertex3d(0,-3,0);
    glEnd();
    glLoadIdentity();

}
void cincin(){
    glLineWidth(5);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_STRIP);
    for(float t =0.0; t<=6.28; t+=0.01)
        {
            glVertex3d(sin(t)*8,cos(t)*8,0);
        }
     glEnd();
}
void bulat(){
glutSolidSphere(1,20,10);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    diamond_();
    cincin();
        glFlush();

}
float spin = 0;
void spinDisplay(){
    if (spin > 360){
        spin-=360;
    }
}

void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {

 case 'y' :
    spin += 5;
    glRotatef(spin, 0,1,0);
    break;

 case 'q':
    exit(0);
    break;
 }
 glutPostRedisplay();
}
void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bentuk Rumah Sederhana");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(kunci);
    glutMainLoop();
    return 0;
}
