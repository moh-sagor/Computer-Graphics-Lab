#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx,cy);
    for(int i=0; i<=360; i++)
    {
        float angle = i* 3.1416/180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d (120, 220);
    glVertex2d (250, 220);
    glVertex2d (250, 300);
    glVertex2d (120, 300);
    glEnd();

    glColor3f(0.0f, 0.5f, 0.5f);
    glBegin(GL_POLYGON);
    glVertex2d (120, 75);
    glVertex2d (130, 75);
    glVertex2d (130, 300);
    glVertex2d (120, 300);
    glEnd();

    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2d (110, 75);
    glVertex2d (140, 75);
    glVertex2d (140, 90);
    glVertex2d (110, 90);
    glEnd();



    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-12,12,-12,12,-12,12);
    gluOrtho2D(0, 500, 0, 500);

}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Md Sagor Hossain 181-15-11287");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
