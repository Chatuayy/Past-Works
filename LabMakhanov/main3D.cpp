/*

#include <gl/glut.h>
#include <time.h>
//problem 1
GLfloat rotangle1=0.0;
GLfloat deltarot1=0.2;
GLfloat rotangle2=0.0;
GLfloat deltarot2=0.3;
GLfloat direction1[]={0,0,1};//the first teapot rotates around this direction
GLfloat direction2[]={1,0,0};//the second teapot rotates around this direction
void Time_Delay(int dur) {
clock_t start_time;
start_time = clock();
while ((clock() - start_time) < dur) {
}
}
void Init(void)
{
 glClearColor(1,1,1,0);
 glClear(GL_COLOR_BUFFER_BIT); // clear the screen
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(15, 1.33, .01, 10000);
 gluLookAt(50.0, 50.0, 50.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void plot_Rotation_Vector1()
{ float x2,y2,z2;
 float delta=20;//size of the vector
glColor3f(0,0,1);
x2=direction1[0]*delta;
y2=direction1[1]*delta;
z2=direction1[2]*delta;
 glBegin(GL_LINE_STRIP);
 glVertex3f(0,0,0);
 glVertex3d(x2,y2,z2);
 glEnd();
}
void plot_Rotation_Vector2()
{ float x2,y2,z2;
 float delta=20;//size of the vector
glColor3f(0,0,1);
x2=direction2[0]*delta;
y2=direction2[1]*delta;
z2=direction2[2]*delta;
 glBegin(GL_LINE_STRIP);
 glVertex3f(0,0,0);
 glVertex3d(x2,y2,z2);
 glEnd();
}
void plot_Origin()
{ glPointSize(10);
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex3f(0,0,0);
glEnd();
}
void Rot_Teapot1()
{GLfloat dx,dy,dz; //working variables
dx=direction1[0];//split the direction vector into components
dy=direction1[1];
dz=direction1[2];
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);
glPushMatrix();//save the original transformation matrix in the stack
rotangle1=rotangle1+deltarot1;
glRotatef(rotangle1,dx,dy,dz); //rotate around the given vector
glColor3f(1.0,0.0,0.0);//red
glutSolidTeapot(5.0); //draw solid teapot
glColor3f(0.0,0.0,0.0);//white wireframe
glutWireTeapot(5.0); //draw the teapot again as the wireframe
plot_Rotation_Vector1();//the rotation vector
plot_Origin();//the origin
glPopMatrix(); //get the original transformation back
}
void Rot_Teapot2()
{GLfloat dx,dy,dz; //working variables
dx=direction2[0];//split the direction vector into components
dy=direction2[1];
dz=direction2[2];

glColor3f(0.0,0.0,1.0);
glPushMatrix();//save the original transformation matrix in the stack
glTranslatef(10.0,10.0,0.0); //rotate around the given vector
rotangle2=rotangle2+deltarot2;
glRotatef(rotangle2,dx,dy,dz);
glColor3f(0.0,0.0,1.0);//red
glutSolidTeapot(3.0); //draw solid teapot
glColor3f(0.0,0.0,0.0);//white wireframe
glutWireTeapot(3.0); //draw the teapot again as the wireframe
plot_Rotation_Vector2();//the rotation vector
plot_Origin();//the origin
glPopMatrix();
}
void Do_Nothing(void)
{ }
void mydisplay(void)
{//clear the screen, increment the rotation angle, plot the teapot
glClear(GL_COLOR_BUFFER_BIT);
//rotangle1=rotangle1+deltarot1;
//rotangle2=rotangle2+deltarot2;
Rot_Teapot1();
Rot_Teapot2();
glutSwapBuffers();
Time_Delay(50);
}
void processNormalKeys(unsigned char key, int x, int y)
{ switch (key) {
 case 's': case 'S': glutIdleFunc(mydisplay);break;
 case 'e':case 'E': glutIdleFunc(Do_Nothing);break;
  break;
 default:
 break; } }
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB );
glutInitWindowSize(480,480);
glutInitWindowPosition(100, 100);
glutCreateWindow("problem 1");
glutDisplayFunc(mydisplay);
glutIdleFunc(mydisplay);
glutKeyboardFunc(processNormalKeys);
Init();
glutMainLoop();}*/

