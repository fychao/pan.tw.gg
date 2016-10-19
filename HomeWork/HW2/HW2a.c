#include <stdio.h>
int main(void)
{
    char name[8];
    int con = 1;
    while(con ==1)
    {
        int idx=0;
        printf("Input your name:");
        scanf(" %s", name);
        printf("your name:%s\n", name);
        printf("your en/decode name:"); 
        while (name[idx] !='\0')
        {
            if(name[idx]>='A'&& name[idx] <='Z') 
            {
                if(name[idx]<'N')
                {
                    printf("%c", name[idx]+13);
                }
                else
                {
                    printf("%c", name[idx]-13);
                }
            }
            else
            {
                if(name[idx]<'n')
                {
                    printf("%c", name[idx]+13);
                }    
                else
                {
                    printf("%c", name[idx]-13);
                }
            }
            idx ++;
        }
        printf("\n");
        printf("Continue?(1 for contine,2 for end)\n");
        scanf(" %d", &con);
    }
    return 0;
}
