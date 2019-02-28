//Semestre 2019 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************				MUÑOZ SOTO DYLAN ALBERTO	******//
//*************											******//
//************************************************************//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL ( GLvoid )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};


		glBegin(GL_POLYGON);	//Front
		glColor3f(0.3, 0.3, 0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  
			glColor3f(1.0,1.0,1.0);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  
	
		glColor3f(0.4,0.2,0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glColor3f(0.8,0.2,0.4);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();

}

void letrac(void)
{
	GLfloat vertice[17][3] = {
				{1.0 ,10.0, 0.5},    //Coordenadas Vértice 0 V0
				{3.0 ,10.0, 0.5},    //Coordenadas Vértice 1 V1
				{3.0 ,0.0, -0.5},    //Coordenadas Vértice 2 V2
				{1.0 ,0.0, -0.5},    //Coordenadas Vértice 3 V3
				{6.0 ,10.0, -0.5},    //Coordenadas Vértice 5 V4
				{6.0 ,8.5, -0.5},    //Coordenadas Vértice 6 V5
				{3.0 ,8.5, 0.5},    //Coordenadas Vértice 7 V6
				{3.0 ,1.5, 0.5},    //Coordenadas Vértice 4 V7
				{6.0 ,1.5, -0.5},    //Coordenadas Vértice 5 V8
				{6.0 ,0.0, -0.5},    //Coordenadas Vértice 6 V9
				{3.0 ,11.0, 0.5},    //Coordenadas Vértice 4 V10
				{7.5 ,11.0, -0.5},    //Coordenadas Vértice 5 V11
				{7.5 ,9.5, 0.5},    //Coordenadas Vértice 4 V12
				{7.5 ,1.5, -0.5},    //Coordenadas Vértice 5 V13
				{7.5 ,3.0, -0.5},    //Coordenadas Vértice 4 V14
				{4.0 ,3.0, 0.5},    //Coordenadas Vértice 5 V15
				{4.0 ,8.5, -0.5},    //Coordenadas Vértice 5 V16
	};


	glBegin(GL_POLYGON);	
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);	
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);	
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_POLYGON);  
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[11]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.2, 0.4);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[13]);
	glVertex3fv(vertice[14]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[15]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[6]);
	glEnd();

}

void letrag(void)
{
	GLfloat vertice[25][3] = {
				{9.0 ,10.0, 0.5},    //Coordenadas Vértice 0 V0
				{9.0 ,0.0, 0.5},    //Coordenadas Vértice 1 V1
				{11.0 ,0.0, 0.5},    //Coordenadas Vértice 2 V2
				{11.0 ,10.0, 0.5},    //Coordenadas Vértice 3 V3
				{14.0 ,0.0, 0.5},    //Coordenadas Vértice 5 V4
				{14.0 ,1.5, 0.5},    //Coordenadas Vértice 6 V5
				{11.0 ,1.5, 0.5},    //Coordenadas Vértice 7 V6
				{11.0 ,8.5, 0.5},    //Coordenadas Vértice 4 V7
				{14.0 ,8.5, 0.5},    //Coordenadas Vértice 5 V8
				{14.0 ,10.0,0.5},    //Coordenadas Vértice 6 V9
				{13.0 ,1.5, 0.5},    //Coordenadas Vértice 4 V10
				{13.0 ,3.5, 0.5},    //Coordenadas Vértice 5 V11
				{14.0 ,3.5, 0.5},    //Coordenadas Vértice 4 V12
				{13.0 ,2.5, 0.5},    //Coordenadas Vértice 5 V13
				{12.0 ,2.5, 0.5},    //Coordenadas Vértice 4 V14
				{12.0 ,3.5, -0.5},    //Coordenadas Vértice 5 V15
				{15.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V16
				{15.5 ,4.0, -0.5},    //Coordenadas Vértice 0 V17
				{13.0 ,4.0, -0.5},    //Coordenadas Vértice 1 V18
				{13.0 ,2.0, -0.5},    //Coordenadas Vértice 2 V19
				{11.5 ,2.0, -0.5},    //Coordenadas Vértice 3 V20
				{11.5 ,8.5, -0.5},    //Coordenadas Vértice 5 V21
				{11.0 ,10.5, -0.5},    //Coordenadas Vértice 6 V22
				{15.5 ,10.5, -0.5},    //Coordenadas Vértice 7 V23
				{15.5 ,9.0, -0.5},    //Coordenadas Vértice 4 V24
	};


	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[10]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[11]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[13]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[15]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.0, 0.9);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.0, 0.9);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[10]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[20]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[20]);
	glVertex3fv(vertice[21]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1, 1, 1);
	glVertex3fv(vertice[22]);
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[0]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.0, 0.9);
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glEnd();
}

