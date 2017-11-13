#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
#include "Library.h"
#include "Menu.h"
#include "Tree.h"
#include "Bird.h"
#include "Element_1.h"
#include "game_over.h"

#include <sstream>
#include <string>
#include <iostream>
using namespace std;

void Field()
{

    glPushMatrix();
        glColor3f(1,.7,.3);
        glTranslatef(.1,-.5,0);

        glPushMatrix();
            glTranslatef(-.8,-.9,0);
            glScalef(2,4,1);
            glutSolidSphere(.3,40,400);
        glPopMatrix();


       glPushMatrix();
            glTranslatef(1.2,.2,0);
            glScalef(3.8,1.8,1);
            glutSolidSphere(.3,40,400);
       glPopMatrix();


       glPushMatrix();
            glTranslatef(.2,-.9,0);
            glScalef(3,2.5,2);
            glutSolidSphere(.4,40,400);
       glPopMatrix();


    glPopMatrix();

}

void hall ()
{
        glPushMatrix();

            glColor3f(0.4, 0.4, 0.2);
            glTranslatef(-.2,.4,0);
            glScalef(1.7,1.9,1.7);
            glutSolidSphere(.1,30,30);

            glTranslatef(.17,0,0);
            glutSolidSphere(.1,30,30);

            glTranslatef(.17,0,0);
            glutSolidSphere(.1,30,30);

            glTranslatef(.17,0,0);
            glutSolidSphere(.1,30,30);

            glTranslatef(.17,0,0);
            glutSolidSphere(.1,30,30);

        glPopMatrix();
}

void sky()
{


        glPushMatrix();
            glTranslatef(0,.8,0);
            glScalef(30,7,5);
            glColor3f(0.4, 0.5, 1.0);
            glutSolidCube(.1);

        glPopMatrix();


}

void river()
{
    glPushMatrix();
        glTranslatef(0,-.2,0);
        glColor3f(0.2, 0.3, 1.1);
        glScalef(10,5,10);
        glutSolidCube(.2);

    glPopMatrix();
}

void cloud  ()
{
    glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(.1,.8,0);
        glScalef(.9,1,.9);
        glutSolidSphere(.15,20,20);

        glTranslatef(-.2,0,0);
        glutSolidSphere(.1,20,20);

        glTranslatef(.4,0,0);
        glutSolidSphere(.1,20,20);

    glPopMatrix();
}

void DrawText(const char *text, int length, int x, int y)
{

    glMatrixMode(GL_PROJECTION);
    double *matrix = new double[100];
    glGetDoublev(GL_PROJECTION_MATRIX, matrix);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 400.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glPushMatrix();
        glLoadIdentity();
        glRasterPos2i(x, y);

        for(int i=0; i<length; i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (int)text[i]);

    glPopMatrix();

    glMatrixMode(GL_PROJECTION);
    glLoadMatrixd(matrix);
    glMatrixMode(GL_MODELVIEW);
}




void Background(void)
{
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        sky();
        cloud ();
        hall();
        river();
        Field();
        Tree();
        new_bird();
/// ////////////////////////////////////

        if (score >= 50)
        {

                glPushMatrix() ;
                glColor3f(1,0,0);
                string text = " @ You are In Level Two @ ";
                DrawText(text.data(), text.size(), 260, 365);
                glPopMatrix();

            glPushMatrix();

                EElement ();


            glPopMatrix();

        }
        else
        {
            glPushMatrix();
            Element ();
            glPopMatrix();
        }




    glPushMatrix();



        glColor3f(0,0,0);
        string text = "Score : ";
        DrawText(text.data(), text.size(), 305, 345);


        stringstream convert;
        convert << score << endl;
        string  score_s = convert.str();
        DrawText(score_s.data(), score_s.size(), 350, 345);



    glPopMatrix();
   glFlush ();
}

#endif // BACKGROUND_H_INCLUDED
