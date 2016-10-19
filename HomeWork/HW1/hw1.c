#include <stdio.h>
int main(void)
{
    //Declare variables
    int gender;
    int s_chi, s_math, s_eng, s_pac, s_soc, s_all;
    float Average;

    //Receive variables
    printf("Are you a boy or a girl?(1->boy,2->girl)\n");
    scanf("%d", &gender);

    if (gender<2)
    {
        printf("Hey Boy!How was your test?\n");
    } else {
        printf("Hey Girl!How was your test?\n");
    }

    printf("How was your Chinese test?\n");
    scanf("%d", &s_chi);

    printf("How was your Math test?\n");
    scanf("%d", &s_math);

    printf("How was your English test?\n");
    scanf("%d", &s_eng);
    
    printf("How was your Physics and Chemistry test?\n");
    scanf("%d", &s_pac);

    printf("How was your Society test?\n");
    scanf("%d", &s_soc);

    //Calculate all scores
    s_all=s_chi+s_math+s_eng+s_pac+s_soc;

    printf("Those are your test scores:\n");
    printf("Chinese %d\n", s_chi);
    printf("Math %d\n", s_math);
    printf("English %d\n", s_eng);
    printf("Physics and Chemistry %d\n", s_pac);
    printf("Society %d\n", s_soc);
    printf("Total %d\n", s_all);
    printf("Average %f\n", s_all/(float)5);

    //Calculate average
    Average=s_all/(float)5;
    printf("Average %f\n", Average);
 
    //Dispatch school
    if (gender<2)
    {


        if (Average>=90 && Average<=100)
        {
            printf("Congrats!!!KSHS!!!\n");
        }

        if (Average>=88 && Average<=90)
        {
            printf("Congrats!!!KNTNUHS!!!\n");
        }

        if (Average>=85 && Average<=88)
        {
            printf("Congrats!!!FSHS!!!\n");
        }

        if (Average>=83 && Average<=85)
        {
            printf("Congrats!!!FSSH!!!\n");
        }

        if (Average>=80 && Average<=83)
        {
            printf("Congrats!!!RSSH!!!\n");
        }

        if (Average<80)
        {
            printf("Sorry!!!No school\n");

        }

    } else {

        if (Average>=90 && Average<=100)
        {
            printf("Congrats!!!KGHS!!!\n");
        }

        if (Average>=88 && Average<=90)
        {
            printf("Congrats!!!KNTNUHS!!!\n");
        }

        if (Average>=83 && Average<=88)
        {
            printf("Congrats!!!FSHS!!!\n");
        }

        if (Average>=81 && Average<=83)
        {
            printf("Congrats!!!FSSH!!!\n");
        }

        if (Average>=78 && Average<=81)
        {
            printf("Congrats!!!RSSH!!!\n");
        }

        if (Average<78)
        {
            printf("Sorry!!!No school\n");

        }
    
    }


    return 1;
}
