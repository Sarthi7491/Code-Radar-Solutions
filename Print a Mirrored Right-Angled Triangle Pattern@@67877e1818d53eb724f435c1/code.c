// // Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);

//     for(int i=1;i<=N;i++){
       
//         for(int j=1;j<=i;j++){
//             printf("*\n");
//         }

//         printf("\n");
//     }
//     return 0; 
// }
#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
