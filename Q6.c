#include <stdio.h>

int main(){
int dimensions=3;
int matrix[3][3]={
    {1,0,0},
    {0,1,0},
    {0,0,1}
},count=0;
printf("The Matrix: \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            if(matrix[i][j]==1){
                count++;
            }
        }
    }
}
if(dimensions==count){
    printf("The Matrix is a identity matrix. \nThus the students are sitting in correct order.");
}else{
    printf("The Matrix is not a identity matrix. \nThus the students are not sitting in correct order.");
}
    return 0;
}