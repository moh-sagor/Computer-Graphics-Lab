
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0,posy=0;
int day = 1;

///tree

void tree()
{
///tree1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50+500, 350, 0);
    glVertex3i(70+500, 350, 0);


    glVertex3i(70+500, 500, 0);
    glVertex3i(50+500, 500, 0);

glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10+500, 500, 0);
    glVertex3i(110+500, 500, 0);


    glVertex3i(60+500, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+500, 550, 0);
    glVertex3i(105+500, 550, 0);


    glVertex3i(60+500, 650, 0);



glEnd();
}


///river
void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}


///house

void house()
{

///house1


    glColor3f(1.0f, 0.5f, 0.1f);
    glBegin(GL_POLYGON);
    glVertex2i(100+600, 250+300);
    glVertex2i(300+600, 250+300);
    glVertex2i(350+600, 175+300);
    glVertex2i(150+600, 175+300);
    glEnd();

    glColor3f(0.6, 0.0, 0.9);
    glBegin(GL_TRIANGLES);
    glVertex2i(100+600, 250+300);
    glVertex2i(50+600, 175+300);
    glVertex2i(175+600, 175+300);
    glEnd();

    glColor3f(0.1, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(50+600, 175+300);
    glVertex2i(150+600, 175+300);
    glVertex2i(150+600, 50+300);
    glVertex2i(50+600, 50+300);
    glEnd();

    glColor3f(0.5, 0.2, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(75+600, 125+300);
    glVertex2i(125+600, 125+300);
    glVertex2i(125+600,50+300);
    glVertex2i(75+600, 50+300);
    glEnd();



    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(150+600, 175+300);
    glVertex2i(350+600, 175+300);
    glVertex2i(350+600, 50+300);
    glVertex2i(150+600, 50+300);
    glEnd();

    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(165+600, 160+300);
    glVertex2i(225+600, 160+300);
    glVertex2i(225+600, 115+300);
    glVertex2i(165+600, 115+300);
    glEnd();

    glColor3f(0.7, 0.3, 0.7);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2i(195+600, 160+300);
    glVertex2i(195+600, 115+300);
    glVertex2i(165+600, 136.5+300);
    glVertex2i(225+600, 136.5+300);
    glEnd();

    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(265+600, 160+300);
    glVertex2i(325+600, 160+300);
    glVertex2i(325+600, 115+300);
    glVertex2i(265+600, 115+300);
    glEnd();

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(295+600, 160+300);
    glVertex2i(295+600, 115+300);
    glVertex2i(265+600, 136.5+300);
    glVertex2i(325+600, 136.5+300);
    glEnd();

}


int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(1.0f, 0.5f, 0.1f);
    glBegin(GL_POLYGON);

    glVertex3i(10,150,0);
    glVertex3i(150+50,150,0);
    glVertex3i(120+50,100,0);
    glVertex3i(30,100,0);
    glEnd();

    glColor3f(1.0f, 0.7f, 0.3f);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();


}



///clouds
void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();

         sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
    else
    {

        land();
        hill();
        tree();
        river();
        house();
        //sun();

        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}
void init(void)
{

glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}

