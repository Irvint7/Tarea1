#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(-1,0);glVertex2d(-1.3,2.3); 
    glVertex2d(0,1);glVertex2d(1.3,2.3);
    glVertex2d(1,0);glVertex2d(1,-5);
    glVertex2d(-1,-5);glVertex2d(-1,0);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2d(1.3,-0.6);glVertex2d(1.6,2.5); 
    glVertex2d(5,5.6);glVertex2d(4.6,6.0);
    glVertex2d(6,6.5); glVertex2d(5.5,1);
    glVertex2d(4.,0.0); glVertex2d(1.3,-0.6);
    glEnd();
    
     glBegin(GL_POLYGON);
    glVertex2d(-1.3,-0.6);glVertex2d(-1.6,2.5); 
    glVertex2d(-5,5.6);glVertex2d(-4.6,6.0);
    glVertex2d(-6,6.5); glVertex2d(-5.5,1);
    glVertex2d(-4.,0.0); glVertex2d(-1.3,-0.6);
    glEnd();
    
   
    glBegin(GL_POLYGON);
    glVertex2d(1.3,-5.3);glVertex2d(1.3,-5.3);
    glVertex2d(1.3,-0.9);glVertex2d(2.7,-1.6);
    glVertex2d(2.7,-8);glVertex2d(2,-8.5);
    glVertex2d(1.3,-6.); glVertex2d(-1.3,-6.);
    glVertex2d(-1.3,-5.3);
    glEnd();
    
    
    glBegin(GL_POLYGON);
   
    glVertex2d(-1.3,-0.9);glVertex2d(-2.7,-1.6);
    glVertex2d(-2.7,-8);glVertex2d(-2,-8.5);
    glVertex2d(-1.3,-6.);
    glEnd();
    
    
    glBegin(GL_POLYGON);
   glVertex2d(4,-1);glVertex2d(4,-0.4); 
   glVertex2d(5.3,0.4); glVertex2d(5.,-6.2);
   glVertex2d(3.,-7.7); glVertex2d(3,-1.6);
    glEnd();
    
   glBegin(GL_POLYGON);
   glVertex2d(-4,-1);glVertex2d(-4,-0.4); 
   glVertex2d(-5.3,0.4); glVertex2d(-5.,-6.2);
   glVertex2d(-3.,-7.7); glVertex2d(-3,-1.6);
   glEnd();
    
     glBegin(GL_POLYGON);
   glVertex2d(1,-6.4);glVertex2d(-1,-6.4); 
   glVertex2d(-1.6,-8.6); glVertex2d(1.6,-8.6);
   glEnd();
    
    
    
   
	glBegin(GL_POLYGON);
    glVertex2d(0.0,1.3);
    glVertex2d(3.8,5);
    glVertex2d(4.4,6);
    glBegin(GL_POINTS);
	for(double i=0.75; i<2.3; i+=0.001){
		float rad=6, calx,caly;
		calx= rad*cos(i);
		caly= rad*sin(i)+1.9;
		glVertex2d(calx, caly);
	}
	glVertex2d(-4.4,6);
	glVertex2d(-3.8,5);
    glVertex2d(0.0,1.3);
	glEnd();
	 
    glEnd();
    glColor3d(0.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(0,3.8);glVertex2d(2.4,6); 
    glVertex2d(-2.4,6);
    glEnd();
    
   glBegin(GL_POLYGON);
   glVertex2d(2,0.6);glVertex2d(2.1,1.1); 
   glVertex2d(5,2.8); glVertex2d(4.9,2.3);
   glEnd();
   
   glBegin(GL_POLYGON);
   glVertex2d(2,1.6);glVertex2d(2.1,2.1); 
   glVertex2d(5,3.8); glVertex2d(4.9,3.3);
   glEnd();
   
   glBegin(GL_POLYGON);
   glVertex2d(-2,0.6);glVertex2d(-2.1,1.1); 
   glVertex2d(-5,2.8); glVertex2d(-4.9,2.3);
   glEnd();
   
   glBegin(GL_POLYGON);
   glVertex2d(-2,1.6);glVertex2d(-2.1,2.1); 
   glVertex2d(-5,3.8); glVertex2d(-4.9,3.3);
   glEnd();
    
    glColor3f(0.71, 0.07, 0.07);
    
   glBegin(GL_POLYGON);
   glVertex2d(1.3,-0.9);glVertex2d(2.7,-1.6);
    glVertex2d(3,-1.6);glVertex2d(4,-1);
     glVertex2d(4,-1);glVertex2d(4,-0.4); 
    glVertex2d(4,0);glVertex2d(1.3,-0.6);
   
   glEnd();
    glBegin(GL_POLYGON);
   glVertex2d(-1.3,-0.9);glVertex2d(-2.7,-1.6);
    glVertex2d(-3,-1.6);glVertex2d(-4,-1);
     glVertex2d(-4,-1);glVertex2d(-4,-0.4); 
    glVertex2d(-4,0);glVertex2d(-1.3,-0.6);
   
   glEnd();
    
    glFlush();
    
    
   
}


void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10,10,-10,10,-10,10);
    glClearColor(0.0,0.0,0.0,0.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Transformers");
    init ();
    glutDisplayFunc(display);
   
    glutMainLoop();
    return 0;
}

//hola esto es para hacer un cambio en esta vaina
//hola MEMO 
