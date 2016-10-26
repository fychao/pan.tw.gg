#include <stdio.h>
int main(void)
{
    int a;
    printf("輸入周長\n");
    while ( scanf("%d", &a)!=EOF)
    {
        //算幾
        printf("%d\n", (a/2)*(a/2)/4);
    }
    return 0;
}
