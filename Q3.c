#include <stdio.h>

int main(){
int movements[2][2][2] = {
    {
        {1, -2},
        {3, -4}
    },
    {
        {5, 6},
        {7, -8}
    }
};

    int i,j,k;
    printf("Current reading are: \n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
        	for(k =0;k<2;k++){
            	printf("%d ",movements[i][j][k]);
			}
			 printf("\t");
        }
        printf("\n");
    }
    
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k =0;k<2;k++){
            	if(movements[i][j][k]<0){
            		movements[i][j][k] *= -1;
				}
			}
        }
    }
    printf("\nThe Updated readings are: \n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
        	for(k =0;k<2;k++){
            	printf("%d ",movements[i][j][k]);
			}
			 printf("\t");
        }
        printf("\n");
    }

    return 0;
}
