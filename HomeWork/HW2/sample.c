#include <stdio.h>
int main(void)
{

    char char_a = 'A', char_b = 'a';
    printf("%c=%d, %c=%d\n", char_a, char_a, char_b, char_b);

    // ROT-13
    int idx;
    char char_one;
    for (idx=0; idx<26; idx++)
    {
        char_one = 'a'+idx;
        if( char_one > 'm')
        {
            printf("%c=%d, ", char_one-13, char_one-13);
        } else {
            printf("%c=%d, ", char_one+13, char_one+13);
        }
    }
    return 0;
}
