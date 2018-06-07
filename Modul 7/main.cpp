#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <Math.h>

void bentuk_(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //glRotated(25,1,0,0); // tampilan gambar 1
    //glRotated(25,0,1,0); // tampilan gambar 2
    //glRotated(335,0,1,0); // tampilan gambar 3
    //glRotated(235,0,1,0); // tampilan gambar 4

//bentuk atap rumah bawah
//kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.2);
    glVertex3d(0, 12, 6);
    glVertex3d(6, 3.6, 6);
    glVertex3d(6, 3.6, -6);
    glVertex3d(0, 12, -6);
    glEnd();
//kanan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.2);
    glColor3f(0.0, 0.0, 0.2);
    glVertex3d(0, 12, 6);
    glVertex3d(-6, 3.6, 6);
    glVertex3d(-6, 3.6, -6);
    glVertex3d(0, 12, -6);
    glEnd();

//bentuk atap rumah atas
//kanan
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(0, 13, 6);
    glVertex3d(6, 4.6, 6);
    glVertex3d(6, 4.6, -6);
    glVertex3d(0, 13, -6);
    glEnd();
//kanan
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(0, 13, 6);
    glVertex3d(-6, 4.6, 6);
    glVertex3d(-6, 4.6, -6);
    glVertex3d(0, 13, -6);
    glEnd();

//tutup atap depan kiri
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(-6, 3.6, 6);
    glVertex3d(-6, 4.6, 6);
    glVertex3d(0, 13, 6);
    glVertex3d(0, 12, 6);
    glEnd();

//tutup atap depan kanan
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(6, 3.6, 6);
    glVertex3d(6, 4.6, 6);
    glVertex3d(0, 13, 6);
    glVertex3d(0, 12, 6);
    glEnd();

//tutup atap belakang kiri
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(-6, 3.6, -6);
    glVertex3d(-6, 4.6, -6);
    glVertex3d(0, 13, -6);
    glVertex3d(0, 12, -6);
    glEnd();

//tutup atap belakang kanan
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(6, 3.6, -6);
    glVertex3d(6, 4.6, -6);
    glVertex3d(0, 13, -6);
    glVertex3d(0, 12, -6);
    glEnd();

//tutup atap kanan
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(6, 3.6, 6);
    glVertex3d(6, 4.2, 6);
    glVertex3d(6, 4.2, -6);
    glVertex3d(6, 3.6, -6);
    glEnd();

//tutup atap kiri
    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex3d(-6, 3.6, 6);
    glVertex3d(-6, 4.2, 6);
    glVertex3d(-6, 4.2, -6);
    glVertex3d(-6, 3.6, -6);
    glEnd();


//bentuk rumah
//tampak depan
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.3);
    glVertex3d(-5,5,5);
    glVertex3d(0,12,5);
    glVertex3d(5,5,5);
    glVertex3d(5,-5,5);
    glVertex3d(-5,-5,5);
    glEnd();

//tampak belakang
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.3);
    glVertex3d(-5,5,-5);
    glVertex3d(0,12,-5);
    glVertex3d(5,5,-5);
    glVertex3d(5,-5,-5);
    glVertex3d(-5,-5,-5);
    glEnd();

//tampak samping kiri
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3d(5,5,5);
    glVertex3d(5,5,-5);
    glVertex3d(5,-5,-5);
    glVertex3d(5,-5, 5);
    glEnd();

//lantai rumah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.7);
    glVertex3d(-5, -5, 5);
    glVertex3d( 5, -5, 5);
    glVertex3d( 5, -5,-5);
    glVertex3d(-5, -5,-5);
    glEnd();

//tampak samping kanan
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.5, 0.5);
    glVertex3d(-5,5,5);
    glVertex3d(-5,5,-5);
    glVertex3d(-5,-5,-5);
    glVertex3d(-5,-5, 5);
    glEnd();

//jendela rumah I
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex3d(-4,4, 5.5);
    glVertex3d(-2.5,4, 5.5);
    glVertex3d(-2.5, 2, 5.5);
    glVertex3d(-4, 2, 5.5);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 4, 5.5);
    glVertex3d(-4, 4, 5);
    glVertex3d(-4, 2, 5);
    glVertex3d(-4, 2, 5.5);
    glEnd();
    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2.5, 4, 5.5);
    glVertex3d(-2.5, 4, 5);
    glVertex3d(-2.5, 2, 5);
    glVertex3d(-2.5, 2, 5.5);
    glEnd();
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 4, 5.5);
    glVertex3d(-2.5, 4, 5.5);
    glVertex3d(-2.5, 2, 5);
    glVertex3d(-4, 2, 5);
    glEnd();
    //bawah
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 4, 5.5);
    glVertex3d(-2.5, 4, 5.5);
    glVertex3d(-2.5, 2, 5);
    glVertex3d(-4, 2, 5);
    glEnd();

