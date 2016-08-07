#include <stdio.h>

int main(void)
{

    for (int idx=1; idx<=5; idx++) 
    // (idx++) == (idx+=1) == (idx = idx+1)
    {
        //printf("idx = %d\n", idx);
        if(idx<3)
        {
            printf("small\n");
        } else {
            printf("large\n");
        }
    }
    return 1;
}
