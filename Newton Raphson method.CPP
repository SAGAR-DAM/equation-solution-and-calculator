#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x);
float g(float x);

void main()
{
	int i,j,n;
   float x,y;
   printf("Enter the seed value of the function:  ");
   scanf("%f",&x);
   printf("\nEnter the no of iterations:  ");
   scanf("%d",&n);

   if(f(x)==0)
   {
   printf("\nThe root is:  %.16f",x);
   }
   else
   {
   for(i=1;i<=n; i++)
   {
       x=x-f(x)/g(x);
	}
   printf("\nThe root is:  %.16f",x);
   printf("\nwith an error  ~f(x)= %.16f instead of 0.0",f(x));
   }

	getch();
}

float f(float x)
{
	float y;
   y=sin(x);
   return(y);
}

float g(float x)
{
	float y;
   y=cos(x);
   return(y);
}