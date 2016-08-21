#include <stdio.h>
int main(void)
{
    int idx;
    for(idx=2;idx<10;idx = idx + 2)
    {
        printf("idx=%d\n", idx);
    }


    // idx = idx + 1 (equals to)
    // idx += 1 (equals to)
    // idx ++
    idx = 1;
    printf("idx = %d\n", idx);

    idx = idx + 1;
    printf("idx = %d\n", idx);

    idx += 1;
    printf("idx = %d\n", idx);

    idx ++;
    printf("idx = %d\n", idx);

    return 1;
}
