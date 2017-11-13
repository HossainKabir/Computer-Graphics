#ifndef ELEMENT_1_H_INCLUDED
#define ELEMENT_1_H_INCLUDED

#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

///  ///////////////////////////////////////////////////////////////////////////////////////////////
/// ////////////////////////////////////////////////////////////////////////////////////////////////
///                                                                                             ////
///                    COMPUTER GRAPHICS PROJECT ( Scetion : F )                                ////
///                     COURSE TEACHER: HASIBUL HASSAN                                          ////
///                                                                                             ////
///                 Submitted by ,                                                              ////
///                         1.Roky, S.M Rejaul Islam ( 14-26614-2 )                             ////
///                         2.Sweet,Md Hossain Kabir (14-26658-2)                               ////
///                                                                                             /////
/// /////////////////////////////////////////////////////////////////////////////////////////////////
/// /////////////////////////////////////////////////////////////////////////////////////////////////




#include "Library.h"
#include "Background.h"
#include "keyboard.h"
#include "game_over.h"

#include <unistd.h>


static float EE1 = .0001;


void Update_EElement_1(int value) {
	EE1 -= .00099 ;
	if (EE1 < -3) {
		EE1 += 3;
	}

	glutPostRedisplay();

	glutTimerFunc(.1, Update_EElement_1, 1);

}
float EE2 = .0001;


void Update_EElement_2(int value) {
	EE2 -= .00035 ;
	if (EE2 < -3.0) {
		EE2 += 3.0;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_EElement_2, 1);

}
float EE3 = .0001;


void Update_EElement_3(int value) {
	EE3 -= .00035 ;
	if (EE3 < -3.2) {
		EE3 += 3.2;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_EElement_3, 1);

}
float EE4 = .0001;


void Update_EElement_4(int value) {
	EE4 -= .00099 ;
	if (EE4 < -3) {
		EE4 += 3;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_EElement_4, 1);

}



float EE5 = .0001;


void Update_EElement_5(int value) {
	EE5 -= .00095 ;
	if (EE5 < -3) {
		EE5 += 3;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_EElement_5, 1);

}


///        ////////////////////////////////////////////////////////////////////////////////
void EElement ()
{

glMatrixMode(GL_MODELVIEW);

glPushMatrix();
    glTranslatef(-.2,0,0);
    glPushMatrix();


            ///     Boom        1
        glPushMatrix();
        glTranslatef(0,EE1 +1.2 ,0);

            glPushMatrix();


            if( EE1 <= -1.3 && posx <= -.7 )
            {
                EE1 -= .5;

                glutDisplayFunc(Over);

                //glutTimerFunc(.2, Update_Element_1, .0001);

            }
            else
            {
                glTranslatef(-.6,0,0);
                //glScalef(.7,.7,.7);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_EElement_1, .0001);

            }

            glPopMatrix();

        glPopMatrix();



    /// //     Ice-cream       2

        glPushMatrix();
        glTranslatef(0,EE2 +1.7 ,0);
            glPushMatrix();

            if( EE2 <= -1.8 && posx <= 0 && posx >-.2 )
            {
                EE2 -= .5;
                score = score + 5;
                glutTimerFunc(.2, Update_EElement_2, .0001);

            }
            else
            {
                glTranslatef(0,0,0);
                glScalef(.7,.7,.7);
                glColor3f(1,.9,1);
                glRotatef(60,.4,.3,0);
                glutSolidSphere(.09,20,20);
                glColor3f(1,.6,.5);
                glutSolidCone(.1,.3,10,10);

                glutTimerFunc(.2, Update_EElement_2, .0001);
            }

            glPopMatrix();
        glPopMatrix();


    /// Candy       3
        glPushMatrix();
        glTranslatef(0,EE3+2,0);
            glPushMatrix();

            if( EE3 <= -2.2 && posx >= .2)
            {
                EE3 -= .5;


                glutTimerFunc(.2, Update_EElement_3, .0001);
                score = score + 5;
                cout << score << endl;
            }
            else
            {

                glTranslatef(.5,0,0);
                glColor3f(1,0,0);
                glRotatef(60,.2,.7,0);

                glScalef(.1,.1,.1);
                glutSolidTorus(.2,.7 , 10,10);
                 glutTimerFunc(.2, Update_EElement_3, .0001);
            }

                glPopMatrix();


            glPopMatrix();

        ///     Boom        4
        glPushMatrix();
            glTranslatef(0,EE4 +1.2 ,0);


            glPushMatrix();


            if( EE4 <= -1.3 && posx >= .7 )
            {
                EE4 -= .5;
                glutDisplayFunc(Over);
                //glutTimerFunc(.2, Update_Element_4, .0001);

            }
            else
            {
                glTranslatef(1,0,0);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_EElement_4, .0001);
            }

        glPopMatrix();

    glPopMatrix();


            ///     Boom        5
        glPushMatrix();
            glTranslatef(0,EE5 +2 ,0);

            glPushMatrix();


            if( EE5 <= -2 && posx <=.1 && posx >= -.2 )

                {
                EE5 -= .5;
                glutDisplayFunc(Over);
                //glutTimerFunc(.2, Update_Element_4, .0001);

            }
            else
            {
                glTranslatef(.1,0,0);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_EElement_5, .0001);
            }

        glPopMatrix();

    glPopMatrix();



    glPopMatrix();
    glFlush();

