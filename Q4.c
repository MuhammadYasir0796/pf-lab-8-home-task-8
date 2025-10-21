#include <stdio.h>

int main(){
    int rows, columns,zeros=0,nonZeros=0;
    printf("Enter dimesnions of matrix by (m,n): ");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=00;j<columns;j++){
            printf("Enter element %d,%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=00;j<columns;j++){
            if(matrix[i][j]==0){
                zeros++;
            }else{
                nonZeros++;
            }
        }
    }
    if(zeros>nonZeros){
        printf("The matrix is a sparse matrix.");
    }else{
        printf("The matrix is not a sparse matrix.");
    }
    return 0;
}