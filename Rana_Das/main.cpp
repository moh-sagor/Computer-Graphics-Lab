#include<windows.h>
#include <gl/glut.h>
#include <math.h>
#define PI 3.1415926

//Draw a rectangle, the XY coordinates of the lower left corner and the XY coordinates of the upper right corner are passed in
void glRect(int leftX, int leftY, int rightX, int rightY) {
         //Draw a closed curve
    glBegin(GL_LINE_LOOP);
         //Lower left corner
    glVertex2d(leftX, leftY);
         //Lower right corner
    glVertex2d(rightX, leftY);
         //Upper right corner
    glVertex2d(rightX, rightY);
         //Upper left corner
    glVertex2d(leftX, rightY);
         //End drawing
    glEnd();
}

 //Draw a rounded rectangle, pass in the width and height of the rectangle, the corner radius, and the coordinates of the center point of the rectangle
void glRoundRec(int centerX, int centerY, int width, int height, float cirR)
{
         //Calculate the value of half the width and height of the inner rectangle
    int w = width / 2 - cirR;
    int h = height / 2 - cirR;

         //The PI-half, the angle of one quadrant
    float PI_HALF = PI / 2;
         //The coordinates of the rounded rectangle
    float tx, ty;
         //Round radius, ts start radian, te end radian, dt increase radian
    double t, ts, te;
    double dt = 1 / cirR;
         //Four quadrants, arcs have different operations with w and h, define the operators of the four quadrants
    int opX[4] = { 1,-1,-1,1 };
    int opY[4] = { 1,1,-1,-1 };
         //Draw a line
    glBegin(GL_LINE_LOOP);
         //Used to count, from the first quadrant to the fourth quadrant
    int x,y;
    for (x = 0; x < 4; x = x + 1)
    {
        ts = PI_HALF * x;
        te = PI_HALF * (x + 1);
        for (t = ts; t <= te; t += dt)
        {
            tx = cirR * cos(t) + opX[x] * w + centerX;
            ty = cirR * sin(t) + opY[x] * h + centerY;
            glVertex2f(tx, ty);
        }
    }
    glEnd();
}

 //Draw arc, relative offset XY, start radian, end radian, radius
void glArc(double x, double y, double start_angle, double end_angle, double radius)
{
         //Start drawing the curve
    glBegin(GL_LINE_STRIP);
         //The radian added each time
    double delta_angle = PI / 180;
         //Draw an arc
    for (double i = start_angle; i <= end_angle; i += delta_angle)
    {
                 //Absolute positioning plus trigonometric function value
        double vx = x + radius * cos(i);
        double vy = y + radius * sin(i);
        glVertex2d(vx, vy);
    }
         //End drawing
    glEnd();
}


 //Draw a circle
void glCircle(double x, double y, double radius)
{
         //Draw a full circle
    glArc(x, y, 0, 2 * PI, radius);
}

 //Draw a triangle and pass in the coordinates of the three points
void glTri(int x1, int y1, int x2, int y2, int x3, int y3) {
         //Draw a closed line
    glBegin(GL_LINE_LOOP);
         //A little
    glVertex2d(x1, y1);
         //two points
    glVertex2d(x2, y2);
         //Three points
    glVertex2d(x3, y3);
         //End drawing
    glEnd();
}

 //Draw a line, pass in two coordinates
void glLine(int x1, int y1, int x2, int y2) {
         //Draw a line
    glBegin(GL_LINES);
         //A little
    glVertex2d(x1, y1);
         //two points
    glVertex2d(x2, y2);
         //End drawing
    glEnd();
}

 //Function is used to draw pictures
void display(void)
{
         //GL_COLOR_BUFFER_BIT means clear color
    glClear(GL_COLOR_BUFFER_BIT);
         //Set the line color
    glColor3f(0.0, 0.0, 0.0);
         //Set the line width
    glLineWidth(2);

         //Draw a rounded rectangle, big belly
    glRoundRec(0, 0, 146, 120, 15);
         //Draw a rounded rectangle with a big face
    glRoundRec(0, 113, 128, 74, 10);
         //Rectangle with rounded corners, two ears
    glRoundRec(81, 115, 20, 34, 5);
    glRoundRec(-81, 115, 20, 34, 5);
         //Draw a rectangle with rounded corners, long legs
    glRoundRec(-32, -92, 38, 52, 10);
    glRoundRec(32, -92, 38, 52, 10);

         //Two eyes
    glCircle(-30, 111, 10);
    glCircle(30, 111, 10);
         //Draw a circle, palm
    glCircle(-95, -47, 10);
    glCircle(95, -47, 10);
         //Arc, draw mouth
    glArc(0, 133, 11 * PI / 8, 13 * PI / 8, 45);

         //Draw a rectangle, neck
    glRect(-25, 60, 25, 76);
         //Draw a rectangle, where the arms connect
    glRect(-81, 43, -73, 25);
    glRect(81, 43, 73, 25);
         //Draw a rectangle, upper arm
    glRect(-108, 45, -81, 0);
    glRect(108, 45, 81, 0);
         //Draw a rectangle, middle arm
    glRect(-101, 0, -88, -4);
    glRect(101, 0, 88, -4);
         //Draw a rectangle, lower arm
    glRect(-108, -4, -81, -37);
    glRect(108, -4, 81, -37);
         //Draw the leg connection
    glRect(-41, -62, -21, -66);
    glRect(41, -62, 21, -66);
         //Draw a rectangle, ankle
    glRect(-41, -125, -21, -117);
    glRect(41, -125, 21, -117);
         //Draw a rectangle, big sole
    glRect(-59, -125, -8, -137);
    glRect(59, -125, 8, -137);

         //Two antennas
    glLine(-35, 150, -35, 173);
    glLine(35, 150, 35, 173);


         //Draw the triangle, the triangle in the belly
    glTri(-30, -15, 30, -15, 0, 28);
           //Draw a circle with a small circle in the middle
    glCircle(0, 0, 10);

    glFlush();
}
