// Your code here...
#include<stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d",&x, &y, &z);

    if(x==y && y==z && z==x){
        printf("Equilateral");
    }
    return 0; 
} 