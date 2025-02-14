// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    if(x==1 || x==2 || x==3 || x==5 || x==7 || x==11 || x==13){
        printf("Prime");
    }
    else if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0 || x % 11 == 0 ||x % 13 == 0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0; 
} 