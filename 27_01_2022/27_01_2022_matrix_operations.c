/*matrix operations*/

#include <stdio.h> 

int main() {
    int arr1[10][10],arr2[10][10],add[10][10],mul[10][10],i=0,j=0,z=0,z1 = 0,row,col,det=0,k=0;
    
    /* enter value of matrix*/
    
    printf("enter the value of row\n");
    scanf("%d",&row);
    
    printf("enter the value of col\n");
    scanf("%d",&col);
    
    /* scaning value of matrix1*/
    
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
          printf("arr1 %d%d: ", i + 1, j + 1);
          scanf("%d", &arr1[i][j]);
        }
    }
    
    /* printing value of matrix1*/
    printf("\n\narray 1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
        printf(" %d ",arr1[i][j]);
            
        }
    printf("\n\n");
    }
    
    /* scaning value of matrix2*/
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
          printf("arr2 %d%d: ", i + 1, j + 1);
          scanf("%d", &arr2[i][j]);
        }
    }
    
    /* printing value of matrix2*/
    printf("\n\narray 2\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
        printf(" %d ",arr2[i][j]);
            
        }
    printf("\n\n");
    }
    
    
    
    /* add start */
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
            add[i][j] = arr1[i][j] + arr2[i][j];
        } 
    }
    printf("\n\naddition\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
        printf(" %d ",add[i][j]);
        }
    printf("\n\n");
    }
    /* add end */
    
    
    
    /* max start */
    z1 = arr1[0][0];
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
            if(z1<arr1[i][j]){
                z1 = arr1[i][j];
            }
        } 
    }
    printf("\nmax of array 1: %d",z1);
    
    z = arr2[0][0];
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
            if(z<arr2[i][j]){
                z = arr2[i][j];
            }
        } 
    }
    printf("\nmax of array 2: %d",z);
    
    if(z1>z){
        printf("\narray 1 element is bigger: %d",z1);
        
    }
    else{
        printf("\narray 2 element is bigger: %d",z);
    }
    /* max end */
    
    
    
    /* multiplication start */
    for (i = 0; i < row; ++i){
        for (j = 0; j < col; ++j) {
            mul[i][j]=0;  
            for (k = 0; k < col; ++k){
                mul[i][j] += arr1[i][k]* arr2[k][j];
                
            }
        } 
    }
    printf("\n\nmultiplication\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
        printf(" %d ",mul[i][j]);
        }
    printf("\n\n");
    }
    /* multiplication end */
    
    
    
    /* determinant satrt */
    det = arr1[0][0]*arr1[1][1] - arr1[1][0]*arr1[0][1];
    printf("\n\nDterminant of 2x2 matrix is :%d", det);    
    /* determinant end */
}