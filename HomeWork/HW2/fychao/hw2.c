#include <stdio.h>


int main(void)
{
    char char_a = 'a';
    printf("%c = %d\n", char_a, char_a);
    printf("%c = %d\n", char_a+13, char_a+13);

    char char_A = 'A';
    printf("%c = %d\n", char_A, char_A);
    printf("%c = %d\n", char_A+13, char_A+13);
    return 1;
}
