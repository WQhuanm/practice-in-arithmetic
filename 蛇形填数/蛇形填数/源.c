#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
                       //给出一个不大于 9*9 的正整数 n*n，输出 的蛇形方阵。
//从右上角填上 1 开始，逆时针方向依次填入数字，如同样例所示。注意每个数字有都会占用 33 个字符，前面使用空格补齐
int arr[20][20] = { 0 };
int main()
{
    int n,x,y, ret = 0;
    scanf("%d", &n);
    ret = arr[x = 0][y = n - 1] = 1;   //定义右上角为1   ,一句话完成多件事，首先赋值x与y，然后立刻使用到数组中，又同时赋值了ret
    while (ret < n * n)    //因为后面ret是先++，所以不用等于
    {                             //x是竖轴，y横轴
        while (x + 1 < n && !arr[x + 1][y])             //数组初始化为0时默认为假，while要条件为真时才可执行，因为arr[x+1][y]=0,       &&t条件可以写成&&arr[x+1][y]==0,也可以写成!arr[x + 1][y]
            arr[++x][y] = ++ret;         //右纵   ，++x，++ret都是先增加后使用 ，因为x与ret都是上一个数的                                                                                             //表示当这个表达式（省略了==0）为真时（因为本来是假的）执行while
        while (y - 1 >= 0 && !arr[x][y - 1])              //因为要先判断是否越界再决定是否执行，所以用while，左边条件下一个数（y-1）不越界，右边条件表示即将进行的下一个数组为0时执行（即还没被赋值过）
            arr[x][--y] = ++ret;        //下纵
        while (x - 1 >= 0 && !arr[x-1][y])
            arr[--x][y] = ++ret;                //左纵
        while (y+1<n && !arr[x][y+1])
            arr[x][++y] = ++ret;              //上纵
    }
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
            printf("%3d", arr[x][y]);
        printf("\n");     //每行x都要换行
    }

    return 0;
}













