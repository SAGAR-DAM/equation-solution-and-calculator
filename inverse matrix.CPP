#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//#######################################    Entering a matrix.........
void main()
{
	float a[20][20], I[20][20];
   int p,q,i,j,m,x,y;
   float temp;
   printf("\n\t\t\tTHIS IS A MATRIX INVERSE PROGRAMME........");
   printf("\n\n\t\t\tENTER THE ORDER OF THE MATRIX:     ");
   scanf("%d",&m);
   printf("\n\n\t\t\tINSERT VALUES IN MATRIX: \n");
   for(i=0; i<m; i++)
   {
   	for(j=0; j<m; j++)
      {
      	printf("\t\t\tENTER VALUES IN POSITION  M[%d][%d]: \t ",i+1,j+1);
         scanf("%f",&a[i+1][j+1]);
         printf("\n");
      }
   }

//#########################################     Showing the martix.......

	printf("\n\t\t\tYOUR GIVEN MATRIX IS:   \n\t\t\t");
   for(i=0; i<m; i++)
   {
   	for(j=0; j<m; j++)
      {
      	printf("%f \t",a[i+1][j+1]);

      }
      printf("\n\t\t\t");
   }
//##########################################     Creating an unit matrix......
   for(i=1; i<m+1; i++)
   {
   	for(j=1; j<m+1; j++)
      {
      	if(i==j)
         {
           	I[i][j]=1;
         }
         else
         {
         	I[i][j]=0;
         }
      }
   }

//###########################################    Making the echelon matrix......

   for(p=1;p<=m+1; p++)
   {

      for(i=1; i<=m-p+1; i++)
      {
        	temp=a[i+p][p];
      for(j=1; j<m+1; j++)
      {
         a[i+p][j]= a[i+p][j]-temp*a[p][j]/a[p][p];
         I[i+p][j]= I[i+p][j]-temp*I[p][j]/a[p][p];
      }
      }

      temp=0;
   }

   for(i=1; i<m+1; i++)
   {
   	temp=a[i][i];
   	for(j=1; j<m+1; j++)
      {
      	a[i][j]=a[i][j]/temp;
         I[i][j]=I[i][j]/temp;
      }
   }
//#######################################    making the inverse martix......

   temp=0;
   for(y=1; y<m; y++)
   {
   	for(i=1; i<=m-y; i++)
      {

      	for(j=1; j<m+1; j++)
         {
         	if(a[i][m-y+1]!=0)
            {
         	temp=a[i][m-y+1];
         	a[i][j]=a[i][j]- temp*a[m-y+1][j];
            I[i][j]=I[i][j]- temp*I[m-y+1][j];
            }
         }
      }
   }

//##########################################    showing the inverse matrix......
   printf("\n\n\t\t\tTHE INVERTED MARTIX IS:\n\t\t\tINV(M)= \n\n\t\t\t");
  	for(i=0; i<m; i++)
   {
   	for(j=0; j<m; j++)
      {
      	printf("%2f \t",I[i+1][j+1]);

      }
      printf("\n\t\t\t");
   }


   getch();
}