#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double num1, num2;
    
    // Read input
    scanf("%c %lf %lf", &operator, &num1, &num2);
    
    switch (operator) {
        case '+':
            printf("%.2lf\n", num1 + num2);
            break;
        case '-':
            printf("%.2lf\n", num1 - num2);
            break;
        case '*':
            printf("%.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0.0)
                printf("%.2lf\n", num1 / num2);
            else
                printf("Error\n");
            break;
        default:
            printf("Eror\n");
            break;
    }
    
    return 0;
}
