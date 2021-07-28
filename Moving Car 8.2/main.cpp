#include <windows.h>
//#ifdef __APPLE__
//#include <GLUT/glut.h>
//#else
#include <GL/glut.h>
//#endif

#include <stdlib.h>

#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);


	glTranslatef(tx,ty,0);

    glRectf(-25.0, -25.0, 25.0, 25.0);

	glPopMatrix();

	//glColor3f(0.0, 1.0, 0.0);
	//glRectf(-50.0, -50.0, 50.0, 50.0);



	glFlush();
}

void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}


void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			break;

		case 'r':
			spinDisplay_right();
			break;


		case 's':
			 glutIdleFunc(NULL);  // make idle function inactive
			 break;

	  default:
			break;
	}
}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=5;
				glutPostRedisplay();
				break;

			//spinDisplay_left();
			//break;

		case GLUT_KEY_RIGHT:
				tx +=5;
				glutPostRedisplay();
				break;

			//spinDisplay_right();
			//break;

		case GLUT_KEY_DOWN:
				ty -=5;
				glutPostRedisplay();
				break;

			//spinDisplay_left();
			//break;

		case GLUT_KEY_UP:
				ty +=5;
				glutPostRedisplay();
				break;

	  default:
			break;
	}
}


void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         //if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
         //if (state == GLUT_DOWN)
			glutIdleFunc(NULL);
			break;
      case GLUT_RIGHT_BUTTON:
        // if (state == GLUT_DOWN)
			glutIdleFunc(spinDisplay_right);
          //glutIdleFunc(NULL); // make idle function inactive
         break;
      default:
         break;
   }
}


/*void my_reshape(int w, int h)
{
	glViewport (0,0,500, 500);
	//glViewport (0,0,w, h);

}*/



/*
 *
 *  Register mouse input callback functions
 */


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Transformation");
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);
	//glutReshapeFunc(my_reshape);
	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}