void letrad(void)
{
	GLfloat vertice[25][3] = {
				{18.0 ,10.0, 0.5},    //Coordenadas Vértice 0 V0
				{20.0 ,10.0, 0.5},    //Coordenadas Vértice 1 V1
				{20.0 ,0.0, -0.5},    //Coordenadas Vértice 2 V2
				{18.0 ,0.0, -0.5},    //Coordenadas Vértice 3 V3
				{23 ,10.0, -0.5},    //Coordenadas Vértice 5 V4
				{23 ,8.5, -0.5},    //Coordenadas Vértice 6 V5
				{20 ,8.5, 0.5},    //Coordenadas Vértice 7 V6
				{20 ,1.5, 0.5},    //Coordenadas Vértice 4 V7
				{23 ,1.5, -0.5},    //Coordenadas Vértice 5 V8
				{23 ,0.0, -0.5},    //Coordenadas Vértice 6 V9
				{20 ,11.0, 0.5},    //Coordenadas Vértice 4 V10
				{24.5 ,11.0, -0.5},    //Coordenadas Vértice 5 V11
				{24.5,9.5, 0.5},    //Coordenadas Vértice 4 V12
				{24.5,1.5, -0.5},    //Coordenadas Vértice 5 V13
				{24.5,3.0, -0.5},    //Coordenadas Vértice 4 V14
				{21 ,3.0, 0.5},    //Coordenadas Vértice 5 V15
				{21 ,8.5, -0.5},    //Coordenadas Vértice 5 V16
				{25.5 ,5, 0.5},		// V17
				{24 ,5, 0.5},		//v18
				{25.5 ,5, -0.5}, //19

	};

	glBegin(GL_POLYGON); //barra izquierda
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON); // top
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON); //bottom
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_POLYGON); //top_back
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_POLYGON);  //bottom_back
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[15]);
	glEnd();

	glBegin(GL_POLYGON);  //Side_back
	glColor3f(0.3, 0.5, 0.7);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);  //rigth1
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[5]);
	glEnd();

	glBegin(GL_POLYGON);  //rigth2
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[18]);
	glEnd();

	glBegin(GL_POLYGON);  //rigth2
	glColor3f(0.3, 0.3, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[4]);
	glEnd();

	
}




void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		//Poner Código Aquí.

	//trasladar un objeto
	glTranslatef(transX, transY, transZ);
	letrac();
	glTranslatef(transX, transY, transZ);
	letrag();
	glTranslatef(transX, transY, transZ);
	letrad();
	/*glTranslatef(2.0f,0.0f,0.0f);
	prisma();
	glTranslatef(-4.0f, 0.0f, 0.0f);
	prisma();*/

  											

    glutSwapBuffers ( );
    //glFlush();
    // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	glOrtho(0,30,-10,20,0.1,20);	
	//glFrustum (0.5, 0.5,-0.1, 0.1, 1.1, 10.0);
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 'a':
		case 'A':
			transX -=0.2f;
			break;
		case 'd':
		case 'D':
			transX +=0.2f;
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
      //glutFullScreen ( ); // Full Screen Mode
      //break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
      //glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
      //break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 3"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



