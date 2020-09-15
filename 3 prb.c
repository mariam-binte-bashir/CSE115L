#include <stdio.h>
float average(int num1, int num2); /* declaring function named average */


int main()
{
    int num1, num2;
    float c;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    c = average( num1, num2 ); /* calling the function average and storing its value in c*/
    printf("Average is %.2f\n", c);
    return 0;
}


float average( int num1, int num2 ) /* function */
{
    float avg; /* declaring local variable */
    avg = (num1 + num2)/2.0;
    return avg; /* returning the average value */
}
