#include "taylor_sine.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    double x;
    int n;

    x = 3.1415;
    n = 12;
    printf("\nsin(%f) = %f \n", x, sin(x));
    printf("my function with %d precision: %f \n\n", n, taylor_sine(x, n));

    x = 1.57075;
    n = 10;
    printf("\nsin(%f) = %f \n", x, sin(x));
    printf("my function with %d precision: %f \n\n", n, taylor_sine(x, n));

    x = 0;
    n = 1;
    printf("\nsin(%f) = %f \n", x, sin(x));
    printf("my function with %d precision: %f \n\n", n, taylor_sine(x, n));

    x = 21;
    n = 40;
    printf("\nsin(%f) = %f \n", x, sin(x));
    printf("my function with %d precision: %f \n\n", n, taylor_sine(x, n));

    x = 32;
    n = 99;
    printf("\nsin(%f) = %f \n", x, sin(x));
    printf("my function with %d precision: %f \n\n", n, taylor_sine(x, n));

    return 0;
}



