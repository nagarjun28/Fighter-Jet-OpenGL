#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <GL/glut.h>
#define M_PI 3.14159265358979323846
//float color[][3]={{0.196078,0.6,0.8}};
float colorn[][3]={{1,1,0}};
float r,g,b;

void initngt()
{
	
	glClearColor(r,g,b,0);
	glBegin(GL_POLYGON);
	glColor3f(0.858824,0.576471,0.439216);
	glVertex2f(0,0);
	glVertex2f(0,13);
	glVertex2f(3,13);
	glVertex2f(3,0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3fv(colorn[0]);
	glVertex2f(1,1);
	glVertex2f(1,2);
	glVertex2f(2,2);
	glVertex2f(2,1);
	glVertex2f(1,5);
	glVertex2f(1,6);
	glVertex2f(2,6);
	glVertex2f(2,5);
	glVertex2f(1,9);
	glVertex2f(1,10);
	glVertex2f(2,10);
	glVertex2f(2,9);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.435294,0.258824,0.258824);
	glVertex2f(3,0);
	glVertex2f(3,24);
	glVertex2f(7,18);
	glVertex2f(7,0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3fv(colorn[0]);
	glVertex2f(4,2);
	glVertex2f(4,3);
	glVertex2f(6,3);
	glVertex2f(6,2);
	glVertex2f(4,6);
	glVertex2f(4,7);
	glVertex2f(6,7);
	glVertex2f(6,6);
	glVertex2f(4,14);
	glVertex2f(4,15);
	glVertex2f(6,15);
	glVertex2f(6,14);
	glVertex2f(4,18);
	glVertex2f(4,19);
	glVertex2f(6,19);
	glVertex2f(6,18);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.96,0.80,0.69);
	glVertex2f(7,0);
	glVertex2f(7,16);
	glVertex2f(10,16);
	glVertex2f(10,0);
	glColor3fv(colorn[0]);
	glVertex2f(8,3);
	glVertex2f(8,6);
	glVertex2f(9,6);
	glVertex2f(9,3);
	glVertex2f(8,11);
	glVertex2f(8,14);
	glVertex2f(9,14);
	glVertex2f(9,11);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,0.11,0.68);
	glVertex2f(12,0);
	glVertex2f(12,19);
	glVertex2f(14,21);
	glVertex2f(16,19);
	glVertex2f(16,0);
	glEnd();
	glLineWidth(7.0);
	glBegin(GL_LINES);
	glColor3f(0.5,0.5,0.5);
	glVertex2f(14,21);
	glVertex2f(14,24);
	glEnd();
	glBegin(GL_QUADS);
	glColor3fv(colorn[0]);
	glVertex2f(13,2);
	glVertex2f(13,4);
	glVertex2f(15,4);
	glVertex2f(15,2);
	glVertex2f(13,9);
	glVertex2f(13,11);
	glVertex2f(15,11);
	glVertex2f(15,9);
	glVertex2f(13,17);
	glVertex2f(13,19);
	glVertex2f(15,19);
	glVertex2f(15,17);
	glColor3f(0.90,0.91,0.98);
	glVertex2f(16,0);
	glVertex2f(16,14);
	glVertex2f(18,16);
	glVertex2f(18,0);
	glColor3f(0.85,0.85,0.10);
	glVertex2f(18,0);
	glVertex2f(18,20);
	glVertex2f(20,20);
	glVertex2f(20,0);
	glVertex2f(18,20);
	glVertex2f(16,22);
	glVertex2f(22,22);
	glVertex2f(20,20);
	glColor3f(1,0.5,0);
	glVertex2f(16,22);
	glVertex2f(16,24);
	glVertex2f(22,24);
	glVertex2f(22,22);
	glColor3f(0.85,0.85,0.10);
	glVertex2f(16,24);
	glVertex2f(22,24);
	glVertex2f(20,26);
	glVertex2f(18,26);
	glColor3fv(colorn[0]);
	glVertex2f(17,22);
	glVertex2f(17,23);
	glVertex2f(21,23);
	glVertex2f(21,22);
	glColor3f(0.52,0.39,0.39);
	glVertex2f(23,0);
	glVertex2f(23,19);
	glVertex2f(27,22);
	glVertex2f(27,0);
	glVertex2f(27,0);
	glVertex2f(27,18);
	glVertex2f(30,15);
	glVertex2f(30,0);
	glColor3f(0.196078,0.8,0.196078);
	glVertex2f(30,0);
	glVertex2f(30,21);
	glVertex2f(34,21);
	glVertex2f(34,0);
	glColor3f(0.8,0.498039,0.196078);
	glVertex2f(34,0);
	glVertex2f(34,25);
	glVertex2f(38,25);
	glVertex2f(38,0);
	glColor3fv(colorn[0]);
	glVertex2f(24,5);
	glVertex2f(24,6);
	glVertex2f(26,6);
	glVertex2f(26,5);
	glVertex2f(24,10);
	glVertex2f(24,11);
	glVertex2f(26,11);
	glVertex2f(26,10);
	glVertex2f(24,15);
	glVertex2f(24,16);
	glVertex2f(26,16);
	glVertex2f(26,15);
	glVertex2f(28,3);
	glVertex2f(28,4);
	glVertex2f(29,4);
	glVertex2f(29,3);
	glVertex2f(28,8);
	glVertex2f(28,9);
	glVertex2f(29,9);
	glVertex2f(29,8);
	glVertex2f(28,13);
	glVertex2f(28,14);
	glVertex2f(29,14);
	glVertex2f(29,13);
	glVertex2f(31,4);
	glVertex2f(31,5);
	glVertex2f(33,5);
	glVertex2f(33,4);
	glVertex2f(31,11);
	glVertex2f(31,12);
	glVertex2f(33,12);
	glVertex2f(33,11);
	glVertex2f(31,18);
	glVertex2f(31,19);
	glVertex2f(33,19);
	glVertex2f(33,18);
	glVertex2f(35,8);
	glVertex2f(35,16);
	glVertex2f(37,16);
	glVertex2f(37,8);
	glColor3f(0.85,0.85,0.85);
	glVertex2f(10,0);
	glVertex2f(10,18);
	glVertex2f(12,18);
	glVertex2f(12,0);
	glVertex2f(20,0);
	glVertex2f(20,6);
	glVertex2f(23,6);
	glVertex2f(23,0);
	glVertex2f(20.5,6);
	glVertex2f(20.5,12);
	glVertex2f(22.5,12);
	glVertex2f(22.5,6);
	glVertex2f(21,12);
	glVertex2f(21,19);
	glVertex2f(22,19);
	glVertex2f(22,12);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.917647,0.917647,0.978431);
	glVertex2f(18.5,26);
	glVertex2f(19,28);
	glVertex2f(19.5,26);
	glEnd();
	glLineWidth(4.0);
	glBegin(GL_LINES);
	glColor3f(0.85,0.85,0.85);
	glVertex2f(21.5,19);
	glVertex2f(21.5,21);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0,-5);
	glVertex2f(0,0);
	glVertex2f(38,0);
	glVertex2f(38,-5);
	glColor3f(1,1,1);
	glVertex2f(3,-3);
	glVertex2f(3,-2);
	glVertex2f(10,-2);
	glVertex2f(10,-3);
	glVertex2f(14,-3);
	glVertex2f(14,-2);
	glVertex2f(21,-2);
	glVertex2f(21,-3);
	glVertex2f(25,-3);
	glVertex2f(25,-2);
	glVertex2f(32,-2);
	glVertex2f(32,-3);
	glVertex2f(36,-3);
	glVertex2f(36,-2);
	glVertex2f(38,-2);
	glVertex2f(38,-3);
	glEnd();
	
	
}


