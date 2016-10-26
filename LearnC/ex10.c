#include <stdio.h>

/*
 * Fibonacci Serious
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n-1) + F(n-2) n >= 2
 // fibonacci(input_a) = fibonacci(input_a-1) + fibonacci(input_a-2)
 // return fibonacci(input_a-1) + fibonacci(input_a-2)
 */

int fibonacci(int a_int);

int main(void)
{
    int input_a, returned_int;

    for( input_a=30 ; input_a<=35 ; input_a++ )
    {
        returned_int = fibonacci(input_a);
        printf("fibonacci(%d) = %d\n", input_a, returned_int);
    }

    return 1;
}

int fibonacci(int a_int)
{
    if( a_int == 0 )
    {
        return 0;
    }
    else if( a_int == 1)
    {
        return 1;
    }
    else if ( a_int >=2 )
    {
        return fibonacci(a_int-1) + fibonacci(a_int-2);
    }
    return 10;
}
