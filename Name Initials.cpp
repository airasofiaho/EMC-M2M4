#include <GL/glut.h>

void display();
void reshape(int,int);

void init()
{
	
	glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(200,100);
	glutInitWindowSize(500,500);
	glutCreateWindow ("Name Initials");

	
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();
	glutMainLoop();

}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

//Formation of Letter A

	glColor3f(0,0,1);
	glBegin(GL_QUADS);
	glVertex2f(-1,0);
	glVertex2f(-3,8);
	glVertex2f(-5,8);
	glVertex2f(-7,0);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex2f(-5,0);
	glVertex2f(-4.5,3);
	glVertex2f(-3.5,3);
	glVertex2f(-3,0);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex2f(-4.5,4);
	glVertex2f(-4,6);
	glVertex2f(-4,6);
	glVertex2f(-3.5,4);
	glEnd();

	//Formation of Letter H
	glColor3f(0,0,1);
	glBegin(GL_QUADS);
	glVertex2f(1,0);
	glVertex2f(1,8);
	glVertex2f(3,8);
	glVertex2f(3,0);
	glEnd();

	glColor3f(0,0,1);
	glBegin(GL_QUADS);
	glVertex2f(3,5);
	glVertex2f(5,5);
	glVertex2f(5,3);
	glVertex2f(3,3);
	glEnd();

	glColor3f(0,0,1);
	glBegin(GL_QUADS);
	glVertex2f(5,0);
	glVertex2f(5,8);
	glVertex2f(7,8);
	glVertex2f(7,0);
	glEnd();

	
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}