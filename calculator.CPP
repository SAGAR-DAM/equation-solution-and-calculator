/* SPECIAL CALCULATOR IN C++ */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void add();
void sub();
void mult();
void divition();
void squear();
void cube();
void squearroot();
void nth_root();
void to_the_power();
void sine();
void cosine();
void tangent();
void cosecant();
void secant();
void cotangent();
void log_a();
void log_b();
void matrixproduct();
void addmatrix();
void submatrix();
void transpose();
void exit();
void blank();
void junction();
int function();

//summation......
void add()
		{
 		/**/float a,b,c;/**/
		printf("\n\t a=?	:	");
		scanf("%f",&a);
		printf("\n\t b=?	:	");
		scanf("%f",&b);
		c=a+b;
		printf("\n\t Sum= %f",c);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
		}

//subtraction
void sub()
		{
 		/**/float a,b,c;/**/
		printf("\n\t a=?	:	");
		scanf("%f",&a);
		printf("\n\t b=?	:	");
		scanf("%f",&b);
		c=a-b;
		printf("\n \tSubstraction= %f",c);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
		}

//multiplication
void mult()
		{
 		/**/float a,b,c;/**/
		printf("\n\t a=?	:	");
		scanf("%f",&a);
		printf("\n\t b=?	:	");
		scanf("%f",&b);
		c=a*b;
		printf("\n\t multiplication= %f",c);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
      }

//division
void divition()
      {
 		/**/float a,b,c;/**/
		printf("\n\t a=?	:	");
		scanf("%f",&a);
		printf("\n\t b=?	:	");
		scanf("%f",&b);
		c=a/b;
		printf("\n \tdivition= %f",c);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
      }

//square
void squear()
		{
      float a,b;
      printf("\tEnter A Number:      ");
      scanf("%f",&a);
      b=a*a;
      printf("\tThe Squear:        %f",b);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
      }

//cube
void cube()
		{
      float a,b;
      printf("\tEnter A Number:      ");
      scanf("%f",&a);
      b=a*a*a;
      printf("\tThe cube:        %f",b);
      printf("\n\n\n");
      getch();
      clrscr();
      function();
      }

//to the power
void to_the_power()
		{
      float a,b,n;
      printf("\tEnter A Number:      ");
      scanf("%f",&a);
      printf("\twhat power do you want:    ");
      scanf("%f",&n);
      b=pow(a,n);
      printf("\tThe reasult:        %f",b);
      printf("\n\n\n");
      getch();
      clrscr();
      function();
      }

//square root
void squearroot()
		{
      float a,b;
      printf("\tEnter A Number:      ");
      scanf("%f",&a);
      b=sqrt(a) ;
      printf("\tThe squear root:        %f",b);
      getch();
      printf("\n\n\n");
      clrscr();
      function();
      }

//n'th root
void nth_root()
    {
      float a,b,n,r;
      printf("\tEnter A Number:      ");

      scanf("%f",&a);
      printf ("\twhat root do you want:         ");
      scanf("%f",&n);
      r=1/n;
      b=pow(a,r) ;
      printf("\tThe reasult:        %f",b);
      printf("\n\n\n");
      getch();
      clrscr();
      function();
     }

