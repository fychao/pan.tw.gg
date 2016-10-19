#include <stdio.h>
int main(void)
{
    int name,yn;
    printf("Hi!Welcome to ROT-13 en/decoder!Continue?\n");
    scanf("%c\n",yn);
    while (yn==Y)
    {
        int mode;
        printf("What mode do you want to choose?(1 for encode,2 for decode\n");
        if (mode=1)
        {
            char aString[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'},words;
            printf("You can type any words and it will encode for you:D\n");
            char words[20];
            scanf("%s",words);
            char char_a='a', char_b='b',char_c='c'

        } else {
            printf("You can tpye any code and it will decode for you:D\n");


        }


    }
    
    return 0;
}
