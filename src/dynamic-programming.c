#include <stdio.h>

#define FIXED_MEMORY 1024

static unsigned long fibonacci(unsigned long n)
{
    size_t i;
    unsigned long sequence[FIXED_MEMORY];

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > 48) return 0;

    sequence[0] = 0;
    sequence[1] = 1;

    i = 2;
    while (i < n)
    {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
        ++i;
    }

    return sequence[i - 1];
}

static unsigned long summation(unsigned long n)
{
    size_t i;
    unsigned long sequence[FIXED_MEMORY];
    unsigned long position;

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > FIXED_MEMORY) return 0;

    sequence[0] = 1;

    i = 1;
    position = 2;
    while (i < n)
    {
        sequence[i] = sequence[i - 1] + position;
        ++i;
        ++position;
    }

    return sequence[i - 1];
}

static unsigned long factorial(unsigned long n)
{
    size_t i;
    unsigned long sequence[FIXED_MEMORY];
    unsigned long position;

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > 12) return 0;

    sequence[0] = 1;

    i = 1;
    position = 2;
    while (i < n)
    {
        sequence[i] = sequence[i - 1] * position;
        ++i;
        ++position;
    }

    return sequence[i - 1];
}

int main(void)
{
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