void initWindow(void);

float angle = 0.0;
int left, right;
int leftTime, rightTime;
int thrust, thrustTime;
float x = 20, y = 20, xv, yv, v;
int lastTime;
int paused = 0;
int resuming = 1;
int originalWindow = 0, currentWindow;

typedef struct {
  int inuse;

  float x;
  float y;

  float v;
  float xv;
  float yv;

  int expire;
} Bullet;

#define BULLETS 100

Bullet bullet[BULLETS];

int
allocBullet(void)
{
  int i;

  for (i=0; i<BULLETS; i++) {
    if (!bullet[i].inuse) {
      return i;
    }
  }
  return -1;
}

void
initBullet(int i, int time)
{
  float c = cos(angle*M_PI/180.0);
  float s = sin(angle*M_PI/180.0);

  bullet[i].inuse = 1;
  bullet[i].x = x + 3.5 * c;
  bullet[i].y = y + 3.5 * s;
  bullet[i].v = 0.025;
  bullet[i].xv = xv + c * bullet[i].v;
  bullet[i].yv = yv + s * bullet[i].v;
  bullet[i].expire = time + 300;
}

void
advanceBullets(int delta, int time)
{
  int i;

  for (i=0; i<BULLETS; i++) {
    if (bullet[i].inuse) {
      float x, y;

      if (time > bullet[i].expire) {
	bullet[i].inuse = 0;
	continue;
      }
      x = bullet[i].x + bullet[i].xv * delta;
      y = bullet[i].y + bullet[i].yv * delta;
      x = x / 40.0;
      bullet[i].x = (x - floor(x))*40.0;
      y = y / 40.0;
      bullet[i].y = (y - floor(y))*40.0;
    }
  }
  
}

void
shotBullet(void)
{
  int entry;

  entry = allocBullet();
  if (entry >= 0) {
    initBullet(entry, glutGet(GLUT_ELAPSED_TIME));
  }
}

void
drawBullets(void)
{
  int i;
  glPointSize(5.0);
  glBegin(GL_POINTS);
  glColor3f(1,0, 0);
  for (i=0; i<BULLETS; i++) {
    if (bullet[i].inuse) {
      glVertex2f(bullet[i].x, bullet[i].y);
    }
  }
  
  glEnd();
}

