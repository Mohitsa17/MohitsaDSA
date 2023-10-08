//TO PERFORM MULTIPLICATION OPERATION ON MATRIX
#include <stdio.h>

int main() { 
  printf("\033[1;31mThis program is made by MOHITSA\033[0m\n");
  int r1,r2,c1,c2;
  int matA[r1][c1], matB[r2][c2], matR[r1][c2];
  int i,j,k;
   printf("Enter the row and column of first matrix: ");
  scanf("%d %d",&r1,&c1);
  printf("\n");
 printf("Enter elements of the first matrix of order %d x %d \n", r1,c1);
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      scanf("%d",&matA[i][j]);
    }
  }
  printf("\n Enter the row and column of second matrix:");
  scanf("%d %d",&r2,&c2);
  printf("\n");
   printf("Enter elements of the second matrix of order %d x %d \n", r2,c2);
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      scanf("%d",&matB[i][j]);
    }
  }
  printf("print the value of matrix A\n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      printf("%d ", matA[i][j]);
      
    }
    printf("\n");
  }
  printf("print the value of matrix B\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      printf("%d ", matB[i][j]);
      
    }
    printf("\n");
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      matR[i][j]=0;
      for(k=0;k<2;k++)
      {
        matR[i][j]=matR[i][j]+matA[i][k]*matB[k][j];
      }
    }
  }
  printf("\nMatrix multiplication is \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d\t",matR[i][j]);
    }
    printf("\n");
  }
  
  


    return 0;
}