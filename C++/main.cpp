#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>


/*
//problem1
int main()
{
int number;
int i,mn;
char M1[]="Hello, World!\n";
char M2[]="Hello, Class!\n";
char M3[]="Hello!\n";
printf("How many times to print? ");
scanf("%d", &number);
printf("Message->");
scanf("%d", &mn);
printf("\n");
for (i=1;i<=number;i=i+1)
switch(mn)
{
 case 1: printf(M1); break;
 case 2: printf(M2); break;
 default: printf(M3);break;
 }
return 0;}
*/

/*
//problem2
int main()
{
int n1,n2,i;
n1=2;
while (n1%2==0)//remainder
{
printf("enter an odd number n1->");
scanf("%d", &n1);
}
printf("enter n2->");
scanf("%d", &n2);
//for loop
for (i=n1;i<=n2;i+=2)
printf("%d ",i);
printf("\n");
i=n1;//initialization
//while loop
while(i<=n2)
{
printf("%d ",i);
i+=2;
}
printf("\n");
i=n1;//initialization
//do-while loop
do
{
printf("%d ",i);
i+=2;
}
while(i<=n2);
return 0;
}*/

/*
//problem3
int main()
{
int number;
int i,mn;
char M1[]="Hello, World!\n";
char M2[]="Hello, Class!\n";
char M3[]="Hello!\n";
printf("How many times to print? ");
scanf("%d", &number);
printf("Message->");
scanf("%d", &mn);
printf("\n");
i=1;
while(i<=number)
{
    switch(mn)
{
 case 1: printf(M1); break;
 case 2: printf(M2); break;
 default: printf(M3);break;
}
i++;
}
i=1;
do
 {
    switch(mn)
{
 case 1: printf(M1); break;
 case 2: printf(M2); break;
 default: printf(M3);break;
}
i++;
 }

while(i<=number);
       if (number%2==0)
        { printf("............................");}
       else {printf("------------------");}
 }
*/

/*//problem4
double func(double x, int n);
int main()
{double x; int n;
for (n=1;n<=4;n++)
{ printf("n=%3d",n);
for (x=2;x<=5;x+=0.5)
printf("%5.2lf ",func(x,n));
printf("\n");
}
return 0;}
double func(double x, int n)
{ double sum=0; int i;
for (i=0;i<=n;i++)
sum+=sin(x*i)+cos(2*x*i);
return sum;
}*/

//problem5


/*double func(double x, int n);
int main()
{double x;int n;int nmin;int nmax;int xmin;int xmax;int stepx;
printf("nmin-> ");
scanf("%d", &nmin);
printf("nmax-> ");
scanf("%d", &nmax);
printf("xmin-> ");
scanf("%d", &xmin);
printf("xmax-> ");
scanf("%d", &xmax);
printf("step-> ");
scanf("%d", &stepx);

for (n=nmin;n<=nmax;n++)
{ printf("n=%3d",n);
for (x=xmin;x<=xmax;x+=stepx)
printf("%5.2lf ",func(x,n));
printf("\n");
}
return 0;}
double func(double x, int n)
{ double sum=0; int i;
for (i=0;i<=n;i++)
sum+=sin(x*i)+cos(2*x*i);
return sum;
}*/

//problem 6
/*
double f1(double x);
double f2(double x);
double f3(double x);
int main()
{
    double x;
    int n;
    for(n=-1;n<=3;n++){
        printf("n=%3d",n);
        for(x=2;x<=5;x+=0.5){
            switch(n){
        case -1 : printf(" %5.2lf",f3(x));
                    break;
        case 1: printf(" %5.2lf",f2(x));
                break;
        case 0 : printf(" %5.2lf",f1(x));
                break;
        default : printf("-");
    }
        }
        printf("\n");
    }

}
double f1(double x){
    double sum = 0; int i;
    for(i=0;i<=12;i++)
    sum *= sin(x*i);
    return sum;
    }
double f2(double x){
    double sum = 0; int i;
    for(i=0;i<=5;i++)
       sum += sin(x*i)+cos(2*x*i);
    return sum;
    }
double f3(double x){
    double sum = 0;
    sum = sin(pow(x,2))+cos(x)-sqrt(x);
    return sum;

    }*/
