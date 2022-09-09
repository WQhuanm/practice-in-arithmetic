#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
                 //输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位，包含多组数据，结束标记为a，b,c=0
             //人为设定小数位,可以在逐个储存在数组中
int main()
{
    int a, b, c;
    
    while (scanf("%d %d %d", &a, &b, &c)==3)
    {
        if (a ==0 && b ==0 && c== 0)
            break;
        else
        {
            int x = a / b;  char arr[110] = { 0 };
            int h = (a * 10) / b; int d = (a * 10) % b;   //h为除数后整数，d为除数后余数
            for (int i = 0; i <= c-1; i++)
            {
                arr[i] = h + '0';
                //不断将个位*10转为十位，然后除以除数，取得本位小数数值，再用该法取余数让后面的小数得取
                h = (d * 10) / b;
                d = (d * 10) % b;
            }
            if (h >= 5)
                arr[c - 1] = arr[c - 1] + 1;
            printf("%d.%s\n", x, arr);
        }
    }
    return 0;
}



