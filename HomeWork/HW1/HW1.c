#include <stdio.h>
int main(void)
{

    int sexuality;
        int score_Math;
        int score_English;
        int score_Society;
        int score_Physics and Chemistry;
        int score_all;

    printf("Are you a boy or a girl?(1 for boy; 2 for girl)\n");
    scanf("%d", &sexuality); 

    if (sexuality=1)
    {
        printf("Hey boy!How was your test?(Enter your Test scores)\n");
                
                printf("Chinese Score\n");
                scanf("%d", &score_Chinese); 
                
                printf("Math Score\n");
                scanf("%d", &score_Math);
                
                printf("English Score\n");
                scanf("%d", &score_English);
                
                printf("Society Score\n");
                scanf("%d", &score_Society);
                
                printf("Physics and Chemistry Score\n");
                scanf("%d", &score_Physics and Chemistry);
                
                int score_all;
                int score_Chinese;
                int score_Math;
                int score_English;
                int score_Society;
                int score_Physics and Chemistry;
                float score_average = 0.0;
                score_all = score_Chinese + score_Math+ score_English + score_Society + score_Physics and Chemistry ;
                score_average = (score_all) / (float)2;
                printf("test socre:%d, average:%.2f \n", score_all, score_average );

                if (score_average>=90)
                printf("Congratulation! KSHS! \n");

                if (score_average>=88<90)
                printf("Congratulation! KNTNUHS! \n");

                if (score_average>=85<88)
                printf("Congratulation! FSHS! \n");

                if (score_average>=83<85)
                printf("Congratulation! KSSH! \n");

                if (score_average>=80<83)
                printf("Congratulation! RSSH! \n");

                if (score_average<80)
                printf("Sorry! No school for you. \n");
                
    } else {
        printf("Hey girl!How was your test?(Enter your Test scores)\n");
                
                printf("Chinese Score\n");
                scanf("%d", &score_Chinese); 
                
                printf("Math Score\n");
                scanf("%d", &score_Math);
                
                printf("English Score\n");
                scanf("%d", &score_English);
                
                printf("Society Score\n");
                scanf("%d", &score_Society);
                
                printf("Physics and Chemistry Score\n");
                scanf("%d", &score_Physics and Chemistry);
                
                int score_all;
                int score_Chinese;
                int score_Math;
                int score_English;
                int score_Society;
                int score_Physics and Chemistry;
                float score_average = 0.0;
                score_all = score_Chinese + score_Math+ score_English + score_Society + score_Physics and Chemistry ;
                score_average = (score_all) / (float)2;
                printf("test socre:%d, average:%.2f \n", score_all, score_average );
    }

    return 1;
}
