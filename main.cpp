#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

void init(void)
{
    GLfloat light_position[] = { 0.0, 0.0, 5.0,0.0};

// Activamos la fuente de luz
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

}
	GLfloat ambient[] = { 0.0215f, 0.1745f, 0.0215f, 0.55f };
    GLfloat diffuse[] = {0.07568f, 0.61424f, 0.07568f, 0.55f};
    GLfloat specular[] = {0.633f, 0.727811f, 0.633f, 0.55f};
    GLfloat sshine[] = {76.8f};

void materiales (GLfloat mat_ambient[],GLfloat mat_diffuse[], GLfloat mat_specular[], GLfloat shine[]){
	
//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	glutSolidSphere(1.5,200,200);
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
// llamamos la funcion que dibuja la esfera y le pasamos los valores de los colores
	materiales(ambient,diffuse,specular,sshine);
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
	case 'c':
	case 'C':
		ambient[0]=0.19125;
		ambient[1]=0.0735;
		ambient[2]=0.0225;
		ambient[3]=1.0;
		diffuse[0]=0.7038;
		diffuse[1]=0.27048;
		diffuse[2]=0.0828;
		diffuse[3]=1.0;
		specular[0]=0.256777;
		specular[1]=0.137622;
		specular[2]=0.086014;
		specular[3]=1.0;
		sshine[0]=12.8;
		display();
		break;
	case 'r':
	case 'R':
		ambient[0]=0.0f;
		ambient[1]=0.0f;
		ambient[2]=0.0f;
		ambient[3]=1.0f;
		diffuse[0]=0.5f;
		diffuse[1]=0.0f;
		diffuse[2]=0.0f;
		diffuse[3]=1.0f;
		specular[0]=0.7f;
		specular[1]=0.6f;
		specular[2]=0.6f;
		specular[3]=1.0f;
		sshine[0]=32.0f;
		display();
		break;
	case 'g':
	case 'G':
		ambient[0]=0.24725;
		ambient[1]=0.1995;
		ambient[2]=0.0745;
		ambient[3]=1.0;
		diffuse[0]=0.75164;
		diffuse[1]=0.60648;
		diffuse[2]=0.22648;
		diffuse[3]=1.0;
		specular[0]=0.628181;
		specular[1]=0.555802;
		specular[2]=0.366065;
		specular[3]=1.0;
		sshine[0]=51.2;
		display();
		break;
	case 'b':
	case 'B':
		ambient[0]=0.329412;
		ambient[1]=0.223529;
		ambient[2]=0.027451;
		ambient[3]=1.0;
		diffuse[0]=0.780392;
		diffuse[1]=0.568627;
		diffuse[2]=0.113725;
		diffuse[3]=1.0;
		specular[0]=0.992157;
		specular[1]=0.941176;
		specular[2]=0.807843;
		specular[3]=1.0;
		sshine[0]=27.8974;
		display();
		break;
	case 's':
	case 'S':
		ambient[0]=0.19225;
		ambient[1]=0.19225;
		ambient[2]=0.19225;
		ambient[3]=1.0;
		diffuse[0]=0.50754;
		diffuse[1]=0.50754;
		diffuse[2]=0.50754;
		diffuse[3]=1.0;
		specular[0]=0.508273;
		specular[1]=0.508273;
		specular[2]=0.508273;
		specular[3]=1.0;
		sshine[0]=51.2;
		display();
		break;
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
    glutCreateWindow ("Esfera que cambia de color ");

// Inicializamos el sistema
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
