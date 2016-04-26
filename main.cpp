#include <GL/gl.h>
#include <GL/glut.h>
<<<<<<< HEAD
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
=======
#include <stdlib.h>

void init(void)
{
    GLfloat light_position[] = { 5.0, 5.0, 5.0,0.0};

// Activamos la fuente de luz
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

}
	GLfloat mat_ambient[] = { 0.329412f, 0.223529f, 0.027451f,1.0f };
    GLfloat mat_diffuse[] = { 0.780392f, 0.568627f, 0.113725f, 1.0f };
    GLfloat mat_specular[] = { 0.992157f, 0.941176f, 0.807843f, 1.0f };
    GLfloat shine[] = {27.8974f};

void materiales (GLfloat mat_ambient[],GLfloat mat_diffuse[], GLfloat mat_specular[], GLfloat shine[]){
	glPushMatrix();
//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	glutSolidSphere(2.0,200,200);
    glFlush();
	
	
	
	}


void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
// Activamos la matriz de proyeccion.
    glMatrixMode(GL_PROJECTION);
// "limpiamos" esta con la matriz identidad.
    glLoadIdentity();
// Usamos proyeccion ortogonal
    glOrtho(-3, 3, -3, 3, -3, 3);
// Activamos la matriz de modelado/visionado.
    glMatrixMode(GL_MODELVIEW);
// "Limpiamos" la matriz
    glLoadIdentity();
}

// Aqui ponemos lo que queremos dibujar.
void display(void)
{
// Propiedades del material


// "Limpiamos" el frame buffer con el color de "Clear", en este
// caso negro.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();

// Rotacion de 20 grados en torno al eje x
    glRotated(20.0, 1.0, 0.0, 0.0);
// Rotacion de -30 grados en torno al eje y
    glRotated(-30.0, 0.0, 1.0, 0.0);
// Dibujamos una "Tetera" y le aplico el material
	materiales(mat_ambient,mat_diffuse,mat_specular,shine);
    
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27:
        exit(0);
        break;
    }
}

// Main del programa.
int main(int argc, char **argv)
{
// Inicializo OpenGL
    glutInit(&argc, argv);

// Activamos buffer simple y colores del tipo RGB
    glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);

// Definimos una ventana de medidas 800 x 600 como ventana
// de visualizacion en pixels
    glutInitWindowSize (800, 600);

// Posicionamos la ventana en la esquina superior izquierda de
// la pantalla.
    glutInitWindowPosition (0, 0);

// Creamos literalmente la ventana y le adjudicamos el nombre que se
// observara en su barra de titulo.
    glutCreateWindow ("Tetera :D ");

// Inicializamos el sistema
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
>>>>>>> a8e61d84e6584fbcedb565c00798bc671621302a
