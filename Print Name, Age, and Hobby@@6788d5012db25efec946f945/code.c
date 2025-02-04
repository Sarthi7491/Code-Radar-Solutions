#include <stdio.h>
int main(){
    char name[100];
    scanf("%99s",name);
    printf("Name: %s",name);

    int age;
    scanf("%d",&age);
    printf("\nAge: %d",age);

    char hobby[100];
    scanf("%99s",hobby);
    printf("\nHobby: %s",hobby);
    return 0; 
} 