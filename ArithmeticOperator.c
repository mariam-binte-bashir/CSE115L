#include <stdio.h>

int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter first operand: ");
    scanf("%lf", &first);
    printf("Enter second operand: ");
    scanf("%lf", &second);

    switch (operator){

    case '+':
        printf("The result is: %.lf", first + second);
        break;

    case '-':
        printf("The result is: %.lf", first - second);
        break;

    case '*':
        printf("The result is: %.lf", first * second);
        break;

    case '/':
        printf("The result is: %.lf", first / second);
        break;

    default:
        printf("Error! operator is not correct");
    }

    return 0;


}
