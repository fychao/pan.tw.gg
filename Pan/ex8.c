#include <stdio.h>
main (void)
{
    char char_a='a';
    switch(char_a)
    {
        case'a':
            printf("this is a\n");
            break;
        case'b':
            printf("this is b\n");
            break;
        default: 
            printf("I don't know.\n");
               
    }

    return 1;
}
