#include <stdio.h>

int main(){
    int ciities,day,time=3,tempMax=0,count=0;
    printf("How many cities of temperature data you want to insert: ");
    scanf("%d",&ciities);
    printf("Days? ");
    scanf("%d",&day);
    float temp[ciities][day][time];
    float maxTemp[ciities];
    for(int i=0;i<ciities;i++){
        printf("\nCity %d:\n",i+1);
        for(int j=0;j<day;j++){
            printf("Day %d:\n",j+1);
            printf("Temperature at Morning: ");
            scanf("%f",&temp[i][j][0]);
            printf("Temperature at Afternoon: ");
            scanf("%f",&temp[i][j][1]);
            printf("Temperature at night: ");
            scanf("%f",&temp[i][j][2]);
        }
    }
    for(int i=0;i<ciities;i++){
        for(int j=0;j<day;j++){
            for(int k=0;k<time;k++){
                if(tempMax<temp[i][j][k]){
                    tempMax=temp[i][j][k];
                }
            }
        }
        maxTemp[i]=tempMax;
        count++;
    }
    for(int i=0;i<count;i++){
        printf("City %d has highest temoerature of %.2f\n",i+1,maxTemp[i]);
    }
    return 0;
}