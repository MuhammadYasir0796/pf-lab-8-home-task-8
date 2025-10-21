#include <stdio.h>

int main(){
int pixels[3][3][3] = {
        { {0,0,0},   {255,0,0},   {255,255,255} },
        { {0,255,0}, {0,0,255},   {0,0,0}       },
        { {255,255,255}, {0,255,0}, {255,0,0} }   
    };
    int redSum=0,blueSum=0,greenSum=0,sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d ",pixels[i][j][k]);
            }
            printf("\n");
        }
        printf("\t\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<1;k++){
                redSum+=pixels[i][j][k];
                sum+=pixels[i][j][k];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=1;k<2;k++){
                greenSum+=pixels[i][j][k];
                sum+=pixels[i][j][k];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=2;k<3;k++){
                blueSum+=pixels[i][j][k];
                sum+=pixels[i][j][k];
            }
        }
    }
    printf("\nAverage color intensity is %.2f.",(float)sum/27);
    printf("\nAverage red color intensity is %.2f.",(float)redSum/9);
    printf("\nAverage green color intensity is %.2f.",(float)greenSum/9);
    printf("\nAverage blue color intensity is %.2f.",(float)blueSum/9);
    return 0;
}