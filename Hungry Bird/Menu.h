#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "Tree.h"
#include "Background.h"
#include "Bird.h"

void Menu()
{

    glPushMatrix();
        glTranslatef(-.79,.95,0);
        glScalef(.55,.55,.55);
        new_bird();

    glPopMatrix();

    glPushMatrix();
        glTranslatef(-.85,.85,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);
        glScalef(.06,.06,.06);
    glutSolidTorus(.2,.7 , 10,10);

     glPopMatrix();

    glPushMatrix();
        glTranslatef(.8,.7,0);
        glScalef(.28,.28,.28);
        Tree_L();
        glTranslatef(-.6,-.22,0);
        Tree_R();
    glPopMatrix();

    glPushMatrix();

        glPushMatrix();
            glColor3f(.5,.1,.2);
            glTranslatef(0,.3,0);
            glScalef(5,.2,1);
        glutSolidCube(.5);
        glPopMatrix();

        glColor3f(1,.6,.2);
        glPushMatrix();
            glTranslatef(0,-.03,0);
            glScalef(2,.4,1);
            glutSolidCube(.5);

        glPopMatrix();


        glPushMatrix();
            glTranslatef(0,-0.3,0);
            glScalef(2,.4,1);
            glutSolidCube(.5);
        glPopMatrix();

    glPopMatrix();


    string text;
    glColor3f(0,1,1);
    text = "_Hungry_Bird_";
    DrawText(text.data(), text.size(), 250, 350);

    text = "Play";
    DrawText(text.data(), text.size(), 290, 185);

    text = "Exit";
    DrawText(text.data(), text.size(), 290, 135);

    glFlush();

}


#endif // MENU_H_INCLUDED
