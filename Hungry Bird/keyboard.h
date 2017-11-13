#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED


#include "Library.h"
#include "Background.h"


void SpecialInput (int key, int x, int y)
{

    switch (key)
    {
    case GLUT_KEY_LEFT :
        if(posx < -.8)
        {
            posx =  -.9;
            glutPostRedisplay();
            break;

        }
        else
        {
            posx = posx - .1;
            glutPostRedisplay();
            break;
        }

    case GLUT_KEY_RIGHT :
               if(posx > .8)
        {
            posx =  .8;
            glutPostRedisplay();
            break;

        }
        else
        {
            posx = posx + .1;
            glutPostRedisplay();
            break;
        }


    }
}





#endif // KEYBOARD_H_INCLUDED