/*
//problem 2
#include <gl/glut.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
GLfloat inc1=1;
GLfloat angle1;
GLfloat inc2=1;
GLfloat angle2;
GLfloat xprev,yprev=0;
GLfloat vx1=0,vy1=0,vz1=1;
GLfloat vx2=0,vy2=1,vz2=0;
int d;
void Time_Delay(int dur){
clock_t start_time;
start_time=clock();
while((clock()-start_time)<dur){
}
}

void Rot_Teapot()
{
glClear(GL_COLOR_BUFFER_BIT);//clear the screen
glPushMatrix();
glRotatef(angle1,vx1,vy1,vz1);
glRotatef(angle2,vx2,vy2,vz2);
glColor3f(1.0,0.0,0.0);
glutSolidTeapot(3.0);
glColor3f(0.0,0.0,0.0);
glutWireTeapot(3.0);
glPopMatrix();
}

void Init(void)
{//all setuo for Opgl go here
glClearColor(1.0,1.0,1.0,0.0); //background is w
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(30,1.33,0.01,10000);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(15.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0);
}

void Do_Nothing(void)
{

}

void mydisplay(void) {
angle1 = angle1 + inc1;
angle2 += inc2;
Rot_Teapot();
glutSwapBuffers();
Time_Delay(5);
}

void motion(int x, int y) {
if (labs(x - xprev) > labs(y - yprev))
d = 0;
else
d = 1;

if (d == 1) {
inc2 = 0;
if (y < yprev)
inc1 = 1;
else
inc1 = -1;

} else if (d == 0) {
inc1 = 0;
if (x < xprev)
inc2 = 1;
else
inc2 = -1;
}

glutIdleFunc(mydisplay);
xprev = x;
yprev = y;
}

void mouse(int button, int state,int x,int y)
{
switch(button){
case GLUT_LEFT_BUTTON:
if(state==GLUT_DOWN)glutIdleFunc(mydisplay);
break;
case GLUT_RIGHT_BUTTON:
if(state==GLUT_DOWN)glutIdleFunc(Do_Nothing);
break;
default:
break;
}
}
void processNormalKeys(unsigned char key, int x, int y)
{ switch (key) {
 case 's': case 'S': glutIdleFunc(mydisplay);break;
 case 'e':case 'E': glutIdleFunc(Do_Nothing);break;
  break;
 default:
 break; } }

int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(480,480);
glutInitWindowPosition(100,100);
glutCreateWindow("Problem 2");
glutDisplayFunc(mydisplay);
glutMotionFunc(motion);
glutMouseFunc(mouse);
glutKeyboardFunc(processNormalKeys);
Init();
glutMainLoop();
}*/

/*
//problem3
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
GLfloat mat_specular1[] = { 0.0, 0.1, 0.3, 1.0 };//blue for the Earth
GLfloat mat_specular2[] = { 0.3, 0.3, 0.0, 1.0 };//yellow for the Sun
GLfloat mat_specular3[] = { 0.2, 0.2, 0.2, 1.0 };//grey for the Moon
GLint year_Earth = 0, day_Earth = 0;//rotation angles, Earth
GLint year_Moon=0, day_Moon=0; //rotation angles, Moon
GLint dyearE=1, ddayE=0.5; //increments
GLint dyearM=2, ddayM=0.25;
int slices=25, stacks=25;
void Time_Delay(int dur) {
clock_t start_time;
start_time = clock();
while ((clock() - start_time) < dur) {
}
}
void init(void)
{glClearColor (0.0, 0.0, 0.0, 0.3);
glShadeModel (GL_FLAT);
glEnable(GL_LIGHTING);//enable lighting
glEnable(GL_LIGHT0); //enable light 0 by default it is white
glEnable(GL_DEPTH_TEST);//close objects obstruct far objects
}
void drawplanet(GLfloat rad)
{
glutSolidSphere(rad, slices, stacks);
glColor3f(0,0,0);//black wire
glutWireSphere(rad,slices, stacks);
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glPushMatrix();
glRotatef (year_Earth, 0.0, 1.0, 0.0);//rotate the Earth
glTranslatef (2.0, 0.0, 0.0); //shift the Earth by 2
glRotatef (day_Earth, 0.0, 1.0, 0.0);//revolve the Earth
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);//reflection light for
//the Earth
drawplanet(0.5);
glRotatef (year_Moon, 0.0, 1.0, 0.0);//rotate the Earth
glTranslatef (1.0, 0.0, 0.0); //shift the Earth by 2
glRotatef (day_Moon, 0.0, 1.0, 0.0);//revolve the Earth
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular3);
drawplanet(0.2);
glPopMatrix();
glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);//reflection light, Sun
drawplanet(1);//draw the motionless Sun

year_Earth=year_Earth+dyearE; //increment rotations around the sun
day_Earth=day_Earth+ddayE;//increment rotations around itself
year_Moon=year_Moon+dyearM; //increment rotations around the sun
day_Moon=day_Moon+ddayM;
glutSwapBuffers();
Time_Delay(50);
}
void reshape (int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt (0.0, 0.0, 6.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
int main(void)
{
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("problem 3 Sun-Earth-Moon");
init ();
glutDisplayFunc(display);
glutIdleFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();}

*/


