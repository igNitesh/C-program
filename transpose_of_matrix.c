#include <stdio.h>

int main()

{

  int matrix[3][3],matrix2[3][3];

 for(int i=0;i<3;i++)

 {

 for(int j=0;j<3;j++)

 {

 printf("enter the element%d%d ",i,j);

 scanf("%d",&matrix[i][j]);

 }

 }

 for(int i=0;i<3;i++)

 {

 for(int j=0;j<3;j++)

 {

 printf("%d ",matrix[i][j]);

 }

 printf("\n");

 }

 printf("transpose of matrix each\n\n");

 for(int i=0;i<3;i++)

 {

 for(int j=0;j<3;j++)
 {

 printf("%d ",matrix[j][i]);

 }

 printf("\n");

 }

 return 0;

}
