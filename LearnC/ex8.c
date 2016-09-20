#include <stdio.h>

int main(void)
{
    int int_a = 1;
    switch (int_a)
    {
        case 1:
            printf("this is 1\n");
            break;
        case 2:
            printf("this is 2\n");
            break;
        default: 
            printf("I don't know.\n");
    }
    return 1;
}
