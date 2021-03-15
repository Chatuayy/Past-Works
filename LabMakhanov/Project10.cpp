//poblem1
/*
#include<GL/glut.h>
#include<stdio.h>
#define Sphere 1
#define Cone 2
#define Torus 3
#define Teapot 4
#define SnowMan 5
#define Red 1
#define Green 2
#define White 3

#define Stop 6
#define Resume 7
#define X_axis 1
#define Y_axis 2
#define Z_axis 3
#define Stop 1
#define Resume 2

float angle = 0.0, dangle=0.1;
int option_global=4;
int swidth=500,sheight=500;
int slices = 16;
int stacks = 16;
int red=1,green=1, blue=1;
float vx=1,vy=0,vz=0;
void Display_TeaPot()
{
    glutWireTeapot(1.0); // the teapot
}
void Display_Cone()
{
glutWireCone(1,1,slices,stacks);
}
void Display_Sphere()
{ glutWireSphere(1,slices,stacks);
}
void Display_Torus()
{ glutWireTorus(0.5,0.5,slices,stacks);
} void Display_SnowMan() //DOWNLOADABLE
{
glColor3d(red, green, blue); // Draw Body
glutWireSphere(0.75,20,20); // Draw Head
glTranslatef(0.0, 1.0, 0.0); glutWireSphere(0.25,20,20); // Draw Eyes
glPushMatrix(); glColor3f(0.0,0.0,0.0);
glTranslatef(0.05, 0.10, 0.18);
glutSolidSphere(0.05,10,10);
glTranslatef(-0.1, 0.0, 0.0);
glutSolidSphere(0.05,10,10);
glPopMatrix(); // Draw Nose
glColor3f(1.0, 0.5 , 0.5);
glRotatef(0.0,1.0, 0.0, 0.0);
glutSolidCone(0.08,0.5,10,2); }
void init(void) {
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluPerspective(60,float(swidth)/float(sheight),0.1,1000);
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();
     gluLookAt(0.0,0.0,3.0, 0.0,0.0,0.0, 0.0,1.0,0.0);
}
void myDisplay(void) {
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glPushMatrix();
glRotated(angle,vx,vy,vz);
glColor3d(red,green,blue); switch (option_global)
{
case Sphere :Display_Sphere() ; break;
case Cone : Display_Cone(); break;
case Torus : Display_Torus(); break;
case Teapot : Display_TeaPot();break;
case SnowMan: Display_SnowMan();break;
default :break;
} angle+=dangle;
glPopMatrix();
glutSwapBuffers();
}
void processMenuShape(int option)
{ option_global=option;//this menu is executed in myDisplay
}
void Menu_Color(int option)
{
switch (option) {
case Red : red = 1.0; green = 0.0; blue = 0.0; break;
case Green : red = 0.0; green = 1.0; blue = 0.0; break;
case White : red = 1.0; green = 1.0; blue = 1.0; break;
default :break; }
}
void createGLUTMenus() { int submenu1 = glutCreateMenu(Menu_Color);
glutAddMenuEntry("Red",Red);
glutAddMenuEntry("Green",Green);
glutAddMenuEntry("White", White);
int menu=glutCreateMenu(processMenuShape);
glutAddMenuEntry("Sphere",Sphere);
glutAddMenuEntry("Cone",Cone);
glutAddMenuEntry("Torus",Torus);
glutAddMenuEntry("Teapot",Teapot);
glutAddMenuEntry("SnowMan",SnowMan); glutAddSubMenu("Color",submenu1);
glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char **argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
glutInitWindowPosition(100,100);
glutInitWindowSize(swidth,sheight);
glutCreateWindow("Problem 1");
init();
glutDisplayFunc(myDisplay);
glutIdleFunc(myDisplay);
createGLUTMenus();
glutMainLoop();
return 0;
}
*/
//poblem1.2

