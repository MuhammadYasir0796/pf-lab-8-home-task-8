#include <stdio.h>

int main(){
    int students[5][5]={
						{10,20,30,40,50},
						{15,25,50,75,100},
						{20,40,60,80,100},
						{10,20,30,40,50},
						{22,11,33,44,55},
	};
	int transPoseS[5][5];
	int i,j;
	
	printf("The students and there scores: \n");
	for(i=0;i<5;i++){
		for(j =0;j<5;j++){
			printf("%d ",students[i][j]);
		}
		printf("\n");
	}

	
	for(i=0;i<5;i++){
		for(j =0;j<5;j++){
			transPoseS[i][j]=students[j][i];
		}
		printf("\n");
	}
	printf("After switching students with there scores, we get: : \n");
	for(i=0;i<5;i++){
		for(j =0;j<5;j++){
			printf("%d ",transPoseS[i][j]);
		}
		printf("\n");
	}

    return 0;
}
