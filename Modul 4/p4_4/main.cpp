#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>

void lingkaran(){
    glColor3f(0.0,0.0,1.0);
    int sudut = 0;
    for (int i=1; i<=12; i++){ //Perulangan for sampe 12
        if(i%2!=0){ //Jika i modulus 2 tidak sama dengan 0
            glRotated(sudut, 0, 0, 1);
            glRectf(-1, 5, 1, 7); //Kotak
            glLoadIdentity(); //Normalisasi
        }else{
            glRotated(sudut, 0, 0, 1);
            glRectf(-0.5, 5.5, 0.5, 6.5);
            glLoadIdentity();
        }
        sudut+=30;

    }
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_LINE_STRIP);
    for (float i = 0.0; i<=6.28; i+=0.01){ //Lingkaran
        glVertex2f(6*cos(i), 6*sin(i));
    }
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    lingkaran();
    glFlush();
}
void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0,10.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(0.0,0.0,0.0);
}
int main(int argc, char* argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("Transform");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
