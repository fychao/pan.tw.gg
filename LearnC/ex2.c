#include <stdio.h>
int main(void)
{

    int age;

    printf("How old are you?\n");
    scanf("%d", &age); //<--- JUST Remember!!!

    if (age>7)
    {
        printf("you are high school student!\n");
    } else {
        printf("you are elementry sudent!\n");
    }

    return 1;
}