void
drawJet(float angle)
{
  int i;

  glPushMatrix();
  glTranslatef(x, y, 0.0);
  glRotatef(angle, 0.0, 0.0, 1.0);

  glColor3f(1.0, 1.0, 0.0);
  glBegin(GL_POLYGON);
  glVertex2f(0,0);
  glVertex2f(0,1);
  glVertex2f(1,2);
  glVertex2f(2,2);
  glVertex2f(3,1);
  glVertex2f(3,0);
  glEnd();
  glColor3f(0,1,1);
  glBegin(GL_QUADS);
  glVertex2f(1,1);
  glVertex2f(1,2);
  glVertex2f(2,2);
  glVertex2f(2,1);
  glColor3f(1,0,0);
  glVertex2f(-2,0);
  glVertex2f(-2,1);
  glVertex2f(0,1);
  glVertex2f(0,0);
  glEnd();
  glColor3f(1,0,0);
  glLineWidth(5.0);
  glBegin(GL_LINES);
  glVertex2f(-1.5,1);
  glVertex2f(-1.5,1.5);
  glVertex2f(1.5,2);
  glVertex2f(1.5,2.5);
  glVertex2f(0,2.5);
  glVertex2f(3,2.5);
  glVertex2f(1,0);
  glVertex2f(1,-0.5);
  glVertex2f(2,0);
  glVertex2f(2,-0.5);
  glVertex2f(0,-0.5);
  glVertex2f(3,-0.5);
  glEnd();
  glBegin(GL_TRIANGLES);
  glColor3f(1,1,1);
  glVertex2f(3,0.5);
  glColor3f(0,0,0);
  glVertex2f(6,-0.5);
  glVertex2f(6,1.5);
  glEnd();
  
  glPopMatrix();
 
	  
  
}

void
display(void)
{
	int id;
  glClear(GL_COLOR_BUFFER_BIT);
  initngt();
  drawJet(angle);
  drawBullets();
  glFlush();
  
}

void
idle(void)
{
  int time, delta;

  time = glutGet(GLUT_ELAPSED_TIME);
  if (resuming) {
    lastTime = time;
    resuming = 0;
  }
  if (left) {
    delta = time - leftTime;
    angle = angle + delta * 0.4;
    leftTime = time;
  }
  if (right) {
    delta = time - rightTime;
    angle = angle - delta * 0.4;
    rightTime = time;
  }
  if (thrust) {
    delta = time - thrustTime;
    v = delta * 0.00004;
    xv = xv + cos(angle*M_PI/180.0) * v;
    yv = yv + sin(angle*M_PI/180.0) * v;
    thrustTime = time;
  }
   
  delta = time - lastTime;
  x = x + xv * delta;
  y = y + yv * delta;
  x = x / 40.0;
  x = (x - floor(x))*40.0;
  y = y / 40.0;
  y = (y - floor(y))*40.0;
  lastTime = time;
  advanceBullets(delta, time);
  glutPostWindowRedisplay(currentWindow);
}

void
visible(int vis)
{
  if (vis == GLUT_VISIBLE) {
    if (!paused) {
      glutIdleFunc(idle);
    }
  } else {
    glutIdleFunc(NULL);
  }
}


void
key(unsigned char key, int px, int py)
{
  switch (key) {
  case 'Q':
  case 'q':
    exit(0);
    break;
  
  case 'P':
  case 'p':
    paused = !paused;
    if (paused) {
      glutIdleFunc(NULL);
    } else {
      glutIdleFunc(idle);
      resuming = 1;
    }
    break;
  case 'S':
  case 's':
  case ' ':
    shotBullet();
    break;
  
  }
}
void
special(int key, int x, int y)
{
  switch (key) {
 
  case GLUT_KEY_UP:
    thrust = 1;
    thrustTime = glutGet(GLUT_ELAPSED_TIME);
    break;
  
  case GLUT_KEY_LEFT:
    left = 1;
    leftTime = glutGet(GLUT_ELAPSED_TIME);
    break;
  case GLUT_KEY_RIGHT:
    right = 1;
    rightTime = glutGet(GLUT_ELAPSED_TIME);
    break;
  }
}
void
specialup(int key, int x, int y)
{
  switch (key) {
  case GLUT_KEY_UP:
    thrust = 0;
    break;
  case GLUT_KEY_LEFT:
    left = 0;
    break;
  case GLUT_KEY_RIGHT:
    right = 0;
    break;
  }
}


void
initWindow(void)
{
	
  
  currentWindow = glutGetWindow();
 
}
void reshape(int h,int w)
{
	glViewport(0,0,h,w);
	glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,38,-5,48);
    glMatrixMode(GL_MODELVIEW); 
	
}


int
main(int argc, char **argv)
{
  glutInit(&argc, argv);
  printf("enter the RGB values\n");
  scanf("%f\n",&r);
  scanf("%f\n",&g);
  scanf("%f",&b);
  glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
  glutCreateWindow("jetfighter");
  glutReshapeFunc(reshape);
  initWindow();
  glutDisplayFunc(display);
  glutVisibilityFunc(visible);
  glutKeyboardFunc(key);
  glutSpecialFunc(special);
  glutSpecialUpFunc(specialup);
  glutMainLoop();
  return 0;             
}
