#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */

    // First
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (300, 225);
    glVertex2d (350, 225);
    glVertex2d (350, 275);  /* use 50,50 for Triangle */
    glVertex2d (300, 275);
    glEnd();

//1
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (250, 250);
    glVertex2d (300, 225);
    glVertex2d (300, 275);  /* use 50,50 for Triangle */
    glEnd();
//2
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (300, 275);
    glVertex2d (350, 275);
    glVertex2d (325, 325);  /* use 50,50 for Triangle */
    glEnd();
//3
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (300, 225);
    glVertex2d (350, 225);
    glVertex2d (325, 175);  /* use 50,50 for Triangle */
    glEnd();
//4
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (350, 225);
    glVertex2d (400, 250);
    glVertex2d (350, 275);  /* use 50,50 for Triangle */
    glEnd();



// second


    glColor3ub (255, 4, 13);
    glBegin(GL_POLYGON);
    glVertex2d (150, 225);
    glVertex2d (200, 225);
    glVertex2d (200, 275);  /* use 50,50 for Triangle */
    glVertex2d (150, 275);
    glEnd();

//1
    glColor3ub (255, 4, 13);
    glBegin(GL_POLYGON);
    glVertex2d (250, 250);
    glVertex2d (200, 225);
    glVertex2d (200, 275);  /* use 50,50 for Triangle */
    glEnd();
//2
    glColor3ub (255, 4, 13);
    glBegin(GL_POLYGON);
    glVertex2d (150, 225);
    glVertex2d (200, 225);
    glVertex2d (175, 175);  /* use 50,50 for Triangle */
    glEnd();
//3
    glColor3ub (255, 4, 13);
    glBegin(GL_POLYGON);
    glVertex2d (150, 225);
    glVertex2d (150, 275);
    glVertex2d (100, 250);  /* use 50,50 for Triangle */
    glEnd();
//4
    glColor3ub (255, 4, 13);
    glBegin(GL_POLYGON);
    glVertex2d (150, 275);
    glVertex2d (200, 275);
    glVertex2d (175, 325);  /* use 50,50 for Triangle */
    glEnd();

//Third

    glColor3ub (14, 30, 255);
    glBegin(GL_POLYGON);
    glVertex2d (225, 150);
    glVertex2d (275, 150);
    glVertex2d (275, 200);  /* use 50,50 for Triangle */
    glVertex2d (225, 200);
    glEnd();

//1
    glColor3ub (14, 30, 255);
    glBegin(GL_POLYGON);
    glVertex2d (225, 200);
    glVertex2d (275, 200);
    glVertex2d (250, 250);  /* use 50,50 for Triangle */
    glEnd();
//2
    glColor3ub (14, 30, 255);
    glBegin(GL_POLYGON);
    glVertex2d (175, 175);
    glVertex2d (225, 150);
    glVertex2d (225, 200);  /* use 50,50 for Triangle */
    glEnd();
//3
    glColor3ub (14, 30, 255);
    glBegin(GL_POLYGON);
    glVertex2d (225, 150);
    glVertex2d (250, 100);
    glVertex2d (275, 150);  /* use 50,50 for Triangle */
    glEnd();
//4
    glColor3ub (14, 30, 255);
    glBegin(GL_POLYGON);
    glVertex2d (275, 150);
    glVertex2d (325, 175);
    glVertex2d (275, 200);  /* use 50,50 for Triangle */
    glEnd();

//fourth

    glColor3ub (4, 255, 38);
    glBegin(GL_POLYGON);
    glVertex2d (225, 300);
    glVertex2d (275, 300);
    glVertex2d (275, 350);  /* use 50,50 for Triangle */
    glVertex2d (225, 350);
    glEnd();

//1
    glColor3ub (4, 255, 38);
    glBegin(GL_POLYGON);
    glVertex2d (225, 300);
    glVertex2d (250, 250);
    glVertex2d (275, 300);  /* use 50,50 for Triangle */
    glEnd();
//2
    glColor3ub (4, 255, 38);
    glBegin(GL_POLYGON);
    glVertex2d (275, 300);
    glVertex2d (325, 325);
    glVertex2d (275, 350);  /* use 50,50 for Triangle */
    glEnd();
//3
    glColor3ub (4, 255, 38);
    glBegin(GL_POLYGON);
    glVertex2d (275, 350);
    glVertex2d (250, 400);
    glVertex2d (225, 350);  /* use 50,50 for Triangle */
    glEnd();
//4
    glColor3ub (4, 255, 38);
    glBegin(GL_POLYGON);
    glVertex2d (225, 350);
    glVertex2d (175, 325);
    glVertex2d (225, 300);  /* use 50,50 for Triangle */
    glEnd();

//Lines x-axis
    glColor3ub (14, 30, 255);
    glBegin(GL_LINES);
    glVertex2f(0, 250);
    glVertex2f(500, 250);
    glEnd();

    // Lines y-axis
    glColor3ub (14, 30, 255);
    glBegin(GL_LINES);
    glVertex2f(250, 0);
    glVertex2f(250, 500);
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

