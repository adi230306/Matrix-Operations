#include<stdio.h>

int main(int argc,char *argv[]){
  int rows,columns;
  printf("Enter the number of rows in the matrix: ");
  scanf("%d" ,&rows);
  printf("Enter the number of columns: ");
  scanf("%d" ,&columns);
  int arr[rows][columns];
  printf("Enter the matrix: \n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
    printf("Enter element [%d][%d]" ,i+1,j+1);
    scanf(" %d" ,&arr[i][j]);
  }
}
int arr2[rows][columns];
 for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
       arr2[i][j]=arr[j][i];
    }
 }
 printf("The transpose matrix is: \n");
 for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
       printf("%d " ,arr2[i][j]);
    }
    printf("\n");
 }
  return 0;
}