#include <stdio.h>

int main(){
    int n=10,alpha=65;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        printf(" ");
    }
    for(int j=0;j<=i;j++){
        printf("%c",alpha+j);
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",alpha+j);
    }
    printf("\n");
}   


    return 0;
}