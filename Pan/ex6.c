#include <stdio.h>
int main(void)
{
    int anArray[5];
    int idx; 
    int pnt;
    for(idx=2;idx<=10;idx=idx+2)
    {
        printf("idx=%d\n", idx);
        anArray[pnt] = idx;
        pnt ++;
    }
    for(pnt=0;pnt<5;pnt++)
    {
        printf("anArray[%d]=%d\n", pnt, anArray[pnt]);
    }
    return 1;
}
