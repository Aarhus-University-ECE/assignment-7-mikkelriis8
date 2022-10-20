#include "taylor_sine.h"

double factorial(int a) {
    double fact = 1;
    for(int i = 0; i < a; i++) {
        fact = fact * (i + 1);
    }
    return fact;
}

double power(double a, int b) {
    double pow = a;
    for(int i = 1; i < b; i++) {
        pow = pow * a;
    }
    return pow;
}

double taylor_sine(double x, int n)
{
    double finalSine = x;
    int pow = 1;
    int currentn = 2;

    assert(0 < n);

    for(int i = 0; i < n; i++) {
        pow += 2;
        if(n == 1) {
            return x;
        } else {
            if(currentn % 2 == 0) {
                finalSine = finalSine - power(x,pow)/factorial(pow);
            } else {
                finalSine = finalSine + power(x,pow)/factorial(pow);
            }
        }
        currentn++;
    }
    return finalSine;
}


