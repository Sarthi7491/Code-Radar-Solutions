// #include <stdio.h>
// int main(){
//    int x,y,z;
//    scanf("%d%d%d",&x, &y, &z);

//     if 
// }

#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n", a, b, c);
    } else {
        printf("Invalid\n", a, b, c);
    }

    return 0;
}
