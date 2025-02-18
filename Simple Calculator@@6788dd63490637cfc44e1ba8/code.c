#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    // Input two numbers and the operator
    scanf("%d %d %c", &num1, &num2, &operator);
    
    // Perform operation based on the operator
    switch(operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error\n");  // More generic error message
            }
            break;
        default:
            printf("Error\n");  // For invalid operator
            break;
    }
    
    return 0;
}
