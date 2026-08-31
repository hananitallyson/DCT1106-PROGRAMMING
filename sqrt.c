#include <stdio.h>

int main(void) {
    double num, guess, next, err; 
    
    guess = 1.0;
    err = 1.0;
   
    printf("\nEnter a number (e.g. 9): ");
    scanf("%lf", &num);

    while (err > 0.0001) {
        next = 0.5 * (guess + (num / guess));
        err = (guess - next < 0) ? -(guess - next) : (guess - next);
        guess = next;
    }

    printf("(sqrt) %lf\n\n", guess);

    return 0;
}
