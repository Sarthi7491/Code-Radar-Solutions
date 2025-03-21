// // Your code here...
// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);

//     int sum = 0;
//     for(int i=1;i<=N;i++){
//        sum+=i;
//        printf("%d\n",sum);
//     }
//     return 0; 
// }
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
          // Added space for readability
    }
    printf("%d ", sum);

    return 0;
}
