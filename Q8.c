#include <stdio.h>

int main(){
    int building[3][3][3]={
        {{1,2,0},{3,5,3},{9,1,0}},
        {{1,2,3,},{0,9,7},{4,0,8}},
        {{2,5,8},{3,5,0},{3,6,7}}
    },emptyBeds=0,NotEmptyBeds=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=2;k<3;k++){
                if(building[i][j][k]==0){
                    emptyBeds++;
                }else{
                    NotEmptyBeds++;
                }
            }
        }
    }
    printf("There are %d emoty beds and %d occupied Beds.",emptyBeds,NotEmptyBeds);
    return 0;
}