/*
#include<GL/glut.h>
#include<stdio.h>
#define Sphere 1
#define Cone 2
#define Torus 3
#define Teapot 4
#define SnowMan 5
#define Red 1
#define Green 2
#define White 3
#define Black 4

#define Stop 6
#define Resume 7
#define X_axis 1
#define Y_axis 2
#define Z_axis 3
#define Stop 1
#define Resume 2
float angle = 0.0, dangle = 0.1;
int option_global = 4;
int swidth = 500, sheight = 500;
int slices = 16;
int stacks = 16;
int red = 1, green = 1, blue = 1;
float vx = 1, vy = 0, vz = 0;
void Display_TeaPot()
{
    glutWireTeapot(1.0);
}
void Display_Cone()
{
    glutWireCone(1,1,slices,stacks);
}
void Display_Sphere()
{
    glutWireSphere(1,slices,stacks);
}
void Display_Torus()
{
    glutWireTorus(0.5,0.5,slices, stacks);
}
void Display_SnowMan() {
	glColor3d(red, green, blue);
    // Draw Body
   glutWireSphere(0.75,20,20);
    // Draw Head
	glTranslatef(0.0, 1.0, 0.0);
	glutWireSphere(0.25,20,20);
    // Draw Eyes
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(0.05, 0.10, 0.18);
	glutSolidSphere(0.05,10,10);
	glTranslatef(-0.1, 0.0, 0.0);
	glutSolidSphere(0.05,10,10);
	glPopMatrix();
    // Draw Nose
	glColor3f(1.0, 0.5 , 0.5);
	glRotatef(0.0,1.0, 0.0, 0.0);
	glutSolidCone(0.08,0.5,10,2);
}
void init(void)
{

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,float(swidth)/float(sheight),0.1,1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0,0.0,3.0,0.0,0.0,0.0,0.0,1.0,0.0);
}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotated(angle, vx, vy,vz);
    glColor3d(red, green, blue);
    switch(option_global)
    {
        case Sphere: Display_Sphere(); break;
        case Cone: Display_Cone(); break;
        case Torus: Display_Torus(); break;
        case Teapot: Display_TeaPot();break;
        case SnowMan: Display_SnowMan(); break;
        default: break;
    }
    angle += dangle;
    glPopMatrix();
    glutSwapBuffers();
}
void processMenuEvents(int option)
{
    option_global = option;
}

void Menu_Color(int option)
{
    switch(option)
    {
        case Red: red = 1.0; green = 0.0; blue = 0.0;glClearColor(0.0,0.0,0.0,0.0); break;
        case Green: red = 0.0; green = 1.0; blue = 0.0;glClearColor(0.0,0.0,0.0,0.0); break;
        case White: red = 1.0; green = 1.0; blue = 1.0;glClearColor(0.0,0.0,0.0,0.0); break;
        case Black: red = 0.0; green = 0.0; blue = 0.0;glClearColor(1.0, 1.0, 1.0, 1.0); break;
        default: break;
    }
}
void doNothing(){}

void Menu_StopResume(int option)
{
    switch(option)
    {
        case Stop: glutIdleFunc(doNothing);break;
        case Resume: glutIdleFunc(myDisplay);break;
        default:break;
    }
}

void Menu_Orient(int option)
{
    switch(option)
    {
        case X_axis: vx=1; vy=0; vz=0;break;
        case Y_axis: vx=0; vy=1; vz=0;break;
        case Z_axis: vx=0; vy=0; vz=1;break;
        default:break;
    }
}
void createGLUTMenus()
{
    int submenu1 = glutCreateMenu(Menu_Color);
    glutAddMenuEntry("Red",Red);
    glutAddMenuEntry("Green", Green);
    glutAddMenuEntry("White", White);
    glutAddMenuEntry("Black", Black);
    int submenu2 = glutCreateMenu(Menu_Orient);
    glutAddMenuEntry("X-axis",X_axis);
    glutAddMenuEntry("Y-axis",Y_axis);
    glutAddMenuEntry("Z-axis",Z_axis);
    int submenu3 = glutCreateMenu(Menu_StopResume);
    glutAddMenuEntry("Stop",Stop);
    glutAddMenuEntry("Resume",Resume);
    int menu = glutCreateMenu(processMenuEvents);
    glutAddMenuEntry("Sphere", Sphere);
    glutAddMenuEntry("Cone", Cone);
    glutAddMenuEntry("Torus",Torus);
    glutAddMenuEntry("SnowMan", SnowMan);
    glutAddSubMenu("Color", submenu1);
    glutAddSubMenu("Orientation",submenu2);
    glutAddSubMenu("Stop/Resume",submenu3);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH|GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(swidth, sheight);
    glutCreateWindow("Problem 1");
    init();
    glutDisplayFunc(myDisplay);
    glutIdleFunc(myDisplay);
    createGLUTMenus();
    glutMainLoop();
    return 0;
}
*/

