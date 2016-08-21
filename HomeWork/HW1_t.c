#include <stdio.h>

int main(void)
{
    // 變數宣告區
    int gender;
    int s_chi, s_eng, s_soc, s_phy, s_all;
    float average;

    //---- 一行註解 --------
    /* 
     * 多行 註解
     */


    // 接收變數區
    printf("your gender?");
    scanf("%d", &gender);

    printf("your Chinese socre?");
    scanf("%d", &s_chi);

    printf("your English socre?");
    scanf("%d", &s_eng);

    printf("gender => %d\n", gender);
    printf("chi => %d\n", s_chi);
    printf("eng => %d\n", s_eng);

    // 計算全部分數區
    s_all = s_chi + s_eng; 
    printf("s_all => %d\n", s_all);

    printf("average => %f\n", s_all/(float) 2);

    // 平均計算區
    average = s_all/(float) 2;
    printf("average => %f\n", average);



    // 發放學生區
    return 1;
}
