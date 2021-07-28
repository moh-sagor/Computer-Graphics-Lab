#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
void init(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	gluOrtho2D(0, 500, 0, 500);
}



void circle_kon(int h, int k, int rx,int ry)    //Works
{
   // glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	//glColor3f(1.0, .60, 0.0);
    glBegin(GL_POLYGON);
        for(int i=1;i<=360;i++)     //360 kon
        {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
            glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
        }                                                                      //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}


void buildHouse(void)
{

    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, .60, 0.0);

    circle_kon(250, 250, 100, 100);

    glColor3f(1.0, 0.0, 0.0);

    circle_kon(200, 200, 100, 100);

//glColor3ub (255, 0, 0);
glColor3f(1.0, .60, 0.0);
glBegin(GL_POLYGON);
glVertex2d (25, 25);
glVertex2d (75, 25);
glVertex2d (75, 75);
glVertex2d (25, 75);
glEnd();

glFlush();




}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Circle Drawing");
	init();
	glutDisplayFunc(buildHouse);
	glutMainLoop();
}