//poblem2.1
/*
#include <gl/glut.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265f
#include <string.h>
#include <stdio.h>
int windowWidth = 500;
int windowHeight = 500;
int windowPosX = 50;
int windowPosY = 50;
GLfloat ballRadius = 0.5;
GLfloat xPos = 0.0;
GLfloat yPos = 0.0;
GLfloat xPosMax, xPosMin, yPosMax, yPosMin;
GLdouble xLeft = -1, xRight = 1, yBottom = -1, yTop = 1;
GLfloat xSpeed = 0.02;
GLfloat ySpeed = 0.007;
void output_Text(float x, float y, char *text) //output a text at x,y
{  int len, i;
  glColor3f(1, 0, 0); //red text
  glRasterPos3f(x, y, 0);
  len = (int)strlen(text);
  for (i = 0; i < len; i++) {
  glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
  }
}
void output_Number(float x, float y, double v) //output a number at x,y
{  int len, i;
  char text [20]={'\0'};
  sprintf(text, "%lf", v); //converts v to the string "text"
  output_Text(x,y,text);
}
void initGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(xLeft, xRight, yBottom, yTop);
    xPosMin = xLeft + ballRadius;
    xPosMax = xRight - ballRadius;
    yPosMin = yBottom + ballRadius;
    yPosMax = yTop - ballRadius;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void Time_Delay(int dur)
{
    clock_t start_time;
    start_time = clock();
    while((clock() - start_time) < dur){}
}
void display_Ball()
{
    output_Text(xLeft+0.05, yBottom+0.1, "bouncing ball size= ");
    output_Number(xLeft+0.7, yBottom+0.1, ballRadius);
    glTranslatef(xPos, yPos, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.0, 0.0);
    int numSegments = 100;
    GLfloat angle;
    for (int i = 0; i <= numSegments; i++)
    {
        angle = i * 2.0 * PI / numSegments;
        glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    display_Ball();
    glEnd();
    glutSwapBuffers();
    xPos += xSpeed;
    yPos += ySpeed;
    if (xPos > xPosMax)
    {
        xPos = xPosMax;
        xSpeed = -xSpeed;
    }
    else if (xPos < xPosMin)
    {
        xPos = xPosMin;
        xSpeed = -xSpeed;
    }
    if (yPos > yPosMax)
    {
        yPos = yPosMax;
        ySpeed = -ySpeed;
    }
    else if (yPos < yPosMin)
    {
        yPos = yPosMin;
        ySpeed = -ySpeed;
    }
    Time_Delay(10);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(windowPosX, windowPosY);
    glutCreateWindow("Problem 2");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
*/



//poblem2.2

/*
#include <gl/glut.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265f
#include <string.h>
#include <stdio.h>
#define Red 1
#define Green 2
#define Blue 3
#define Black 4
#define Small 1
#define Medium 2
#define Large 3
#define Stop 3
#define Resume 4
int windowWidth = 500;
int windowHeight = 500;
int windowPosX = 50;
int windowPosY = 50;
int red = 1, green = 0, blue = 0;
int option_global = 4;
GLfloat ballRadius = 0.5;
GLfloat xPos = 0.0;
GLfloat yPos = 0.0;
GLfloat xPosMax, xPosMin, yPosMax, yPosMin;
GLdouble xLeft = -1, xRight = 1, yBottom = -1, yTop = 1;
GLfloat xSpeed = 0.02;
GLfloat ySpeed = 0.007;
void output_Text(float x, float y, char *text) //output a text at x,y
{  int len, i;
  glColor3f(1, 0, 0); //red text
  glRasterPos3f(x, y, 0);
  len = (int)strlen(text);
  for (i = 0; i < len; i++) {
  glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
  }
}
void output_Number(float x, float y, double v) //output a number at x,y
{  int len, i;
  char text [20]={'\0'};
  sprintf(text, "%lf", v); //converts v to the string "text"
  output_Text(x,y,text);
}

void Menu_Color(int option)
{
    switch(option)
    {
        case Red: red = 1.0; green = 0.0; blue = 0.0; break;
        case Green: red = 0.0; green = 1.0; blue = 0.0; break;
        case Blue: red = 0.0; green = 0.0; blue = 1.0; break;
        case Black: red=0.0; green= 0.0; blue=0.0; break;
        default: break;
    }
}
void initGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(xLeft, xRight, yBottom, yTop);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void Time_Delay(int dur)
{
    clock_t start_time;
    start_time = clock();
    while((clock() - start_time) < dur){}
}
void display_Ball()
{
    output_Text(xLeft+0.05, yBottom+0.1, "bouncing ball size= ");
    output_Number(xLeft+0.7, yBottom+0.1, ballRadius);
    glTranslatef(xPos, yPos, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(red, green, blue);
    glVertex2f(0.0, 0.0);
    int numSegments = 100;
    GLfloat angle;
    for (int i = 0; i <= numSegments; i++)
    {
        angle = i * 2.0 * PI / numSegments;
        glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    xPosMin = xLeft + ballRadius;
    xPosMax = xRight - ballRadius;
    yPosMin = yBottom + ballRadius;
    yPosMax = yTop - ballRadius;
    display_Ball();
    glEnd();
    glutSwapBuffers();
    xPos += xSpeed;
    yPos += ySpeed;
    if (xPos > xPosMax)
    {
        xPos = xPosMax;
        xSpeed = -xSpeed;
    }
    else if (xPos < xPosMin)
    {
        xPos = xPosMin;
        xSpeed = -xSpeed;
    }
    if (yPos > yPosMax)
    {
        yPos = yPosMax;
        ySpeed = -ySpeed;
    }
    else if (yPos < yPosMin)
    {
        yPos = yPosMin;
        ySpeed = -ySpeed;
    }
    Time_Delay(10);
}
void doNothing(){}
void processMenuEvents(int option)
{
    switch(option)
    {
        case Stop: glutIdleFunc(doNothing);break;
        case Resume: glutIdleFunc(display);break;
        default:break;
    }
}
void Menu_size(int option)
{
    switch(option)
    {
        case Small:ballRadius = 0.1;break;
        case Medium:ballRadius = 0.3;break;
        case Large:ballRadius = 0.5;break;
        default:break;
    }
}
void createGLUTMenus()
{
    int submenu1 = glutCreateMenu(Menu_Color);
    glutAddMenuEntry("Red",Red);
    glutAddMenuEntry("Green", Green);
    glutAddMenuEntry("Blue", Blue);
    glutAddMenuEntry("Black",Black);
    int submenu2 = glutCreateMenu(Menu_size);
    glutAddMenuEntry("Small=0.1",Small);
    glutAddMenuEntry("Medium=0.3",Medium);
    glutAddMenuEntry("Large=0.5",Large);
    int menu = glutCreateMenu(processMenuEvents);
    glutAddSubMenu("Color", submenu1);
    glutAddSubMenu("Size", submenu2);
    glutAddMenuEntry("Stop",Stop);
    glutAddMenuEntry("Resume", Resume);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(windowPosX, windowPosY);
    glutCreateWindow("Problem 2");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    initGL();
    createGLUTMenus();
    glutMainLoop();
    return 0;
}
*/

