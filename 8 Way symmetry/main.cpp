#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

//static float	tx	=  0.0;
//static float	ty	=  0.0;

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,5);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0; i<=100; i++)

    {
        float angle = 2 * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 1.0f, 0.0f);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    circle(9,9,0,0);


    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(6.4, 6.4);

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0, 0);
    glVertex2f(6.4, -6.4);

    glBegin(GL_LINES);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(-6.4, 6.4);


    glBegin(GL_LINES);
    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(-6.4, -6.4);


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0, 0);
    glVertex2f(-6.4, -6.4);


    glBegin(GL_LINES);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex3f(-9.0, 0.0, 0.0);
    glVertex3f(9.0, 0.0, 0.0);


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex3f(0.0, -9.0, 0.0);
    glVertex3f(0.0, 9.0, 0.0);

    glEnd();
    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 50);
    glutCreateWindow("ABID HASAN 181-15-11290");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