//sine
void sine()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=sin(b);
   printf("\tthe reasult : sin(%f)=     %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }


//cosine
void cosine()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=cos(b);
   printf("\tthe reasult : cos(%f)=        %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//tangent
void tangent()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=tan(b);
   printf("\tthe reasult : tan(%f)=     %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//cosec
void cosecant()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=1/sin(b);
   printf("\tthe reasult : cosec(%f)=    %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//secant
void secant()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=1/cos(b);
   printf("\tthe reasult : sec(%f)=      %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//cotangent
void cotangent()
	{
   float a,b,c;
   printf("\tENTER THE VALUE OF THE ANGLE IN DEGREE :        ");
   scanf("%f",&a);
   b=(3.141592654*a)/180;
   c=1/tan(b);
   printf("\tthe reasult : cot(%f)=     %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//ln
void log_a()
	{
   float a,c;
   printf("\tENTER THE NUMBER :        ");
   scanf("%f",&a);

   c=log(a);
   printf("\tthe reasult : ln(%f)=     %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//log
void log_b()
	{
   float a,c;
   printf("\tENTER THE NUMBER :        ");
   scanf("%f",&a);

   c=log(a)/log(10);
   printf("\tthe reasult : log(%f)=      %f",a,c);
   getch();
   printf("\n\n\n");
   clrscr();
   function();
   }

//function
int function()
	{
  int k;
      printf("\n\t\t\t##############################################");
  		printf("\n\n\t\t\t!@# \tWELCOME TO SAGAR'S CALCULATOR \t #@! \n\n\t\t\t##############################################\n\n\tPRESS 1 FOR ADD        \n\tPRESS 2 FOR SUBSTRACTION\n");
   	printf("\tPRESS 3 FOR MULTIPLICATION \n\tPRESS 4 FOR DIVITION\n\tPRESS 5 FOR SQUEAR \n\tPRESS 6 FOR CUBE\n\tPRESS 7 FOR SQUARE ROOT\n\tPRESS 8 FOR nth ROOT \n\tPRESS 9 FOR TO THE POWER SOMETHING OF A NUMBER \n\tPRESS 10 FOR THE FUNCTION sin(a)\n\tPRESS 11 FOR THE FUNCTION cos(a)\n\tPRESS 12 FOR THE FUNCTION tan(a)\n\tPRESS 13 FOR THE FUNCTION cosec(a)\n\tPRESS 14 FOR THE FUNCTION sec(a)\n\tPRESS 15 FOR THE FUNCTION cot(a)\n\tPRESS 16 FOR THE VALUE OF LOGARITHM OF A NUMBER WITH RESPECT TO BASE e\n\tPRESS 17 FOR THE VALUE OF LOGARITHM OF A NUMBER WITH RESPECT TO BASE 10\n\tPRESS 18 FOR MATRIX OPERATIONS\n\tPRESS 0 FOR OFF");
      /********!!!!!!!!!$$$$$$$$$$$$*//*@@@@@@@@@@############^^^^^^^^^??????*/
   	printf("\n\n\tENTER YOUR CHOICE NUMBER:     ");
   	/**//**//**/scanf("%d",&k);/**//**//**/
      printf("\n\n");
   switch(k)
    {

   	case 1:
      {
      add();
      }
      break;
      case 2:
      {
      sub();
      }
      break;
      case 3:
      {
      mult();
      }
      break;
      case 4:
      {
      divition();
      }
      break;
      case 5:
      {
      squear();
      }
      break;
      case 6:
      {
      cube();
      }
      break;
      case 7:
      {
      squearroot();
      }
      break;
      case 8:
      {
      nth_root();
      }
      break;
      case 9:
      {
      to_the_power();
      }
      break;
      case 10:
      {
      sine();
      }
      break;
      case 11:
      {
      cosine();
      }
      break;
      case 12:
      {
      tangent();
      }
      break;
      case 13:
      {
      cosecant();
      }
      break;
      case 14:
      {
      secant();
      }
      break;
      case 15:
      {
      cotangent();
      }
      break;
      case 16:
      {
      log_a();
      }
      break;
      case 17:
      {
      log_b();
      }
      break ;
      case 18:
      {
      junction();
      }
      break ;
      case 0:
      {
      break ;
      }
      default :
      clrscr();
      printf("\n\nERROR OCCURE !!!!!!!!!! \nYou have entered an invalid Option. Please Try Again\n");
      function();

   }
   return 0;
  }
void main()
{

   function();

}





//matrix
void junction()
{
	int k;
	//printf("THIS IS A MATRIX OPERATION PROGRAMME");
   printf("\n\nPress\n\n1: For Multiplication Of Two Matrices\n\n2: For Addition Of Two Matrices\n\n3: For Subtraction Of Two Matrices\n\n4: For transpose Of A Matrix\n\n0: For Exit");
   printf("\n\nenter The choice:   ");
   scanf("%d",&k);
   switch(k)
    {

   	case 1:
      {
      matrixproduct();
      } break;

      case 2:
      {
      addmatrix();
      }
      break;
      case 3:
      {
      submatrix();
      }
      break;
      case 4:
      {
      transpose();
      }
      break;
      case 0:
      {
      exit();
      }
      break;
      default:
      {
      printf("Error occur !!!!!!!!!!!!!!");
      getch();
      clrscr();
      function();
      }
    }
}



//matrixproduct
void matrixproduct()
{
	int i,j,k,x,y,m,n;
   float temp=0;
   float a[10][10],b[10][10],c[10][10];
   printf("\nenter the row and coloumn no for first matrix:     ");
   scanf("%d%d",&m,&n);
   printf("\nenter the row and coloumn no for second matrix:     ");
   scanf("%d%d",&x,&y);
   if(n!=x )
   {
   printf("\nthe Row no of the Second matrix  must be equal to the coloumn no of the first matrix");
   printf("\n\nRow No of the 2nd Matrix is Overrided.... ");
   x=n;
   }
   printf("\nFirst Matrix: %d X %d",m,n);
   printf("\nSecond Matrix: %d X %d",x,y);

   printf("\n\nInsert Value for First Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Matrix A[%d][%d]: ",i+1,j+1);
      	scanf("%f",&a[i][j]);
      }
   }
   printf("\n\nInsert Value for Second Matrix: \n");
   for(i=0;i<x;i++)
   {
   	for(j=0;j<y;j++)
      {
         printf("\nVal at: Matrix B[%d][%d]: ",i+1,j+1);
      	scanf("%f",&b[i][j]);
      }
   }

  for(i=0;i<m;i++)
  {
  		for(j=0;j<y;j++)
      {
         for(k=0;k<n;k++)
      	{
          temp=temp+a[i][k]*b[k][j];
         }
      	c[i][j]=temp;
         temp=0;
      }
  }
   printf("\nGiven First Matrix: [A][%dX%d] :\n", m,n);

   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%f\t",a[i][j]);
      }
      printf("\n");
   }

   printf("\nGiven second Matrix: [B][%dX%d] :\n", x,y);

   for(i=0;i<x;i++)
   {
   	for(j=0;j<y;j++)
      {
      	printf("%f\t",b[i][j]);
      }
      printf("\n");
   }


   printf("\n\nREASULT:\nThe Multiplied Matrix: [C][%dX%d] = [A]X[B]\n\n",m,y);

  for(i=0;i<m;i++)
   {
   	for(j=0;j<y;j++)
      {
      	printf("%f\t",c[i][j]);
      }
      printf("\n");
   }

   getch();
   clrscr();
   function();

}


//addmatrix
void addmatrix()
{
 	int i,j,m,n;
   int a[20][20],b[20][20];
   printf("\n\nEnter the row and coloumn no of the two matrices:     ");
   scanf("%d%d",&m,&n);
   printf("\n\nInsert Value for First Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Matrix A[%d][%d]: ",i+1,j+1);
      	scanf("%d",&a[i][j]);
      }
   }
   printf("\n\nInsert Value for second Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Matrix B[%d][%d]: ",i+1,j+1);
      	scanf("%d",&b[i][j]);
      }
   }

   printf("\nGiven First Matrix: [A][%dX%d] :\n", m,n);

   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",a[i][j]);
      }
      printf("\n");
   }

   printf("\nGiven second Matrix: [B][%dX%d] :\n", m,n);

   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",b[i][j]);
      }
      printf("\n");
   }

   printf("\nTHE ADDED MATRIX: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",a[i][j]+b[i][j]);
      }
      printf("\n");
   }
   getch();
   clrscr();
   function();

}

