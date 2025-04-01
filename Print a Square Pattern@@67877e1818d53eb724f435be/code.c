// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        printf("* ");
        for(int j=i;j<=i;j++){
            printf("*\n ");
        }
    }
    return 0; 
}