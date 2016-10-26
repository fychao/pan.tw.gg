#include <stdio.h>

//1.標頭
int gcd(int a, int b);

int main(void)
{
    //3.宣告整數 d, e, con
    int d, e, con;
    printf("input two integer:\n");
    con = 1;
    //6.是否繼續的迴圈
    while ( con == 1 )
    {
        //4.讀進兩數,並確認是否為正整數
        //!問16行!d == int(d)
        if ( scanf(" %d %d", &d, &e)==2 )
        {
            //5.a呼叫函數
            int returned_gcd=gcd( d, e);
            printf("(%d,%d)gcd=%d\n", d, e, returned_gcd);
        }
        else
        {
            //5.b輸入錯誤時
            printf("Please Input Interger");
        }
        printf("Continue?(1 for continue , 2 for exit)");
        scanf(" %d", &con);
    }
    return 0;
}

//2.輾轉相除法取GCD實作
int gcd(int a, int b)
{
    int c;
    while(a!=0)
    {
        //運算值詳情見wiki
        b%=a;
        c=a;
        a=b;
        b=c;
    }
    return b;
}