/*//problem 7

double f1(double x);
double f2(double x);
double f3(double x);
int main()
{
    double x;
    int n;
    for(n=-1;n<=2;n++){
        printf("n=%3d",n);
        for(x=-1;x<=2;x+=0.5){
            switch(n){
        case -1 : printf(" %5.2lf",f3(x));
                    break;
        case 1: printf(" %5.2lf",f2(x));
                break;
        case 0 : printf(" %5.2lf",f1(x));
                break;
        default : printf("   -  ");
    }
        }
        printf("\n");
    }

}
double f1(double x){
    double sum = 0; int i;
    for(i=0;i<=12;i++)
    sum *= sin(x*i);
    return sum;
    }
double f2(double x){
    double sum = 0; int i;
    for(i=0;i<=5;i++)
       sum += sin(x*i)+cos(2*x*i);
    return sum;
    }
double f3(double x){
    double sum = 0;
    sum = sin(pow(x,2))+cos(x)-sqrt(x);
    return sum;
}*/
/*//problem8

void input(void);
int main()
{int A[]={1,5,7,8}; int i,j,n;
printf("Maximum power of a n->");
scanf("%d",&n);
for (i=0;i<=3;i++)
{
for (j=0;j<=n;j++)
printf("%12lf",pow(A[i],j));
printf("\n");
}
return 0;
}*/

/*//problem9

using namespace std;
void input(void);
int main()
{   int num = 8;
    int n =99;
    while(n>5){
        printf("n ->");
        scanf("%d",&n);
    }
    while(num>6){
        printf("Number of element in the array m -> ");
        scanf("%d",&num);
    }
    int a[num];
    for(int i=0;i<num;i++){
        printf("Enter A[%d] -> ",i);
        scanf("%d",&a[i]);
    }

     for(int i=0;i<num;i++){
        for(int j=0;j<=n;j++)
            printf("%12.2lf",pow(a[i],j));
        printf("\n");
    }


return 0;
}*/

/*
//problem 10

int main()
{   int x;
   double a[2][2];
   for(int i=0;i<2;i++){
    for(int j =0;j<2;j++){
        printf("Enter A[%d][%d] -> ",i,j);
        scanf("%d",&x);
        a[i][j] = x;
    }
   }
    printf("Matrix A \n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%12.2lf",a[i][j]);
        printf("\n");
    }

    printf("Matrix AT \n");
     for(int j=0;j<2;j++){
        for(int i=0;i<2;i++)
            printf("%12.2lf",a[i][j]);
        printf("\n");
    }
}*/

/*//problem 11
int main()
{
    int m=2, n=2, c, d, matrix[2][2], inverse[2][2];
    int divid;
    double det;

    printf("Enter the elements of matrix\n");

    for (c = 0; c < m; c++)
        for(d = 0; d < n; d++)
        {
            printf("Enter A[%d][%d]->",c,d);
            scanf("%d",&matrix[c][d]);
        }

    printf("Matrix A\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
            printf("%d\t",matrix[c][d]);
        printf("\n");
    }

    det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1]*matrix[1][0]);
    printf("det = %lf", det);

    divid = (matrix[0][0] * matrix[1][1]) - (matrix[1][0]*matrix[0][1]);

    inverse[0][0] = matrix[1][1];
    inverse[0][1] = -matrix[1][1];
    inverse[1][0] = -matrix[1][1];
    inverse[1][1] = matrix[0][0];

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
            inverse[c][d] = matrix[c][d];
    }

    if(fabs(divid) <= pow(10,-7))
        {
      printf("\nSingular matrix");
      exit(0);
    }

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
            printf("%d\t",matrix[c][d]);
        printf("\n");
    }

    return 0;*/


//poblem12