//poblem3.1
/*
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define RED 1
#define GREEN 2
#define BLUE 3
#define WHITE 4
#define HIGH 1
#define MEDIUM 2
#define LOW 3
GLfloat ratio;
GLfloat x=0.0,y=0,z=3.0;//eye coordinates
float ni=25, nj=25;
GLfloat angle=0, inc_angle=0.1; //rotation angle
GLfloat red=1, green=1, blue=1;
bool flag;
int menu1, menu2, cur_menu;

void output_Text(float x, float y, char *text)
{
    glColor3f(1, 0, 0);//text color red
    glRasterPos3f(x, y, 0);
    int len, i;
    len = (int)strlen(text);
    for (i = 0; i < len; i++) {
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }
}

void Output_CurMenu(int menu)
{
    if (menu==menu1) output_Text(-3.0,-1.2,"Color menu");
    if (menu==menu2) output_Text(-3.0,-1.2,"Speed menu");
    output_Text(-3.0,-1.0,"F1- switch menu");
}

void changeSize(GLsizei w, GLsizei h)
{
    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if(h == 0)
    h = 1;
    ratio = 1.0f * w / h;
    // Reset the coordinate system before modifying
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);
    // Set the clipping volume
    gluPerspective(60,ratio,1,1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(x, y, z,
    x,y,z-1,
    0.0,1.0,0.0);
}

float sx(float u,float v)
{
    return u;
}
float sy(float u,float v)
{
    return u*u-v*v;
}
float sz(float u,float v)
{
    return v;
}

void displaySurface() //DOWNLOADABLE
{   int i, j;
    float stepi,stepj,ui,vj,uip1,vjp1;
    float xij,yij,zij;
    float xip1j,yip1j,zip1j;
    float xijp1,yijp1,zijp1;
    float xip1jp1,yip1jp1,zip1jp1;
    stepi=float(2/ni);
    stepj=float(2/nj);
 for (j = 0; j <= nj-1; j++)
 {
    for (i = 0; i <= ni-1; i++)
    {
        ui=-1+i*stepi;
        vj=-1+j*stepj;
        uip1=-1+(i+1)*stepi;
        vjp1=-1+(j+1)*stepj;
        xij=sx(ui,vj);
        yij=sy(ui,vj);
        zij=sz(ui,vj);
        xip1j=sx(uip1,vj);
        yip1j=sy(uip1,vj);
        zip1j=sz(uip1,vj);
        xip1jp1=sx(uip1,vjp1);
        yip1jp1=sy(uip1,vjp1);
        zip1jp1=sz(uip1,vjp1);
         xijp1=sx(ui,vjp1);
        yijp1=sy(ui,vjp1);
        zijp1=sz(ui,vjp1);
        glColor3f(0.3, 0.3, 0.3);
        glBegin(GL_QUADS);
        glVertex3f(xij,yij,zij);
        glVertex3f(xip1j,yip1j,zip1j);
        glVertex3f(xip1jp1,yip1jp1,zip1jp1);
        glVertex3f(xijp1,yijp1,zijp1);
        glEnd();
        glColor3f(red, green, blue);
        glBegin(GL_LINE_LOOP);
        glVertex3f(xij,yij,zij);
        glVertex3f(xip1j,yip1j,zip1j);
        glVertex3f(xip1jp1,yip1jp1,zip1jp1);
        glVertex3f(xijp1,yijp1,zijp1);
        glEnd();
    }
 }
}

void display(void)
{
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotated(angle,0,1,0);
    displaySurface();
    glPopMatrix();
    angle=angle+inc_angle;
    Output_CurMenu(cur_menu);
    glutSwapBuffers();
}
void Do_Nothing(){ }

void processSpecialKeys(int c, int x, int y)
{
if ((c == GLUT_KEY_F1)&&(!flag)) // F1 pressed and menu is not in use
    {cur_menu = glutGetMenu();// which menu is in use ?
if (cur_menu==menu1) {glutSetMenu(menu2); cur_menu=menu2;} else
    if (cur_menu==menu2) {glutSetMenu(menu1); cur_menu=menu1;}
    glutAttachMenu(GLUT_RIGHT_BUTTON);// attach the menu to the mouse button
    }
}
void process_Menu_Color(int option) {
    switch (option) {
    case RED : red = 1.0; green = 0.0; blue = 0.0; break;
    case GREEN : red = 0.0; green = 1.0; blue = 0.0; break;
    case BLUE : red = 0.0; green = 0.0; blue = 1.0; break;
    case WHITE : red = 1.0; green = 1.0; blue = 1.0; break;
    }
}

void process_Menu_Speed(int option) {
    switch (option) {
    case LOW : inc_angle=0.1; break;
    case MEDIUM: inc_angle=1; break;
    case HIGH : inc_angle=3; break;
    }
}

void createGLUTMenus() {
    menu1=glutCreateMenu(process_Menu_Color);
    glutAddMenuEntry("Red",RED);
    glutAddMenuEntry("Blue",BLUE);
    glutAddMenuEntry("Green",GREEN);
    glutAddMenuEntry("White",WHITE);
    menu2=glutCreateMenu(process_Menu_Speed);
    glutAddMenuEntry("Low",LOW);
    glutAddMenuEntry("Medium",MEDIUM);
    glutAddMenuEntry("High",HIGH);
    cur_menu=menu2;
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void processMenuStatus(int status, int x, int y) {
    if (status == GLUT_MENU_IN_USE)
    flag = true; else flag = false; //check whether the menu is in use
    // if it is in use you can not swap between them
}

int main(int argc, char **argv)
{   glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,360);
    glutCreateWindow("Problem 3");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(changeSize);
    glutMenuStatusFunc(processMenuStatus);
    glutSpecialFunc(processSpecialKeys);
    createGLUTMenus();
    glutMainLoop();
    return(0);
}
*/


