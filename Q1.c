#include <stdio.h>

int main(){
    int row1=2,column1=2,row2=2,column2=2;
    int i,j;
    int result[2][2];
    int matrix1[2][2]={
                     {1,2},
                     {3,4}
    };
    int matrix2[2][2]={
                     {5,6},
                     {7,8}
    };
    printf("\nQuarter 1: \n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nQuarter 2: \n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    
    if(row1==row2 && column1==column2){
        printf("\nThese two matrix can be subtracrted and added.\n\nTotal Sales In Half year: \n");
    }else{
        printf("These two matrix can not be subtracrted and added.\n\n");
        return 0;
    }
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
