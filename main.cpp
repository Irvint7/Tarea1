#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
GLfloat posx=0;
GLfloat posy=0;
GLfloat px=0;
GLfloat py=0;
bool mouserightdown = false;

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
// Aqui ponemos lo que queremos dibujar.
void display(void)
{
	px=GLfloat(posx)*0.01;
	py=1-GLfloat(posy)*0.01; 
	GLfloat light_position[] = {px, py, 1.0,0.0};
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);

// Activamos la fuente de luz
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);// "Limpiamos" el frame buffer con el color de "Clear", en este caso negro.
	glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
	materiales(ambient,diffuse,specular,sshine);// llamamos la funcion que dibuja la esfera y le pasamos los valores de los colores
}
void raton(int x, int y)
{   posx=x;
	posy=y; 
	display();
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

void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);// Activamos la matriz de proyeccion.
	glLoadIdentity();// "limpiamos" esta con la matriz identidad.
	glOrtho(-3, 3, -3, 3, -3, 3);// Usamos proyeccion ortogonal
	glMatrixMode(GL_MODELVIEW);// Activamos la matriz de modelado/visionado.
	glLoadIdentity();// "Limpiamos" la matriz
}

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10,10,-10,10,-10,10);
    glClearColor(0.0,0.0,0.0,0.0);
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
    glutCreateWindow ("Esfera que cambia de color y movimiento de foco ");

// Inicializamos el sistema
    init();
	glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMotionFunc(raton);
    glutMainLoop();

	return 0;
}