/*
//poblem3.2
#include <gl/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define RED 1
#define GREEN 2
#define BLUE 3
#define WHITE 4
#define HIGH 1
#define MEDIUM 2
#define LOW 3
#define Surface1 1
#define Surface2 2
#define Surface3 3
GLfloat ratio;
GLfloat x = 0.0, y = 0, z = 3.0;
int number=1;
float ni = 25, nj = 25;
GLfloat angle = 0, inc_angle = 0.1;
GLfloat red = 1, green = 1, blue = 1;
bool flag;
int menu1, menu2,menu3, cur_menu;
void output_Text(float x, float y, char *text)
{
    glColor3f(1, 0, 0);
    glRasterPos3f(x, y, 0);
    int len, i;
    len = (int)strlen(text);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }
}
void Output_CurMenu(int menu)
{
    if (menu == menu1)
        output_Text(-3.0, -1.2, "Color menu");
    if (menu == menu2)
        output_Text(-3.0, -1.2, "Speed menu");
    if (menu ==menu3)
        output_Text(-3.0,-1.2,"Surface menu");
    output_Text(-3.0, -1.0, "F1-switch menu");
}
void changeSize(GLsizei w, GLsizei h)
{
    if (h == 0)
        h = 1;
    ratio = 1.0f * w / h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, w, h);
    gluPerspective(60, ratio, 1, 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(x, y, z, x, y, z-1, 0.0, 1.0, 0.0);
}
float sx(float u, float v,int number)
{
    switch(number)
    {
        case 1: return u;
        case 2: return sin(2.5*u);
        case 3: return u;
        default:break;
    }
}
float sy(float u, float v,int number)
{
    switch(number)
    {
        case 1: return u*u-v*v;
        case 2: return u*u-v*v;
        case 3: return 2*exp(-v*v-u*u);
        default:break;
    }
}
float sz(float u, float v,int number)
{
    switch(number)
    {
        case 1: return v;
        case 2: return v;
        case 3: return v;
        default:break;
    }
}
void displaySurface()
{
    int i, j;
    float stepi,stepj,ui,vj,uip1,vjp1;
    float xij,yij,zij;
    float xip1j,yip1j,zip1j;
    float xijp1,yijp1,zijp1;
    float xip1jp1,yip1jp1,zip1jp1;
    stepi=float(2/ni);
    stepj=float(2/nj);
    if(number == 3){
        glTranslated(0,-1,0);
    }
    for (j = 0; j <= nj-1; j++)
    {
        for (i = 0; i <= ni-1; i++)
        {
            ui=-1+i*stepi;
            vj=-1+j*stepj;
            uip1=-1+(i+1)*stepi;
            vjp1=-1+(j+1)*stepj;

            xij=sx(ui,vj,number);
            yij=sy(ui,vj,number);
            zij=sz(ui,vj,number);

            xip1j=sx(uip1,vj,number);
            yip1j=sy(uip1,vj,number);
            zip1j=sz(uip1,vj,number);

            xip1jp1=sx(uip1,vjp1,number);
            yip1jp1=sy(uip1,vjp1,number);
            zip1jp1=sz(uip1,vjp1,number);

            xijp1=sx(ui,vjp1,number);
            yijp1=sy(ui,vjp1,number);
            zijp1=sz(ui,vjp1,number);

                        glColor3f(0.9, 0.9, 0.9);
            glBegin(GL_QUADS);
            glVertex3f(xij,yij,zij);
            glVertex3f(xip1j,yip1j,zip1j);
            glVertex3f(xip1jp1,yip1jp1,zip1jp1);
            glVertex3f(xijp1,yijp1,zijp1);
            glEnd();
            glColor3f(red, green, blue);
            glBegin(GL_LINE_LOOP);
            glVertex3f(xij,yij,zij);
            glVertex3f(xip1j,yip1j,zip1j);
            glVertex3f(xip1jp1,yip1jp1,zip1jp1);
            glVertex3f(xijp1,yijp1,zijp1);
            glEnd();
        }
    }
}
void display(void)
{
    glClearColor(1, 1, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotated(angle, 0, 1, 0);;
    displaySurface();
    glPopMatrix();
    angle = angle + inc_angle;
    Output_CurMenu(cur_menu);
    glutSwapBuffers();
}
void Do_Nothing(){}
void processSpecialKeys(int c, int x, int y)
{
    if((c == GLUT_KEY_F1) && (!flag))
    {
        cur_menu = glutGetMenu();
        if (cur_menu == menu1)
        {
            glutSetMenu(menu2);
            cur_menu = menu2;
        }
        else if (cur_menu == menu2)
        {
            glutSetMenu(menu3);
            cur_menu = menu3;
        }
        else if (cur_menu == menu3)
        {
            glutSetMenu(menu1);
            cur_menu = menu1;
        }
        glutAttachMenu(GLUT_RIGHT_BUTTON);
    }
}
void process_Menu_Color(int option)
{
    switch(option)
    {
        case RED: red = 1.0; green = 0.0; blue = 0.0; break;
        case GREEN: red = 0.0; green = 1.0; blue = 0.0; break;
        case BLUE: red = 0.0; green = 0.0; blue = 1.0; break;
        case WHITE: red = 1.0; green = 1.0; blue = 1.0; break;
    }
}
void process_Menu_Speed(int option)
{
    switch(option)
    {
        case LOW: inc_angle = 0.1; break;
        case MEDIUM: inc_angle = 1; break;
        case HIGH: inc_angle = 3; break;
    }
}
void process_Menu_Surface(int option)
{
    switch(option)
    {
        case Surface1: number=1;break;
        case Surface2: number=2;break;
        case Surface3: number=3;break;
        default:break;
    }
}
void createGLUTMenus()
{
    menu1 = glutCreateMenu(process_Menu_Color);
    glutAddMenuEntry("Red", RED);
    glutAddMenuEntry("Blue", BLUE);
    glutAddMenuEntry("Green", GREEN);
    glutAddMenuEntry("White", WHITE);
    menu2 = glutCreateMenu(process_Menu_Speed);
    glutAddMenuEntry("Low", LOW);
    glutAddMenuEntry("Medium", MEDIUM);
    glutAddMenuEntry("High", HIGH);
    menu3= glutCreateMenu(process_Menu_Surface);
    glutAddMenuEntry("Surface1",Surface1);
    glutAddMenuEntry("Surface2",Surface2);
    glutAddMenuEntry("Surface3",Surface3);
    cur_menu = menu3;
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void processMenuStatus(int status, int x, int y)
{
    if(status == GLUT_MENU_IN_USE)
        flag = true;
    else
        flag = false;
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 360);
    glutCreateWindow("Problem 3");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(changeSize);
    glutMenuStatusFunc(processMenuStatus);
    glutSpecialFunc(processSpecialKeys);
    createGLUTMenus();
    glutMainLoop();
    return 0;
}
*/


