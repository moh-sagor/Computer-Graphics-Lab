#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3ub (255, 255, 255);
glPointSize(10);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);      // For Points
glVertex2d (50, 50);
glVertex2d (450, 50);
glVertex2d (450, 350);
glVertex2d (50, 350);
glEnd();


glColor3ub (0, 0, 255);
glLineWidth(10);
glBegin(GL_LINES);      //For Lines
glVertex2d (200, 50);
glVertex2d (300, 50);
glVertex2d (300, 300);
glVertex2d (200, 300);
glEnd();



glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (325, 150);
glVertex2d (425, 150);
glVertex2d (425, 250);
glVertex2d (325, 250);
glEnd();

glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (75, 150);
glVertex2d (175, 150);
glVertex2d (175, 250);
glVertex2d (75, 250);
glEnd();



glColor3ub (0,255,0);
glBegin(GL_POLYGON);
glVertex2d (50, 350);
glVertex2d (450, 350);
glVertex2d (255, 450);
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
gluOrtho2D(-250, 250, -250, 250);
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
glutCreateWindow (" 181-15-11287_MD SAGOR HOSSAIN");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