//problem4
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
GLfloat mat_specular1[] = { 0.0, 0.1, 0.3, 1.0 };//blue for the Earth
GLfloat mat_specular2[] = { 0.3, 0.3, 0.0, 1.0 };//yellow for the Sun
GLfloat mat_specular3[] = { 0.2, 0.2, 0.2, 1.0 };//grey for the Moon
GLint year_Earth = 0, day_Earth = 0;//rotation angles, Earth
GLint year_Moon=0, day_Moon=0; //rotation angles, Moon
GLint dyearE=1, ddayE=0.5; //increments
GLint dyearM=2, ddayM=0.25;
int slices=25, stacks=25;
void Time_Delay(int dur) {
    clock_t start_time;
    start_time = clock();
    while ((clock() - start_time) < dur) {}
}
void init(void)
{   glClearColor (0.0, 0.0, 0.0, 0.3);
    glShadeModel (GL_FLAT);
    glEnable(GL_LIGHTING);//enable lighting
    glEnable(GL_LIGHT0); //enable light 0 by default it is white
    glEnable(GL_DEPTH_TEST);//close objects obstruct far objects
}
void drawplanet(GLfloat rad)
{
    glutSolidSphere(rad, slices, stacks);
    glColor3f(0,0,0);//black wire
    glutWireSphere(rad,slices, stacks);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);
    glPushMatrix();
    glRotatef (year_Earth, 0.0, 1.0, 0.0);//rotate the Earth
    glTranslatef (2.0, 0.0, 0.0); //shift the Earth by 2
    glRotatef (day_Earth, 0.0, 1.0, 0.0);//revolve the Earth
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);//reflection light for
    //the Earth
    drawplanet(0.5);
    glRotatef(90,10,5,0);
    glRotatef (year_Moon, 0.0, 1.0, 0.0);//rotate the Earth

    glTranslatef (1.0, 0.0, 0.0); //shift the Earth by 2

    glRotatef (day_Moon, 0.0, 1.0, 0.0);//revolve the Earth
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular3);
    drawplanet(0.2);
    glPopMatrix();
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);//reflection light, Sun
    drawplanet(1);//draw the motionless Sun

    year_Earth=year_Earth+dyearE; //increment rotations around the sun
    day_Earth=day_Earth+ddayE;//increment rotations around itself
    year_Moon=year_Moon+dyearM; //increment rotations around the sun
    day_Moon=day_Moon+ddayM;
    glutSwapBuffers();
    Time_Delay(50);
}
void reshape (int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt (0.0, 0.0, 6.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
void Do_Nothing(void)
{}
void processNormalKeys(unsigned char key, int x, int y)
{ switch (key) {
case 's': case 'S': glutIdleFunc(display);break;
case 'e':case 'E': glutIdleFunc(Do_Nothing);break;
break;
default:
break; } }

void mouse(int button, int state,int x,int y)
{
    switch(button){
    case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN)glutIdleFunc(display);
        break;
    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)glutIdleFunc(Do_Nothing);
        break;
        default:
        break;
    }
}
int main(void)
{
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("problem 3 Sun-Earth-Moon");
init ();
glutDisplayFunc(display);
glutIdleFunc(display);
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutKeyboardFunc(processNormalKeys);
glutMainLoop();}


