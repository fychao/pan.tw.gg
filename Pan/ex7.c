#include <stdio.h>
int main(void)
{

    char aChar='a';
    printf("aChar=%c\n", aChar);

    char aString[5] = {'a','b','c','d','e'};

    int idx;

    for(idx=0;idx<5;idx++)
    {
        printf("sString[%d]=%c\n", idx, aString[idx]);
    }

    char bString[7]={'A','u','g','u','s','t','\0'};
    printf("bString=%s\n", bString);

    char name[8];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hi %s!Nice to meet you^^\n", name);

    idx=0;
    printf("Nice to meet you");
    while(name[idx] !='\0')
    {
        printf("%c",name[idx++]);
    }
    printf("\n");

    return 1;
}
