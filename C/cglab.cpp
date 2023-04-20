#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<GL/glu.h>
void display();

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.5);
	glBegin(GL_POINTS);
	   glVertex2f(1.5,4.1);
	glEnd();
}


int main(int argc, char** argv) {
	 
	 glutInit(&argc, argv);
//	 glutInitDisplayMode(GLUT_RGB| GLUT_SINGLE);
	 glutInitWindowSize(320,320);
	 glutInitWindowPosition(50,50);
	 glutCreateWindow("Display for Point");
	 glutDisplayFunc(display);
	 glutMainLoop();
	 
	return 0;
}
