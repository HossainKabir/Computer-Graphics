#include "Run.h"
#include "Bird.h"
#include "keyboard.h"



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutInitWindowPosition(50, 90);
	glutCreateWindow("_Hungry_Bird_ ");

    glutDisplayFunc(Run);
    glutSpecialFunc(SpecialInput);
    glutMouseFunc(mouse);
    glutPassiveMotionFunc(mouse_motion);

    glutMainLoop();


}