//jendela rumah II
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex3d(-2 , 4, 5.5);
    glVertex3d(-0.5, 4, 5.5);
    glVertex3d(-0.5, 2, 5.5);
    glVertex3d(-2, 2, 5.5);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 4, 5.5);
    glVertex3d(-2, 4, 5);
    glVertex3d(-2, 2, 5);
    glVertex3d(-2, 2, 5.5);
    glEnd();
    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-0.5, 4, 5.5);
    glVertex3d(-0.5, 4, 5);
    glVertex3d(-0.5, 2, 5);
    glVertex3d(-0.5, 2, 5.5);
    glEnd();
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 4, 5.5);
    glVertex3d(-0.5, 4, 5.5);
    glVertex3d(-0.5, 2, 5);
    glVertex3d(-2, 2, 5);
    glEnd();
    //bawah
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 4, 5.5);
    glVertex3d(-0.5, 4, 5.5);
    glVertex3d(-0.5, 2, 5);
    glVertex3d(-2, 2, 5);
    glEnd();

//jendela rumah III
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex3d(-4, 1.5, 5.5);
    glVertex3d(-2.5, 1.5, 5.5);
    glVertex3d(-2.5, -0.5, 5.5);
    glVertex3d(-4, -0.5, 5.5);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 1.5, 5.5);
    glVertex3d(-4, 1.5, 5);
    glVertex3d(-4, -0.5, 5);
    glVertex3d(-4, -0.5, 5.5);
    glEnd();
    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2.5, 1.5, 5.5);
    glVertex3d(-2.5, 1.5, 5);
    glVertex3d(-2.5, -0.5, 5);
    glVertex3d(-2.5, -0.5, 5.5);
    glEnd();
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 1.5, 5.5);
    glVertex3d(-2.5, 1.5, 5.5);
    glVertex3d(-2.5, -0.5, 5);
    glVertex3d(-4, -0.5, 5);
    glEnd();
    //bawah
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-4, 1.5, 5.5);
    glVertex3d(-2.5, 1.5, 5.5);
    glVertex3d(-2.5, -0.5, 5);
    glVertex3d(-4, -0.5, 5);
    glEnd();

//jendela rumah IV
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex3d(-2 , 1.5, 5.5);
    glVertex3d(-0.5, 1.5, 5.5);
    glVertex3d(-0.5, -0.5, 5.5);
    glVertex3d(-2, -0.5, 5.5);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 1.5, 5.5);
    glVertex3d(-2, 1.5, 5);
    glVertex3d(-2, -0.5, 5);
    glVertex3d(-2, -0.5, 5.5);
    glEnd();
    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-0.5, 1.5, 5.5);
    glVertex3d(-0.5, 1.5, 5);
    glVertex3d(-0.5, -0.5, 5);
    glVertex3d(-0.5, -0.5, 5.5);
    glEnd();
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 1.5, 5.5);
    glVertex3d(-0.5, 1.5, 5.5);
    glVertex3d(-0.5, -0.5, 5);
    glVertex3d(-2, -0.5, 5);
    glEnd();
    //bawah
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.1, 0.0);
    glVertex3d(-2, 1.5, 5.5);
    glVertex3d(-0.5, 1.5, 5.5);
    glVertex3d(-0.5, -0.5, 5);
    glVertex3d(-2, -0.5, 5);
    glEnd();

//pintu rumah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(1, 1.5, 5.5);
    glVertex3d(3.5, 1.5, 5.5);
    glVertex3d(3.5, -5, 5.5);
    glVertex3d(1, -5, 5.5);
    glEnd();

    //kanan
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3d(3.5, 1.5, 5.5);
    glVertex3d(3.5, 1.5, 5);
    glVertex3d(3.5, -5, 5);
    glVertex3d(3.5, -5, 5.5);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3d(1, 1.5, 5.5);
    glVertex3d(1, 1.5, 5);
    glVertex3d(1, -5, 5);
    glVertex3d(1, -5, 5.5);
    glEnd();

    //atas
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3d(1, 1.5, 5.5);
    glVertex3d(3.5, 1.5, 5.5);
    glVertex3d(3.5, 1.5, 5);
    glVertex3d(1, 1.5, 5);
    glEnd();

    //bawah
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3d(1, -5, 5.5);
    glVertex3d(3.5, -5, 5.5);
    glVertex3d(3.5, -5, 5);
    glVertex3d(1, -5, 5);
    glEnd();

    glLoadIdentity();
    glFlush();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    bentuk_();
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
 case 'x' :
    spin += 1;
    glRotatef(spin, 1,0,0);
    break;
 case 'y' :
    spin += 1;
    glRotatef(spin, 0,1,0);
    break;
 case 'z' :
    spin += 1;
    glRotatef(spin, 0,0,1);
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
    glOrtho(-9.0, 9.0, -7.0, 15.0, -15.0, 15.0);
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
