#include <stdio.h>
int add_one(int var1);
int add_ab(int var_a , int var_b);
float add_ab_f(float var_a ,float  var_b);

int main(void)
{
    int returned_var=add_one(10);
    printf("[in main()]%d\n", returned_var);


    returned_var=add_ab(100,2);
    printf("[in main()]%d\n", returned_var);

    float returned_float=add_ab_f(0.3,0.8);
    printf("%f",returned_float);
    return 0;
}

int add_one(int var1)
{
//    printf("[in add_one()]%d\n", var1);
//    return 1;
    return var1 +1;
}


int add_ab(int var_a , int var_b)
{
//    printf("%d %d", var_a , var_b);
    return var_a+var_b;
}
float add_ab_f(float var_a ,float  var_b)
{
//    printf("%f %f", var_a , var_b );
    return var_a+var_b;
}
