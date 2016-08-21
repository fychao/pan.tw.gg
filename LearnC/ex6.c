#include <stdio.h>
int main(void)
{
    int anArray[5];
    int idx;
    int pnt;

    // 給數值
    for(idx=2, pnt=0;idx<=10;idx+=2, pnt++)
    {
        printf("idx=%d\n", idx);
        anArray[pnt] = idx;
    }

    // 走訪所有元素
    for(pnt=0;pnt<5;pnt++)
    {
        printf("anArray[%d]=%d\n", pnt, anArray[pnt]);
    }

    return 1;
}
