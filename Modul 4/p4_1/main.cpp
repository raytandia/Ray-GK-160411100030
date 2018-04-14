#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
//Supaya bisa menggunakan fungsi sin(), program perlu include Math.h
#include <Math.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glRotated(45, 0, 0, 1);
for (int t=0;t<=50;t+=3){
    glTranslated(-160,10,0);
    int a = 1;

    for (int i=0;i<=50;i+=3){
        if(a%2==0){
            glColor3f(0.0,0.0,0.5);
            glTranslated(10,0,0);
            glRecti(30,-60, 40, -50);

        }
        else{
            glColor3f(1.0,1.0,0);
            glTranslated(10,0,0);
            glRecti(30,-60, 40, -50);
        }

        a++;

    }

        //
        // Gambar kotak pertama di sudut kiri bawah
}



        //
        // Gambar kotak pertama di sudut kiri bawah



glFlush();
}
void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,49.5,0,49.5);
glMatrixMode(GL_MODELVIEW);
glClearColor(1.0,1.0,1.0,1.0);
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