//subtract matrix
void submatrix()
{
 	int i,j,m,n;
   int a[20][20],b[20][20];
   printf("\n\nEnter the row and coloumn no of the two matrices:     ");
   scanf("%d%d",&m,&n);
   printf("\n\nInsert Value for First Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Matrix A[%d][%d]: ",i+1,j+1);
      	scanf("%d",&a[i][j]);
      }
   }

   printf("\n\nInsert Value for second Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Matrix B[%d][%d]: ",i+1,j+1);
      	scanf("%d",&b[i][j]);
      }
   }

   printf("\nGiven First Matrix: [A][%dX%d] :\n", m,n);

   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",a[i][j]);
      }
      printf("\n");
   }

   printf("\nGiven second Matrix: [B][%dX%d] :\n", m,n);

   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",b[i][j]);
      }
      printf("\n");
   }

   printf("\nTHE SUBTRACTED MATRIX: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
      	printf("%5d\t",a[i][j]-b[i][j]);
      }
      printf("\n");
   }
   getch();
   clrscr();
   function();

}


//matrix_transpose
void transpose()
{
  	int i,j,m,n;
   int a[20][20];
   printf("\nEnter the row and coloumn no of the matrix:     ");
   scanf("%d%d",&m,&n);
   printf("\n\nInsert Value for Matrix: \n");
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\nVal at: Input Matrix [%d][%d]: ",i+1,j+1);
      	scanf("%d",&a[i][j]);
      }
   }
   printf("\nTHE GIVEN MATRIX:\n") ;
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
      {
         printf("\t%d",a[i][j]);
      }
      printf("\n");
   }

   printf("\nTHE TRANSPOSED MATRIX:\n") ;
   for(i=0;i<n;i++)
   {
   	for(j=0;j<m;j++)
      {
         printf("\t%d",a[j][i]);
      }
      printf("\n");
   }
   getch();
   clrscr();
   function();
}

//clear screen
void exit()
{
	clrscr();
   function();
}

