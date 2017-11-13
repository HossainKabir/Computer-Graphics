#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include "Library.h"

void Tree_R ()
{
     ///     Tree    ////////////////////////////////////////////////////////////////////
       glPushMatrix();

            glScalef(.7,.7,.7);

        /// //////////////// tree top ////////////////////////

            glPushMatrix();

                glColor3f(0.6, 0.4, 0.5);
                glTranslatef(-.3,-.65,0);
                glScalef(.7,8,1);
                glutSolidCube (0.2);

            glPopMatrix();



        /// ////////////    leave   /////////////////////////////
            glPushMatrix();

               glColor3f(0,.7,.3);
               glPushMatrix();

                    glTranslatef(-.7,0,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.5,0,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.3,0,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();
                    glTranslatef(-.1,0,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();


               glPushMatrix();
                    glTranslatef(.1,0,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();

               ///////////////////////////////////

                glPushMatrix();

                    glTranslatef(-.6,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.4,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.2,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();
                    glTranslatef(0,.2,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();

               //////////////////////////////////////////////////

                glPushMatrix();

                    glTranslatef(-.5,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.3,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.1,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               ///////////////////////////////////////////////

               glPushMatrix();

                    glTranslatef(-.4,.6,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.2,.6,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               ///////////////////////////////////////

                glPushMatrix();

                    glTranslatef(-.3,.8,0);
                    glutSolidSphere (0.2, 20, 30);

                glPopMatrix();


            glPopMatrix();


            /// //////////////////// Apple//////////////////////////////////


           glPushMatrix();


                glColor3f(.9,0,.2);
                glTranslatef(0,-.09,0);
                glScalef(1,1.2,1);

                glPushMatrix();
                    glTranslatef(-.3,.8,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();




                glPushMatrix();

                    glTranslatef(-.7,0,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.5,.05,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.1,.05,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();



                glPushMatrix();

                    glTranslatef(.1,.0,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.6,.25,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.3,.3,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(0,.25,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.5,.50,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.3,.55,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.1,.5,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

           glPopMatrix();


       glPopMatrix();

    ///     /////////////////////////////////////////////////////////////////////

}

void Tree_L ()
{
        ///     Tree    ////////////////////////////////////////////////////////////////////
       glPushMatrix();

            glScalef(.85,.85,.85);

        /// //////////////// tree top ////////////////////////

            glPushMatrix();

                glColor3f(0.5, 0.5, 0.2);
                glTranslatef(-.3,-.65,0);
                glScalef(.7,8,1);
                glutSolidCube (0.2);
            glPopMatrix();



        /// ////////////    leave   /////////////////////////////
            glPushMatrix();

               glColor3f(0,.7,.3);
               glPushMatrix();

                    glTranslatef(-.7,-.1,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.5,0,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.3,0,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();
                    glTranslatef(-.1,0,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();


               glPushMatrix();
                    glTranslatef(.1,-.1,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();

               ///////////////////////////////////

                glPushMatrix();

                    glTranslatef(-.65,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.4,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.2,.2,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();
                    glTranslatef(0.05,.2,0);
                    glutSolidSphere (0.2, 20, 30);
               glPopMatrix();

               //////////////////////////////////////////////////

                glPushMatrix();

                    glTranslatef(-.5,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


               glPushMatrix();

                    glTranslatef(-.3,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.1,.4,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               ///////////////////////////////////////////////

               glPushMatrix();

                    glTranslatef(-.4,.6,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.2,.6,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();


                ///////////////////////////////////////////////
                glPushMatrix();


                glScalef(.7,.7,.7);

                glPushMatrix();

                    glTranslatef(-.85,.98,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();

               glPushMatrix();

                    glTranslatef(-.05,.98,0);
                    glutSolidSphere (0.2, 20, 30);

               glPopMatrix();



            glPopMatrix();


               ///////////////////////////////////////

                glPushMatrix();

                    glScalef(.8,1.5,.8);
                    glTranslatef(-.38,.6,0);
                    glutSolidSphere (0.2, 20, 30);

                glPopMatrix();


            glPopMatrix();


            /// //////////////////// Apple//////////////////////////////////


           glPushMatrix();


                glColor3f(.9,0,.2);

                glPushMatrix();
                    glTranslatef(-.3,.8,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();




                glPushMatrix();

                    glTranslatef(-.7,0,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.5,.05,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.1,.05,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();



                glPushMatrix();

                    glTranslatef(.1,.0,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.6,.25,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(-.3,.3,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();


                glPushMatrix();

                    glTranslatef(0,.25,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.5,.50,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.3,.55,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

                glPushMatrix();

                    glTranslatef(-.1,.5,0);
                    glScalef(.4,.3,.3);
                    glutSolidSphere (0.1, 20, 30);

                glPopMatrix();

           glPopMatrix();


       glPopMatrix();

    ///     /////////////////////////////////////////////////////////////////////
}

void Tree ()
{
     glPushMatrix();

       glTranslatef(-.40,.2,0);
       Tree_L();

       glTranslatef(1.4,.35,0);
       Tree_R();

   glPopMatrix();

}


#endif // TREE_H_INCLUDED
