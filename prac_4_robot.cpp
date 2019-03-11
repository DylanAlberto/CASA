//Semestre 2019 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************			MUÑOZ SOTO DYLAN ALBERTO		******//
//*************											******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angY = 0.0f;
float angX = 0.0f;



void InitGL ( void )     // Inicializamos parametros
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
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();



	glTranslatef(0.0f, 0.0f, transZ);
	glTranslatef(transX, 0.0f, 0.0f);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//cabeza
	glColor3f(1, 1, 1);
	glScalef(1,1,1); //escala en unos
	glTranslatef(0, 3, 0); //movemos 3 unidades hacia arriba la cabeza
	prisma();
	//cuello
	glColor3f(.9, 0, 1);
	glTranslatef(0,-0.65, 0);//movemos hacia abajo el cuello, la mitad de unidades de la cabeza y la mitad del cuello (.5 + .15)
	glScalef(.5, .3, 1); //medidas del cuello
	prisma();
	//cuerpo
	glColor3f(0, 0.5, 1);
	glScalef(2, 3, 1);//resetear escala a unos (1 entre medidas del cuello)
	glTranslatef(0,-1.65, 0); //movemos el cuello hacia abajo la mitad de las unidades del cuello y la mitad del cuerpo (1.5 + .15)
	glScalef(3, 3, 1);//excalamos el cuerpo
	prisma();
	//hombro derecho
	glColor3f(0, 1, 0.4);
	glScalef(.33, .33, 1);//resetear escala a unos
	glTranslatef(1.7,1.3, 0);
	glScalef(.4, .4, 1);
	prisma();
	//antebrazo derecho
	glColor3f(.95, 1,0);
	glScalef(2.5,2.5 , 1);//resetear escala a unos
	glTranslatef(.5,0, 0);
	glScalef(.6, .4, 1);
	prisma();

	//muñeca derecha
	glColor3f(.9, .2, .3);
	glScalef(1.66, 2.5, 1);//resetear escala a unos
	glTranslatef(.7, 0, 0);
	glScalef(.8, .4, 1);
	prisma();

	//mano derecha
	glColor3f(.5, .5, .5);
	glScalef(1.25, 2.5, 1);//resetear escala a unos
	glTranslatef(.5, 0, 0);
	glScalef(.2, .4, 1);
	prisma();

	//hombro izquierdo
	glColor3f(0, 1, 0.4);
	glScalef(5, 2.5, 1);//resetear escala a unos
	glTranslatef(-5.1, 0, 0);
	glScalef(.4, .4, 1);
	prisma();

	//antebrazo izquierdo
	glColor3f(.95, 1, 0);
	glScalef(2.5, 2.5, 1);//resetear escala a unos
	glTranslatef(-.5, 0, 0);
	glScalef(.6, .4, 1);
	prisma();

	//muñeca izquierda
	glColor3f(.9, .2, .3);
	glScalef(1.66, 2.5, 1);//resetear escala a unos
	glTranslatef(-.7, 0, 0);
	glScalef(.8, .4, 1);
	prisma();

	//mano izquierda
	glColor3f(.5, .5, .5);
	glScalef(1.25, 2.5, 1);//resetear escala a unos
	glTranslatef(-.5, 0, 0);
	glScalef(.2, .4, 1);
	prisma();

	//pierna izquierda
	glColor3f(.9, .2, .3);
	glScalef(5, 2.5, 1);//resetear escala a unos
	glTranslatef(2.2, -3.2, 0);
	glScalef(.6, .8, 1);
	prisma();
	//rodilla izquierda
	glColor3f(0, 1, 0.4);
	glScalef(1.66, 1.25, 1);//resetear escala a unos
	glTranslatef(0, -0.5, 0);
	glScalef(.6, .2, 1);
	prisma();
	//pierna izquierda abajo
	glColor3f(0, 0.5, 1);
	glScalef(1.66,5, 1);//resetear escala a unos
	glTranslatef(0, -0.5, 0);
	glScalef(.6, .8, 1);
	prisma();

	//pie izquierdo
	glColor3f(0.4, 0.2, 0.3);
	glScalef(1.66, 1.25, 1);//resetear escala a unos
	glTranslatef(0, -0.6, .25);
	glScalef(.6, .4, 1.5);
	prisma();

	//pierna derecha
	glColor3f(.9, .2, .3);
	glScalef(1.66, 2.5, 0.66);//resetear escala a unos
	glTranslatef(2.5,1.6, -.25); //regresamos las .25 unidades que avanzamos en el eje Z para el pie izquierdo
	glScalef(.6, .8, 1);
	prisma();

	//rodilla derecha
	glColor3f(0, 1, 0.4);
	glScalef(1.66, 1.25, 1);//resetear escala a unos
	glTranslatef(0, -0.5, 0);
	glScalef(.6, .2, 1);
	prisma();

	//pierna derecha abajo
	glColor3f(0, 0.5, 1);
	glScalef(1.66, 5, 1);//resetear escala a unos
	glTranslatef(0, -0.5, 0);
	glScalef(.6, .8, 1);
	prisma();

	//pie derecho
	glColor3f(0.4, 0.2, 0.3);
	glScalef(1.66, 1.25, 1);//resetear escala a unos
	glTranslatef(0, -0.6, .25);
	glScalef(.6, .4, 1.5);
	prisma();


  glutSwapBuffers ( );
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			angX += 1;
			//transZ +=0.3f;
			break;
		case 's':
		case 'S':
			angX -= 1;
			//transZ -= 0.3f;
			break;
		case 'a':
		case 'A':
			angY += 1;
			
			break;
		case 'd':
		case 'D':
			angY -= 1;
	
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		transZ += 0.3f;
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		transZ -= 0.3f;
		break;
	case GLUT_KEY_LEFT:
		transX += 0.3f;
		break;
	case GLUT_KEY_RIGHT:
		transX -= 0.3f;
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
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



