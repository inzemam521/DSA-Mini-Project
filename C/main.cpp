#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<GL/glu.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.5);
	glColor3f(1,0,0);
//	glBegin(GL_POINTS);
//	   glVertex2f(0.8,0.1);
    glBegin(GL_LINE_LOOP);
		glVertex2f(-0.8,0.1);
		glVertex2f(-0.2,0.1);
		glVertex2f(-0.2,0.7);
		glVertex2f(-0.8,0.7);

	glEnd();  
	glFlush(); 
	   
}



int main(int argc, char** argv) {
	 
	 glutInit(&argc, argv);
	 glutInitDisplayMode(GLUT_RGB);
	 glutInitWindowSize(320,320);
	 glutInitWindowPosition(50,50);
	 glutCreateWindow("Display for Point");
	 glutDisplayFunc(display);
	 glutMainLoop();
	 
	return 0;
}
