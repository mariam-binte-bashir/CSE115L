#include <stdio.h>

int main() {
    int counter;
    printf("Even numbers between 1 to 100\n");

    for(counter = 1; counter <= 100; counter++) {
        /* Even numbers are divisible by 2 */
        if(counter%2 == 0) {
            /* counter is even, print it */
            printf("%d ", counter);
        }
    }

    return 0;
}

