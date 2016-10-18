#include <stdio.h>

// 1. 標頭寫好
int add_one(int var1); // 練習用
int add_ab(int var_a, int var_b);
float add_ab_f(float var_a, float var_b);
char * ROT13(char name[8]);

// main function 
int main(void)
{
    // 5. 試著呼叫此函式
    int returned_var = add_one( 10 );

    // 6. 把接回來的數字印出來看看
    printf("[in main()] %d\n", returned_var);

    returned_var = add_ab(100, 200);
    printf("[in main()] %d\n", returned_var);

    float returned_float = add_ab_f(0.3, 0.23);
    printf("[in main()] %f\n", returned_float);

    char name[8];

    printf("input your name:\n");
    scanf(" %s", name);
    printf("encode: %s\n", ROT13(name));
    printf("decode: %s\n", ROT13(ROT13(name)));
    return 1;
}

// 2. 程式實作
/* 就加1
 */
int add_one(int var1)
{
    /*
    // 3. 確定吃進來
    printf("[in add_one()] %d\n", var1);

    // 4. 確定吐出去
    return 1;
    */
    return var1 +1;
}

int add_ab(int var_a, int var_b)
{
    //printf("%d %d", var_a, var_b);
    return var_a + var_b;
}

/*
 * 將 var_a + var_b 回傳
 */
float add_ab_f(float var_a, float var_b)
{
    //printf("%f %f", var_a, var_b);
    return var_a+var_b;
}

/*
 * 進行 ROT 13 編碼
 */
char *ROT13(char name[8])
{
    int idx = 0;
    char returned[8];
    for( idx=0; name[idx]!='\0'; idx++){
        if( name[idx] >= 'a' && name[idx] <= 'z')
        {
            if ( name[idx] < 'n' )
                returned[idx] = name[idx]+13;
            else
                returned[idx] = name[idx]-13;

        } 

        if( name[idx] >= 'A' && name[idx] <= 'Z')
        {
            if ( name[idx] < 'N' )
                returned[idx] = name[idx]+13;
            else
                returned[idx] = name[idx]-13;
        }
    }

    return returned;
}






