#include <stdio.h>

static unsigned long fibonacci(unsigned long n) {
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

static unsigned long summation(unsigned long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return summation(n - 1) + n;
}

static unsigned long factorial(unsigned long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return factorial(n - 1) * n;
}

int main(void) {
    unsigned long fib;
    unsigned long sum;
    unsigned long fac;

    fib = fibonacci(47);
    printf("%lu\n", fib);

    sum = summation(1024);
    printf("%lu\n", sum);

    fac = factorial(12);
    printf("%lu\n", fac);

    return 0;
}
