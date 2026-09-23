// WAP TO MAKE A SIMPLE CALCULATOR USING SWITCH CASE
#include <stdio.h>
int main() {
    int num1, num2, choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if(num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}