//pob4

#include <GL/glut.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265f
#include <string.h>
#include <stdio.h>

#define Red 1
#define Green 2
#define Blue 3
#define Black 4

#define Stop 0
#define Resume 1

#define Small 1
#define Medium 2
#define Large 3

int windowWidth = 500;
int windowHeight = 500;
int windowPosX = 50;
int windowPosY = 50;

GLfloat ballRadius = 0.3;
GLfloat xPos = 0.0;
GLfloat yPos = 0.0;
GLfloat zPos = 0.0;
GLfloat xPosMax, xPosMin , yPosMax , yPosMin; //Ball's (x,y) -limits
GLfloat zPosMax,zPosMin;
GLdouble xLeft = -1,xRight = 1,yBottom=-1,yTop = 1; //The Bbox limits
GLdouble zLeft = -1,zRight = 1;
GLfloat xSpeed = 0.02;
GLfloat ySpeed = 0.007;
GLfloat zSpeed = 0.007;
GLfloat angle = 0.0;
int red=0,green=0,blue=1;


int option_global = 1;
void output_Text(float x, float y, char *text) //output a text at x,y
{  int len, i;
  glColor3f(1, 0, 0); //red text
  glRasterPos3f(x, y, 0);
  len = (int)strlen(text);
  for (i = 0; i < len; i++) {
  glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
  }
}
void output_Number(float x, float y, double v) //output a number at x,y
{  int len, i;
  char text [20]={'\0'};
  sprintf(text, "%lf", v); //converts v to the string "text"
  output_Text(x,y,text);
}

