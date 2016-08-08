#include <stdio.h>

int main(void)
{

    int score_all = 0;
    int score_math = 90;
    int score_english = 81;
    float score_average = 0.0;
    score_all = score_math + score_english;
    score_average = (score_all) / (float)2;
    printf("test socre:%d, average:%.2f \n", score_all, score_average );

    return 1;
}
