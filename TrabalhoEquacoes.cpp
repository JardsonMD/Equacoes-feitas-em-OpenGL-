#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

int escolha = 6;

void MenuJanela(int opcao){
     switch(opcao){
                case 0:
                	escolha = 0;
                     break;
                case 1:
                	escolha = 1;
                     break;   
                case 2:
                	escolha = 2;
                     break;  
				case 3:
					escolha = 3;
                     break;
                case 4:
                	escolha = 4;
                     break;   
                case 5:
                	escolha = 5;
                     break;
				case 6:
					escolha = 6;
                     break;
                case 7:
                	escolha = 7;
                     break;   
                case 8:
                	escolha = 8;
                     break;
				case 9:
					escolha = 9;
                     break;
                case 10:
                	escolha = 10;
                     break;   
                case 11:
                	escolha = 11;
                     break;        
     }

     glutPostRedisplay();
}
void CriarMenu(){
     int menu;
     
     menu = glutCreateMenu(MenuJanela);
     glutAddMenuEntry("Atróide", 0);
     glutAddMenuEntry("Cardióide", 1);
     glutAddMenuEntry("Ciclóide", 2);
     glutAddMenuEntry("Circunferência", 3);
     glutAddMenuEntry("Cosseno", 4);
     glutAddMenuEntry("Elipse", 5);
     glutAddMenuEntry("Espiral", 6);
     glutAddMenuEntry("Hipérbole", 7);
     glutAddMenuEntry("Parábola", 8);
     glutAddMenuEntry("Rosácea", 9);
     glutAddMenuEntry("Seno", 10);
     glutAddMenuEntry("Tangente", 11);
     
     glutAttachMenu(GLUT_RIGHT_BUTTON);         
}

void Inicializa(){
	// Define a janela de visualização 2D
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);
}

void astroide(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 2*M_PI; t += 0.001){
			x = 70 * cos(t) * cos(t) * cos(t);
			y = 70 * sin(t) * sin(t) * sin(t);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void cardioide(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 2*M_PI; t += 0.001){
			x = ((1 + cos(t)) * cos(t)) * 40;
			y = ((1 + cos(t)) * sin(t)) * 40;
			glVertex3f(x,y,0);
		}
	glEnd();
}

void cicloide(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 100; t+=0.001){
			x = 7* (t - sin(t));
			y = 7 * (1 - cos(t));
			glVertex3f(x,y,0);
		}
	glEnd();
}

void circunferencia(){
	float x,y,t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 2*M_PI; t += 0.001){
			x = 70 * cos(t);
			y = 70 * sin(t);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void cosseno(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = -100; t <= 100; t+=0.001){
			x = t * 10;
			y = cos(t) * 10;
			glVertex3f(x,y,0);
		}
	glEnd();
}

void elipse(){
	float x,y,t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 2*M_PI; t += 0.001){
			x = 70 * cos(t);
			y = 50 * sin(t);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void espiral(){
	float x,y,t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 24*M_PI; t += 0.001){
			x = t * cos(t);
			y = t * sin(t);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void hiperbole(){
	float x,y;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(x = -100; x <= 100; x += 0.001){
			y = sqrt(10 + pow(x,2));
			glVertex3f(x,y,0);
		}
	glEnd();
	glPointSize(2);
	glBegin(GL_POINTS);
		for(x = -100; x <= 100; x += 0.001){
			y = -sqrt(10 + pow(x,2));
			glVertex3f(x,y,0);
		}
	glEnd();
}

void parabola(){
	float x,y,t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = -100; t <= 100; t += 0.001){
			x = 2 * t;
			y = pow(t,2);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void rosacea(){
	float x,y,t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = 0; t <= 2*M_PI; t += 0.001){
			x = 60 * cos(7*t) * cos(t);
			y = 60 * cos(7*t) * sin(t);
			glVertex3f(x,y,0);
		}
	glEnd();
}

void seno(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = -100; t <= 100; t+=0.001){
			x = t * 10;
			y = sin(t) * 10;
			glVertex3f(x,y,0);
		}
	glEnd();
}

void tangente(){
	float x, y, t;
	glPointSize(2);
	glBegin(GL_POINTS);
		for(t = -100; t <= 100; t+=0.001){
			x = t * 10;
			y = (sin(t)/cos(t)) * 10;
			glVertex3f(x,y,0);
		}
	glEnd();
}

void Linhas(){
	glLineWidth(1);
	glBegin(GL_LINES);
	// X
		glVertex3f(-100.0,0.0,0);
		glVertex3f(100.0,0.0,0);
	glEnd();
	// Y
	glBegin(GL_LINES);
		glVertex3f(0.0,-100.0,0);
		glVertex3f(0.0,100.0,0);
	glEnd();     
}

void Desenha(){   
    glClearColor(0.8,0.8,0.8,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	Linhas();
	glColor3f(0.0, 0.5, 1);
	
	switch(escolha){
                case 0:
                	astroide();
                     break;
                case 1:
                	cardioide();
                     break;   
                case 2:
                	cicloide();
                     break;  
				case 3:
					circunferencia();
                     break;
                case 4:
                	cosseno();
                     break;   
                case 5:
                	elipse();
                     break;
				case 6:
					espiral();
                     break;
                case 7:
                	hiperbole();
                     break;   
                case 8:
                	parabola();
                     break;
				case 9:
					rosacea();
                     break;
                case 10:
                	seno();
                     break;   
                case 11:
                	tangente();
                     break;        
     }
	
	glFlush();
}

void Teclado (unsigned char key, int x, int y){
	if (key == 27){
		exit(0);	
	}	
}

int main(void){
    // Define do modo de operação da GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	// Especifica o tamanho inicial em pixels da janela GLUT
	glutInitWindowSize(600,600); 
	// Cria a janela passando como argumento o título da mesma
	glutCreateWindow("Grafico");
	// Registra a função callback de redesenho da janela de visualização
	glutDisplayFunc(Desenha);
	// Registra a função callback para tratamento das teclas ASCII
	glutKeyboardFunc (Teclado);
	// Chama a função responsável por fazer as inicializações 
	Inicializa();
	// Permite utilizar o menu criado
	CriarMenu();
	// Inicia o processamento e aguarda interações do usuário
	glutMainLoop();
	return 0;
}
