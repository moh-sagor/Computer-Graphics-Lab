#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
void init(void)
{
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    gluOrtho2D(0, 500, 0, 500);
}



void circle_kon(int h, int k, int rx,int ry)
{
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // color

    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glBegin(GL_POLYGON);
    glVertex2f( 240, 130 );
    glVertex2f( 260, 130 );
    glVertex2f( 260, 0 );
    glVertex2f( 240, 0 );

    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 250, 400 );
    glVertex2f( 300, 330 );
    glVertex2f( 200, 330 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 350, 350 );
    glVertex2f( 340, 300 );
    glVertex2f( 300, 330 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 340, 300 );
    glVertex2f( 400, 250 );
    glVertex2f( 340, 200 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 340, 200 );
    glVertex2f( 350, 150 );
    glVertex2f( 300, 160 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 300, 160 );
    glVertex2f( 250, 100 );
    glVertex2f( 200, 160 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 200, 160 );
    glVertex2f( 150, 150 );
    glVertex2f( 160, 200 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 160, 200 );
    glVertex2f( 100, 250 );
    glVertex2f( 160, 300 );
    glEnd();

    glColor3ub(255,255,0);  // yellow
    glBegin(GL_TRIANGLES);
    glVertex2f( 160, 300 );
    glVertex2f( 150, 350 );
    glVertex2f( 200, 330 );
    glEnd();

    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=1; i<=360; i++)   //360 kon
    {
        //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
    }


    glColor3f(0.1f, 0.0f, 0.1f);
    glBegin(GL_POLYGON);
    for(int i=1; i<=360; i++)   //360 kon
    {
        //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
    }                                                                   //3.14159*i/180   convert degree to radian
    glEnd();
    glFlush();

}

void triangle(int a,int b,int c,int d,int e,int f)
{
    glBegin(GL_TRIANGLES);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glVertex2f( a, b );
    glVertex2f( c, d );
    glVertex2f( e, f );
    glEnd();
}


void buildHouse(void)
{

    circle_kon(250, 250, 100, 100);


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("MD SAGOR HOSSAIN (181-15-11287)");
    init();
    glutDisplayFunc(buildHouse);
    glutMainLoop();
}
