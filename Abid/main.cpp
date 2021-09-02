#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
void Poly()
{
    glVertex2f(20, 70);
    glVertex2f(70, 70);
    glVertex2f(70, 20);
    glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2); //Axis glColor3ub(255, 255, 0) ; glBegin(GL_LINES); //Line Parallel to Y-axis glVertex2d(0, -500); glVertex2d(0, 500); //Line Parallel to X-axis glVertex2d(500, 0); glVertex2d(-500, 0); glEnd(); //Axis glColor3ub(128,0,128); Poly(); glTranslatef( 0.0f, 0.0f, 0.0f ); glScalef( 1.0f, -1.0f, 1.0f ); glTranslatef( 0.0f, 0.0f, 0.0f ); glColor3ub(128,128,128); Poly(); glFlush (); }

void init(void)
{
        glClearColor (0.0, 0.0, 0.0, 0.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(-200, 200, -200, 200);
}
int main(int argc, char** argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (500, 500);
        glutInitWindowPosition (200, 200);
        glutCreateWindow ("181-15-11287_Sagor");
        init ();
        glutDisplayFunc(display);
        glutMainLoop();
        return 0;
    }