/*int negatives(double A[7][7], int m);
int main()
{double A[7][7]; int i,j,n,m,neg;
m=99;
while (m>7)
{printf("size of the matrix mxm->");
scanf("%d",&m);
};
for (i=0;i<=m-1;i++)
for (j=0;j<=m-1;j++)
{
printf("Enter A[%d][%d]->",i,j);
scanf("%lf",&A[i][j]);
};
neg=negatives(A,m);
printf("# of negative elements=%d",neg);
return 0;
}
int negatives(double A[7][7], int m)
{int i,j,neg=0;
for (i=0;i<=m-1;i++)
for (j=0;j<=m-1;j++)
if (A[i][j]<0) neg++;
return neg;
}*/
/*
/* //problem14
double result[7];
void Sum_Vectors(double V1[7] , double V2[7], int m);
void Print_Vector(double V[7], char message[20], int m);
int main()
{double V1[7], V2[7]; int i,j,m;
m=99;
while (m>7)
{printf("size of the vector m->");
scanf("%d",&m);
};
printf("input the first vector V1\n");
for (i=0;i<=m-1;i++)
{printf("input V1[%d]->",i );
scanf("%lf",&V1[i]);}
printf("input the second vector V2\n");
for (i=0;i<=m-1;i++)
{printf("input V2[%d]->",i );
scanf("%lf",&V2[i]);}
Sum_Vectors(V1,V2,m);
Print_Vector(result,"the result\n",m);
return 0;
}
void Sum_Vectors(double V1[7] , double V2[7], int m)
{int i;
for (i=0;i<=m-1;i++)
result[i]=V1[i]+V2[i];
}
void Print_Vector(double V[7], char message[20], int m)
{int i;
printf("%s",message);
for (i=0;i<=m-1;i++)
printf("%lf\n",V[i]);
}
*/
/*//problem14_2
double* Sum_Vectors(double V1[7] , double V2[7], int m);
void Print_Vector(double V[7], char message[20], int m);
int main()
{double V1[7], V2[7]; int i,j,m;
double* result;
m=99;
while (m>7)
{printf("size of the vector m->");
scanf("%d",&m);
};
printf("input the first vector V1\n");
for (i=0;i<=m-1;i++)
{printf("input V1[%d]->",i );
scanf("%lf",&V1[i]);}
printf("input the second vector V2\n");
for (i=0;i<=m-1;i++)
{printf("input V2[%d]->",i );
scanf("%lf",&V2[i]);}
result=Sum_Vectors(V1,V2,m);
Print_Vector(result,"the result\n",m);
return 0;
}
double* Sum_Vectors(double V1[7] , double V2[7], int m)
{int i;
double static result[7];
for (i=0;i<=m-1;i++)
result[i]=V1[i]+V2[i];
return result;
}
void Print_Vector(double V[7], char message[20], int m)
{int i;
printf("%s",message);
for (i=0;i<=m-1;i++)
printf("%lf\n",V[i]);
}
*/
 //problem15
#include <stdio.h>
#include <math.h>
double* Multiply(double A[4][4] , double V[4], int m);
void Input_Vector(double V[4], char message[20],int m);
void Input_Matrix(double A[4][4], char message[20],int m);
void Print_Vector(double V[4], char message[20],int m);
void Print_Matrix(double A[4][4], char message[20],int m);
int main()
{double A[4][4], V[4]; int i,j,m;
double* result;
m=99;
while (m>4)
{printf("size of the matrix and the vector m->");
scanf("%d",&m);
};
Input_Matrix(A,"input A->\n",m);
Print_Matrix(A,"A=\n",m);
Input_Vector(V,"input V->\n",m);
Print_Vector(V,"V=\n",m);
result=Multiply(A,V,m);
Print_Vector(result,"result=\n",m);
return 0;
}
void Input_Vector(double V[4], char message[20],int m)
{
int i;
printf("%s",message);
for (i=0;i<=m-1;i++)
{printf("input V[%d]->",i );
scanf("%lf",&V[i]);}
}
void Input_Matrix(double A[4][4], char message[20],int m)
{
int i,j;
printf("%s",message);
for (i=0;i<=m-1;i++)
for (j=0;j<=m-1;j++)
{printf("input A[%d][%d]->",i,j);
scanf("%lf",&A[i][j]);}
}
void Print_Vector(double V[4], char message[20],int m)
{
int i;
printf("%s",message);
for (i=0;i<=m-1;i++)
printf("%lf\n",V[i]);
}
void Print_Matrix(double A[4][4], char message[20],int m)
{
int i,j;
printf("%s",message);
for (i=0;i<=m-1;i++)
{for (j=0;j<=m-1;j++)
printf("%lf ",A[i][j]);
printf("\n");}
}
double* Multiply(double A[4][4] , double V[4], int m)
{ double static result[4];
int i,j;
for (i=0;i<=m-1;i++)
for (j=0;j<=m-1;j++)
result[i]=result[i]+A[i][j]*V[j];
return result;
}

