// Your code here...
#include<stdio.h>
int main(){
    int sp, cp;
    scanf("%d %d",&cp, &sp);

    if(cp < sp){
        printf("Profit");
    }
    else if(cp == sp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }

    return 0;
} 