#include <stdio.h>

int main(void)
{

    char aChar = 'a';
    printf("aChar=%c \n", aChar);

    // initial all element as 'a', 'b', 'c', 'd', 'e'
    char aString[5] = {'a', 'b', 'c', 'd', 'e'}; 
    int idx;
    // 走訪練習
    for(idx=0; idx<5; idx++)
    {
        printf("aString[%d]=%c \n", idx, aString[idx]);
    }
    
    // 空字符 '\0'
    char bString[5] = {'a', 'b', 'c', 'd', '\0'}; 
    printf("aString=%s\n", bString);

    // 取得名字
    char name[8];
    printf("input your name: ");
    scanf("%s", name); // <-- NO &
    printf("your name: %s\n", name);

    // 走訪練習 (不好的!)
    for(idx=0; idx<8; idx++)
    {
        printf("name[%d]=%c \n", idx, name[idx]);
    }


    // 很廢!!
    char name_char;
    idx = 0;
    name_char = name[idx];
    while( name_char != '\0')
    {
        printf("name_char: %c\n", name_char);
        idx ++;
        name_char = name[idx];
    }

    // 改版
    idx = 0;
    printf("your name: ");
    while(name[idx] != '\0')
    {
        printf("%c", name[idx++]);
    }
    printf("\n");
    

    // 作業2
    char char_a = 'A', char_b = 'b';
    printf("a=%c, b=%c, a-b=%d, ROT-13(a)=%c", char_a, char_b, char_a-char_b, (char_a+13));
    return 1;
}















