// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=N;i<=10;i++){
        printf("%d x %d = %d\n",N, i,N*i);
    }
    return 0;
}

// for (int i = 1; i <= 10; i++) { // Loop from 1 to 10
//         printf("%d x %d = %d\n", N, i, N * i); // Print the multiplication result
//     }
    