void init3D(){
glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(20,1,1,1000);
    xPosMin = xLeft + ballRadius;
    xPosMax = xRight - ballRadius;
    yPosMin = yBottom + ballRadius;
    yPosMax = yTop - ballRadius;
    zPosMin = zLeft+ ballRadius;
    zPosMax = zRight-ballRadius;
gluLookAt(0,0,-10,
        0,0,0,
        0.0,1.0,0.0);
        glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void Display_Sphere(){
    glutWireSphere(ballRadius,32,32);
}

void initGL(){
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(xLeft,xRight,yBottom,yTop);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void Time_Delay(int dur){
    clock_t start_time;
    start_time = clock();
    while((clock()-start_time) <dur){


    }
}
void Unit_Cube(void)
{
// Front face
glColor3f(0.9, 0.9, 0.9);
glBegin(GL_QUADS);
glVertex3f(1.0,1.0,1.0);
glVertex3f(1.0,-1.0,1.0);
glVertex3f(-1.0,-1.0,1.0);
glVertex3f(-1.0,1.0,1.0);
glEnd();
//Back Face
glColor3f(0.1, 0.9, 0.9);
glBegin(GL_QUADS);
glVertex3f(1.0,1.0,-1.0);
glVertex3f(1.0,-1.0,-1.0);
glVertex3f(-1.0,-1.0,-1.0);
glVertex3f(-1.0,1.0,-1.0);
glEnd();
// Top Face
glColor3f(0.9, 0.1, 0.9);
glBegin(GL_QUADS);
glVertex3f(1.0,1.0,-1.0);
glVertex3f(1.0,1.0,1.0);
glVertex3f(-1.0,1.0,1.0);
glVertex3f(-1.0,1.0,-1.0);
glEnd();
// Bottom Face
glColor3f(0.1, 0.1, 0.9);
glBegin(GL_QUADS);
glVertex3f(1.0,-1.0,-1.0);
glVertex3f(1.0,-1.0,1.0);
glVertex3f(-1.0,-1.0,1.0);
glVertex3f(-1.0,-1.0,-1.0);
glEnd();
// Left face
glColor3f(0.1, 0.9, 0.1);
glBegin(GL_QUADS);
glVertex3f(1.0,1.0,1.0);
glVertex3f(1.0,1.0,-1.0);
glVertex3f(1.0,-1.0,-1.0);
glVertex3f(1.0,-1.0,1.0);
glEnd();
glColor3f(0.9, 0.9, 0.1);
// Right face
glBegin(GL_QUADS);
glVertex3f(-1.0,1.0,1.0);
glVertex3f(-1.0,1.0,-1.0);
glVertex3f(-1.0,-1.0,-1.0);
glVertex3f(-1.0,-1.0,1.0);
glEnd();
}

void display_Ball(){
    glPushMatrix();

    output_Text(xLeft+0.05,yBottom+0.10,"bouncing ball size=");
    output_Number(xLeft+0.7,yBottom+0.1,yPos);
//set the position of the ball

    glTranslatef(xPos,yPos,zPos);


    //glBegin(GL_TRIANGLE_FAN);
    glColor3f(red,green,blue);

    //glVertex2f(0.0,0.0);
    Display_Sphere();

    int numSegments = 100;
    GLfloat angle;

    glPopMatrix();
    //for(int i=0;i<=numSegments;i++){
    //    angle = i*2.0*PI/numSegments;
    //    glVertex2f(cos(angle)*ballRadius,sin(angle)*ballRadius);
    //}
}

void display(){

    glClear(GL_COLOR_BUFFER_BIT);
    glRotated(angle,0,1,0);
    angle+=0.1;
    Unit_Cube();
    glLoadIdentity();
    display_Ball();
    glEnd();
    glutSwapBuffers();



switch(option_global){
        case Stop:xPos=xPos; yPos= yPos; zPos=zPos; break;
        case Resume: xPos+=xSpeed; yPos+=ySpeed; zPos+=zSpeed; break;
    default:xPos+=xSpeed; yPos+=ySpeed; zPos+=zSpeed; break;
    }




    //Animation Control - compute the location for the next refresh

    //Check if the ball exceeds the edges
    if(xPos>1){
        xPos = 1;
        xSpeed = - xSpeed;
    }else if(xPos < xPosMin){
    xPos = xPosMin;
    xSpeed = -xSpeed;
    }

    if(yPos>yPosMax){
        yPos = yPosMax;
        ySpeed = - ySpeed;
    }else if (yPos<yPosMin){
    yPos = yPosMin;
    ySpeed = - ySpeed;
    }

    if(zPos>zPosMax){
        zPos = zPosMax;
        zSpeed = - zSpeed;
    }else if (zPos<zPosMin){
    zPos = zPosMin;
    zSpeed = - zSpeed;
    }




    Time_Delay(10);
}

void processMenuEvents(int option){
option_global = option;
}

void Menu_Color(int option){
    switch(option){
        case Red: red=1.0;green=0.0;blue=0.0;break;
        case Green : red=0.0;green=1.0;blue = 0.0;break;
        case Blue : red=0.0;green=0.0;blue=1.0;break;
        case Black : red=0.0;green=0.0;blue = 0.0; break;
        default: break;
    }
}

void Menu_Size(int option){
    switch(option){
        case Small: ballRadius = 0.1; break;
        case Medium: ballRadius = 0.3; break;
        case Large : ballRadius = 0.5; break;
        default: break;
    }

    xPosMin = xLeft + ballRadius;
    xPosMax = xRight - ballRadius;
    yPosMin = yBottom + ballRadius;
    yPosMax = yTop - ballRadius;
    zPosMin = zLeft+ ballRadius;
    zPosMax = zRight-ballRadius;
}



void createGLUTMenus(){
    int submenu1 = glutCreateMenu(Menu_Color);
    glutAddMenuEntry("Red",Red);
    glutAddMenuEntry("Green",Green);
    glutAddMenuEntry("Blue" , Blue);
    glutAddMenuEntry("Black" , Black);

    int submenu2 = glutCreateMenu(Menu_Size);
    glutAddMenuEntry("Small = 0.1",Small);
    glutAddMenuEntry("Medium = 0.3",Medium);
    glutAddMenuEntry("Large = 0.5",Large);


    int menu = glutCreateMenu(processMenuEvents);
    glutAddSubMenu("Color",submenu1);
    glutAddSubMenu("Size",submenu2);
    glutAddMenuEntry("Stop",Stop);
    glutAddMenuEntry("Resume",Resume);


    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(windowWidth,windowHeight);
    glutInitWindowPosition(windowPosX,windowPosY);
    glutCreateWindow("Problem 2");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    init3D();
    createGLUTMenus();
    glutMainLoop();
    return 0;
}
