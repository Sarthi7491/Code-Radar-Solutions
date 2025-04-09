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
    int i, j, space, rows;

    // Ask user for number of rows
    
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Print spaces first
        for (space = 1; space <= (rows - i); space++) {
            printf("  ");  // Two spaces for better alignment
        }

        // Then print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
