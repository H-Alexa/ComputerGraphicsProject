#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include<math.h>
#include<cmath>
#define M_PI 3.1416

float counter = 600;

void myInit()
{
    glClearColor(1,1,1,1); // Background Color
    glColor3f(1,0,0); // Drawing Color
    glClear(GL_COLOR_BUFFER_BIT);

    glClearColor(0, 0, 0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,720,640,0);
}

void drawc(float r, float x, float y)
{
    float i = 0.0f;
    glColor3f(0.1,0.1,0.1);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(r*cos(M_PI * i / 180.0) + x, r*sin(M_PI * i / 180.0) + y);

    glEnd();
}
void sun()
{
    float r,x,y;
    r=25;
    x=600;
    y= 80;
    float i = 0.0f;
    glColor3f(1,0.8,0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(r*cos(M_PI * i / 180.0) + x, r*sin(M_PI * i / 180.0) + y);

    glEnd();
}


void bus()
{
//    glLoadIdentity();
//       counter=counter-0.05;
//       glTranslated(counter,100,0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.4,0.3);
    glVertex2f(40, 250);
    glVertex2f(40, 345);
    glVertex2f(300, 345);
    glVertex2f(300, 250);
    glEnd();



    drawc(20,80, 331);
    drawc(20,250, 331);

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(50, 255);
    glVertex2f(50, 300);
    glVertex2f(290, 300);
    glVertex2f(290, 255);
    glEnd();

    //JU

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(150, 310);
    glVertex2f(150, 330);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(140, 330);
    glVertex2f(150, 330);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(140, 325);
    glVertex2f(140, 330);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(155, 310);
    glVertex2f(155, 330);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(155, 330);
    glVertex2f(165, 330);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(165, 310);
    glVertex2f(165, 330);
    glEnd();


    //window bar

    for(int i=90; i<290; i+=40)
    {

        glBegin(GL_LINES);
        glColor3f(0.2,0.4,0.3);
        glVertex2f(i, 255);
        glVertex2f(i, 300);
        glEnd();

    }


}
void minar()
{

    //bg
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.7,0.7);
    glVertex2f(0, 0);
    glVertex2f(0, 350);
    glVertex2f(720, 350);
    glVertex2f(720, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.3);
    glVertex2f(0, 350);
    glVertex2f(0, 640);
    glVertex2f(720, 640);
    glVertex2f(720, 350);
    glEnd();

    sun();


    //Bus
    bus();
    //minar floor
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.1,0.1);
//    glColor3f(0.7,0.4,0.2);

    glVertex2f(150, 420);
    glVertex2f(350, 340 );
    glVertex2f(550, 420);
    glEnd();

    //nicher stair
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(150, 420);
    glVertex2f(150, 430);
    glVertex2f(550, 430);
    glVertex2f(550, 420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.1,0);
    glVertex2f(140, 430);
    glVertex2f(140, 440);
    glVertex2f(560, 440);
    glVertex2f(560, 430);
    glEnd();
    int x1=140, y1=430, x2 = 560, y2 = 440;
    int t=5;
    while(t--)
    {
        glBegin(GL_POLYGON);
        if(t%2!=0)
        {

            glColor3f(0.4,0.1,0);
        }
        else
        {
            glColor3f(0,0,0);
        }
        x1-=10;
        y1+=10;
        x2+=10;
        y2+=10;
        glVertex2f(x1, y1);
        glVertex2f(x1, y2);
        glVertex2f(x2, y2);
        glVertex2f(x2, y1);
        glEnd();

    }





    //minarback

    glBegin(GL_POLYGON);
//    glColor3f(0.5,0.2,0);
//    glColor3f(0.7,0.4,0.2);
    glColor3f(0.4,0.1,0.1);
//    glColor3f(0.3,0.1,0);
    glColor3f(0.3,0.1,0);
    glVertex2f(315, 130);
    glVertex2f(315, 400);
    glVertex2f(390, 400);
    glVertex2f(390, 130);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(5);
    glColor3f(0,0,0);
    glVertex2f(350, 145);
    glVertex2f(350, 350);
    glEnd();

    //stairs minar

    int aa= 335, bb = 365;
    for(int i=350; i<400; i+=10)
    {
        if((i/10)%2==0)
            glColor3f(0,0,0);
        else glColor3f(0.4,0.1,0);

        glBegin(GL_POLYGON);
        glVertex2f(aa, i);
        glVertex2f(aa, i+10);
        glVertex2f(bb, i+10);
        glVertex2f(bb, i);
        aa-=10;
        bb+=10;
        glEnd();

    }
    glBegin(GL_LINES);
    glLineWidth(30);
    glColor3f(0,0,0);
    glVertex2f(300, 400);
    glVertex2f(400, 400);
    glEnd();





    //samner matha
    glLineWidth(60);
    glBegin(GL_LINES);
//    glColor3f(0.44,0.11,0.10);
//        glColor3f(0.3,0.1,0);
    glColor3f(0.5,0.2,0);
//    glColor3f(0.7,0.2,0);
    glVertex2f(300, 100);
    glVertex2f(300, 400);
    glEnd();

    glBegin(GL_LINES);
//    glColor3f(0.7,0.2,0);
    glVertex2f(400, 100);
    glVertex2f(400, 400);
    glEnd();

    //horizon bar
    glLineWidth(200);
    glBegin(GL_LINES);
//    glColor3f(0.7,0.2,0);
    glVertex2f(300, 300);
    glVertex2f(400, 300);
    glEnd();


    glBegin(GL_LINES);
//    glColor3f(0.7,0.2,0);
    glVertex2f(300, 310);
    glVertex2f(400, 310);
    glEnd();



    //onno matha




    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3f(0,0,0);
    glVertex2f(315, 130);
    glVertex2f(350, 145);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3f(0,0,0);
    glVertex2f(385, 130);
    glVertex2f(350, 145);
    glEnd();















}
void draw()
{
    minar();
    glFlush();

}


int main(int argC, char* argV[])
{
    glutInit(&argC, argV);
    glutInitWindowSize(720, 640);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Final_1771");
    myInit();
    glutDisplayFunc(draw);
    glutMainLoop();
}