/*
//problem5
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

GLfloat ratio = 1.33;
GLfloat x = -0.1, y = 2.0, z = 7.0;
GLfloat lx = 0.0, ly = 0.0, lz = -1.0, angle = 0;
GLfloat increment = 0.1, angleincrement = 0.01;
GLfloat ang = 0, sangleincrement = 1;
float R = 0.5;
int c;
GLfloat angh = 0, sangleincrement2 = 0.01;

void changeSize(GLint w, GLint h)
{
    if(h == 0)
        h = 1;
    ratio = 1.0* w/h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0,0,w,h);
    gluPerspective(45, ratio, 1, 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(x, y, z, x+lx, y+ly, z+lz, 0.0, 1.0, 0.0);
}

void Time_Delay(int dur)
{
    clock_t start_time;
    start_time = clock();
    while((clock()-start_time)<dur)
    {

    }
}

void Draw_Magic_Ball(void)
{
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
        glRotatef(ang, 0, 1, 0);
        glTranslatef(-2,R,0);
        glRotatef(ang, 0, 1, 1);
        glutWireSphere(R, 50, 50);
        glColor3f(0,0,1);
        glutSolidSphere(R, 50, 50);
    glPopMatrix();
    ang = ang + sangleincrement;
}

void Draw_Donut(void)
{
    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
        glTranslatef(3,1,-4);
        glRotatef(ang, 0, 1, 0);
        glutWireTorus(0.2, 0.8, 20, 20);
        glColor3f(0,0,1);
        glutSolidTorus(0.2, 0.8, 20, 20);
    glPopMatrix();
    ang = ang + sangleincrement;
}

void DrawSnowMan()
{
	glColor3f(1.0, 1.0, 1.0);
// Draw Body.
	glTranslatef(0.0 ,0.75, 0.0);
    glutSolidSphere(0.75,20,20);
    glPushMatrix();
// Draw Head
	glTranslatef(0.0, 1.0, 0.0);
  	glutSolidSphere(0.25,20,20);
    glRotatef(angh,1.0, 0.0, 0.0);
    if(labs(angh) > 20)
    {
        sangleincrement2 = -sangleincrement2;
    }
    angh = angh + sangleincrement2;
// Draw Eyes
    c=rand()%100;
//random number generator for eye blinking
//generates 1  in 1% of the runs so if c==1 you can change the eyes color to white
    if(c==1){
        glColor3f(1,1,1);
    }
    else{
	glColor3f(0,0,0);
    }
 	glPushMatrix();
	glTranslatef(0.05, 0.10, 0.18);
	glutSolidSphere(0.05,10,10);
	glTranslatef(-0.1, 0.0, 0.0);
	glutSolidSphere(0.05,10,10);
	glPopMatrix();
// Draw Nose
	glColor3f(1.0, 0.5 , 0.5);
	glRotatef(0.0,1.0, 0.0, 0.0);
	glutSolidCone(0.08,0.5,10,2);
	glPopMatrix();
}

void Draw36SnowMan(void)
{
    for(int i = -3; i < 3; i++)
        for(int j=-3; j < 3; j++)
        {
            glPushMatrix();
            glTranslatef(i*10.0,0,j * 10.0);
            DrawSnowMan();
            glPopMatrix();
        }
}

void DrawWorld(void)
{
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_QUADS);
        glVertex3f(-100.0, 0.0, -100.0);
        glVertex3f(-100.0, 0.0, 100.0);
        glVertex3f(100.0, 0.0, 100.0);
        glVertex3f(100.0, 0.0, -100.0);
    glEnd();
    Draw_Magic_Ball();
    Draw_Donut();
    Draw36SnowMan();
    Time_Delay(20);
    glutSwapBuffers();
}

void orientMe(float ang)
{
    lx = sin(ang);
    lz = -cos(ang);
    glLoadIdentity();
    gluLookAt(x, y, z, x+lx, y+ly, z+lz, 0.0, 1.0, 0.0);
}

void moveMeFlat(float increment) {
       x = x + lx*increment;
       z = z + lz*increment;
       glLoadIdentity();
       gluLookAt(x, y, z, x + lx,y + ly,z + lz, 0.0,1.0,0.0);
}

void moveMeUp(float increment)
{
    y = y - increment;
    glLoadIdentity();
    gluLookAt(x, y, z, x+lx, y+ly, z+lz, 0.0, 1.0, 0.0);
}

void inputKey(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_LEFT : angle -= angleincrement;orientMe(angle);break;
        case GLUT_KEY_RIGHT : angle +=angleincrement;orientMe(angle);break;
        case GLUT_KEY_UP : moveMeFlat(increment);break;
        case GLUT_KEY_DOWN : moveMeFlat(-increment);break;
        case GLUT_KEY_PAGE_UP: moveMeUp(increment);break;
        case GLUT_KEY_PAGE_DOWN: moveMeUp(-increment);break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,800);
    glutCreateWindow("Problem 5: The snowman world");
    glutSpecialFunc(inputKey);
    glutDisplayFunc(DrawWorld);
    glutIdleFunc(DrawWorld);
    glutReshapeFunc(changeSize);
    glutMainLoop();
    return(0);


}

*/