glPopMatrix();

}



static float E1 = .0001;


void Update_Element_1(int value) {
	E1 -= .000029 ;
	if (E1 < -3) {
		E1 += 3;
	}

	glutPostRedisplay();

	glutTimerFunc(.1, Update_Element_1, 1);

}
float E2 = .0001;


void Update_Element_2(int value) {
	E2 -= .000015 ;
	if (E2 < -3.0) {
		E2 += 3.0;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_Element_2, 1);

}
float E3 = .0001;


void Update_Element_3(int value) {
	E3 -= .000025 ;
	if (E3 < -3.2) {
		E3 += 3.2;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_Element_3, 1);

}
float E4 = .0001;


void Update_Element_4(int value) {
	E4 -= .000029 ;
	if (E4 < -3) {
		E4 += 3;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_Element_4, 1);

}



float E5 = .0001;


void Update_Element_5(int value) {
	E5 -= .000055 ;
	if (E5 < -3) {
		E5 += 3;
	}

	glutPostRedisplay();
	glutTimerFunc(.1, Update_Element_5, 1);

}


///        ////////////////////////////////////////////////////////////////////////////////
void Element ()
{

glMatrixMode(GL_MODELVIEW);

glPushMatrix();
    glTranslatef(-.2,0,0);
    glPushMatrix();


            ///     Boom        1
        glPushMatrix();
        glTranslatef(0,E1 +1.2 ,0);

            glPushMatrix();


            if( E1 <= -1.3 && posx <= -.7 )
            {
                E1 -= .5;

                glutDisplayFunc(Over);

                //glutTimerFunc(.2, Update_Element_1, .0001);

            }
            else
            {
                glTranslatef(-.6,0,0);
                //glScalef(.7,.7,.7);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_Element_1, .0001);

            }

            glPopMatrix();

        glPopMatrix();



    /// //     Ice-cream       2

        glPushMatrix();
        glTranslatef(0,E2 +1.7 ,0);
            glPushMatrix();

            if( E2 <= -1.8 && posx <= 0 && posx >-.2 )
            {
                E2 -= .5;
                score = score + 5;
                glutTimerFunc(.2, Update_Element_2, .0001);

            }
            else
            {
                glTranslatef(0,0,0);
                glScalef(.7,.7,.7);
                glColor3f(1,.9,1);
                glRotatef(60,.4,.3,0);
                glutSolidSphere(.09,20,20);
                glColor3f(1,.6,.5);
                glutSolidCone(.1,.3,10,10);

                glutTimerFunc(.2, Update_Element_2, .0001);
            }

            glPopMatrix();
        glPopMatrix();


    /// Candy       3
        glPushMatrix();
        glTranslatef(0,E3+2,0);
            glPushMatrix();

            if( E3 <= -2.2 && posx >= .2)
            {
                E3 -= .5;


                glutTimerFunc(.2, Update_Element_3, .0001);
                score = score + 5;
                cout << score << endl;
            }
            else
            {

                glTranslatef(.5,0,0);
                glColor3f(1,0,0);
                glRotatef(60,.2,.7,0);

                glScalef(.1,.1,.1);
                glutSolidTorus(.2,.7 , 10,10);
                 glutTimerFunc(.2, Update_Element_3, .0001);
            }

                glPopMatrix();


            glPopMatrix();

        ///     Boom        4
        glPushMatrix();
            glTranslatef(0,E4 +1.2 ,0);


            glPushMatrix();


            if( E4 <= -1.3 && posx >= .7 )
            {
                E4 -= .5;
                glutDisplayFunc(Over);
                //glutTimerFunc(.2, Update_Element_4, .0001);

            }
            else
            {
                glTranslatef(1,0,0);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_Element_4, .0001);
            }

        glPopMatrix();

    glPopMatrix();


            ///     Boom        5
        glPushMatrix();
            glTranslatef(0,E5 +2 ,0);

            glPushMatrix();


            if( E5 <= -2 && posx <=.1 && posx >= -.2 )

                {
                E5 -= .5;
                glutDisplayFunc(Over);
                //glutTimerFunc(.2, Update_Element_4, .0001);

            }
            else
            {
                glTranslatef(.1,0,0);
                glColor3f(0,0,0);
                glRotatef(-60,.2,.7,0);
                glutSolidSphere(.09,20,20);
                glTranslatef(0,.08,0);

                glutSolidCube(.08);
                glTranslatef(0,.03,0);
                glColor3f(1,1,1);
                glScalef(.15,1,.1);
                glutSolidCube(.08);

                glutTimerFunc(.2, Update_Element_5, .0001);
            }

        glPopMatrix();

    glPopMatrix();



    glPopMatrix();
    glFlush();

glPopMatrix();

}



#endif // ELEMENT_H_INCLUDED


#endif // ELEMENT_1_H_INCLUDED
