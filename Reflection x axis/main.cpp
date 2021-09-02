#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
void Poly(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8)
{
    glBegin(GL_QUADS);
    glVertex2d(x1, x2);
    glVertex2d(x3, x4);
    glVertex2d(x5, x6);
    glVertex2d(x7, x8);
    glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    int xShearing = 0;
//Axis
    glColor3ub(0, 255, 255) ;
    glBegin(GL_LINES);
//Line Parallel to Y-axis
    glVertex2d(0, -500);
    glVertex2d(0, 500);
//Line Parallel to X-axis
    glVertex2d(500, 0);
    glVertex2d(-500, 0);
    glEnd();
//Axis
    glColor3ub(255,255,0);
    Poly(0, 0, 0 + xShearing, 100, 100 + xShearing, 100, 100, 0);
    xShearing = 30;
    glColor3ub(120,255,160);
    Poly(0, 0, 0 + xShearing, 100, 100 + xShearing, 100, 100, 0);
    glFlush ();
}
void init (void)
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
    glutCreateWindow ("ABID HASAN 181-15-11290");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
