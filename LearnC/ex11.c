#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

void createFile(void);
void readFile(void);
int cylinder(int val_r, int val_h);


int main(int argc, char *argv[])
{



    printf("argv[1]=%s\n", argv[1]);
    printf("argv[2]=%s\n", argv[2]);

    // stdlib string to integer
    int value_r = atoi(argv[1]);
    int value_h = atoi(argv[2]);

    printf("value_r=%d, value_h=%d\n", value_r, value_h);
   
    int tmp = cylinder(value_r, value_h);
    printf("total_v = %d\n", tmp);

    /*
    // in-file style
    int total_v = PI * value_r * value_r * value_h;
    */

    // 只列出兩位小數點後的數值
    //printf("pi = %.2f\n", PI);

    /*
    //開檔練習
    createFile();
    //讀檔練習
    readFile();
    */

    // open file

    /* 練習 argc, argv 從使用者呼叫函式取得參數
    printf("argc=%d\n", argc);
    
    int idx=0;
    for (idx=0; idx<argc; idx++)
    {
        printf("argv=%s\n", argv[idx]);
    }
    */
    return 1;
}
void readFile(void)
{
    FILE * fp;
    char str[60];
    fp = fopen("test.txt", "r+");
    fgets(str, 60, fp);
    puts(str);
    fclose(fp);
}

void createFile(void)
{

    FILE * fp;
    fp = fopen("test.txt", "w+");
    fprintf(fp, "hihi, %s.\n", "August");
    fclose(fp);
}
int cylinder(int val_r, int val_h)
{
    int total_v = PI * val_r * val_r * val_h;
    return total_v;
}
