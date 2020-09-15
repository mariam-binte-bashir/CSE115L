#include <stdio.h>

// Function for the area
double Area(int b1, int b2,
                    int h)
{
    return ((b1 + b2) / 2) * h;
}

// Driver Code
int main()
{
    int base1 = 8, base2 = 10,
                   height = 6;
    double area = Area(base1, base2,
                              height);
    printf("Area is: %.1lf", area);
    return 0;
}
