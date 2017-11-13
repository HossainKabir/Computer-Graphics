
#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED

#include "Library.h"


void new_bird()
{
    glMatrixMode(GL_MODELVIEW);



glPushMatrix();

    glTranslatef( posx,-.4,0);
    glScalef(.4,.4,.4);

    glPushMatrix();
        glRotatef(-60,.5,.3,.8);

        glPushMatrix();
            glColor3f(1,.3,.3);
            glRotatef(-60,.2,.2,0);
            glutSolidCone(.2,.5,20,20);
        glPopMatrix();

        glPushMatrix();
            glRotatef(60,.2,-.2,0);
            glutSolidCone(.2,.5,20,20);
        glPopMatrix();

        glPushMatrix();
            glColor3f(.3,.7,.1);
           glTranslatef(.05,0,0);
           glScalef(1,1.3,1);
           glutSolidSphere(.25,20,20);
        glPopMatrix();



    /// ///////EYE///////////////
        glPushMatrix();
            glTranslatef(0,.15,.015);
            glPushMatrix();
            glColor3f(1,1,1);
            glScalef(.31,1,1);
            glutSolidSphere(.05,20,20);
        glPopMatrix();

        glPushMatrix();
            glColor3f(0,0,0);
            glScalef(.21,1,1);
            glutSolidCube(.05);
        glPopMatrix();

        glPushMatrix();
            glColor3f(0,0,0);
            glTranslatef(.028,.045,0);
            glRotatef(230,2,.2,0);
            glScalef(.2,2.5,1);
            glutSolidCube(.06);
        glPopMatrix();

    glPopMatrix();
    glPopMatrix();

/// //////// legs///////////////////////////
    glPushMatrix();
        glColor3f(1,.3,.2);
        glTranslatef(0,-1.3,0);
        glScalef(.2,1.2,1);
        glutSolidCube(.2);
    glPopMatrix();

    glPushMatrix();
        glColor3f(1,.3,.2);
        glTranslatef(.2,-1.3,0);
        glScalef(.2,1.2,1);
        glutSolidCube(.2);
    glPopMatrix();

////////////////////////////////////////


/////////// BODY////////////////
    glPushMatrix();
        glColor3f(.3,.7,.1);
        glTranslatef(0.09,-.75,0);
        glScalef(1.1,1.6,1);
        glutSolidSphere(.3,20,20);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.2,-.69,0);
        glRotatef(150,.2,.44,.5);
        glutSolidCone(.3,.5,5,5);
    glPopMatrix();

/////////////////////////////////////


glPopMatrix();
}


#endif // BIRD_H_INCLUDED

