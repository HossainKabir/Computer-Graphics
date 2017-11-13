#ifndef GAME_OVER_H_INCLUDED
#define GAME_OVER_H_INCLUDED


#include <sstream>
#include <string>
#include <iostream>

#include "Library.h"
#include "Background.h"


void DDrawText(const char *text, int length, int x, int y)
{
    /// ------------------ Text Display Function, Font: Times Roman, Size: 24 --------------------

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


void Over ()
{

    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();


        glPushMatrix();
            glColor3f (1,.2,1);
            glutWireCube(1.9);
            glutWireCube(1.8);
            glutWireCube(1.7);
            glutWireCube(1.6);
            glutWireCube(1.5);
            glutWireCube(1.4);
            glutWireCube(1.3);
            glutWireCube(1.2);
            glutWireCube(1.1);
            glutWireCube(1.0);

            glColor3f(0,1,1);
            string text;

            text = "Your Score is :";
            DDrawText(text.data(), text.size(), 240, 220);


            stringstream conv;
            conv << score << endl;
            string  Score_s = conv.str();
            DDrawText(Score_s.data(), Score_s.size(), 320, 220);



            text = "Thank you For Enjoy iT";
            DDrawText(text.data(), text.size(), 240, 200);
            text = "_GAME_OVER_";
            DDrawText(text.data(), text.size(), 250, 150);

        glPopMatrix();



    glPopMatrix();

     glFlush ();
}



#endif // GAME_OVER_H_INCLUDED
