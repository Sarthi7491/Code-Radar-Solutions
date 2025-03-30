// // Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);

//     for(int i=1;i<=N;i++){
//         for(int j = 1; j <= i; j++){
//         printf("*\n");
//         }
//     }
//     return 0;
// } 

#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = 1; i <= N; i++) { // Outer loop controls rows
        for (int j = 1; j <= i; j++) { // Inner loop controls stars in each row
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}
