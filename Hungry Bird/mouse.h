#ifndef MOUSE_H_INCLUDED
#define MOUSE_H_INCLUDED

#include "Library.h"
#include "game_over.h"

int mouseX = 0, mouseY = 0;

void mouse_motion(int x, int y)
{
    //std::cerr << "\t mouse is at (" << x << ", " << y << ")" << std::endl;
    glutPostRedisplay();
}



void mouse(int button, int state, int x, int y)
{
    mouseX = x;
    mouseY = y;
    switch(button)
    {
        case GLUT_LEFT_BUTTON:
            if(state==GLUT_DOWN)
            {

                    if(mouseX >=330 && mouseX <= 900)
                            if(mouseY >= 265 && mouseY <= 320)
                            {
                                glutDisplayFunc(Background);
                            }
                    else if(mouseX >=330 && mouseX <= 900)
                            if(mouseY >= 350 && mouseY <= 420)
                            {
                                exit(0);

                            }
            }






            default:
            break;
    }

}




/// ////////////////////////////////////////////// /// /////////////////////////////////////////



#endif // MOUSE_H_INCLUDED
