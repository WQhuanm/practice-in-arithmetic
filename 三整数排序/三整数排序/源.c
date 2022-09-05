#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
            //输入三个数，从小到大排序
   //方法一，6个if句子列举（麻烦）
   
  //方法二，排序一直都是a,b,c,但是交换他们的具体值，减少写入
int main()
{
    int a, b, c,swap;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)                //采用并列if句,只要满足就会执行（不可以用if.....else if，只会执行一个）
    {
        swap = a;
        a = b;
        b = swap;
    }
    if (b > c)          //列总共3条因，首先保证c最大，所以a，b都要写小于c，然后写a<b;
    {                 
        swap = b;
        b = c;
        c = swap;
    }
    if (a > c)                       //执行时虽然a，c值会改变，但是仍然a<b,因为前面已经确保b<c了，所以三条排序如何都可以
    {
        swap = a; a = c; c = swap;
    }
        printf("%d<%d<%d", a, b, c);
    return 0;
}






















