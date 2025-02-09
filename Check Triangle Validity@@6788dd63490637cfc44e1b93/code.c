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
        printf("The sides %.2f, %.2f, and %.2f form a valid triangle.\n", a, b, c);
    } else {
        printf("The sides %.2f, %.2f, and %.2f do not form a valid triangle.\n", a, b, c);
    }

    return 0;
}
