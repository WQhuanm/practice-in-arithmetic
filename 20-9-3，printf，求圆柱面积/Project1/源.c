#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//    //printf可输入变量，计算式，函数，常量等等，不仅仅是变量
//int main()
//{
//    int a, b;
//    printf("%d", 34 + 54); //输出为88
//    printf("%d", ADD(a, b));
//
//
//}

////使用数学函数需要用头文件#include <math.h>
//#include <math.h>
//int main()
//{
//	printf("%.5f", 1 + 2 * sprt(3) / (5 - 0.1));        //sprt是开算术平方根，这里sprt（3）是根号3的意思
//
//
//
//}


      //求圆柱面积
#include <math.h>
int main()
{
    double r, h;  //半径与高
    const double pi = acos(-1.0);  // const是声明常量（不可修改），acos是数学函数求反余弦，此处结果为圆周率pi
    double S1, S2, S;
    scanf("%lf %lf", &r, &h);
    S1 = 2*pi * r * r;
    S2 = 2 * pi * r * h;        //=不是等于，是赋值（左右不可以颠倒，先计算右侧，再赋值给左侧，等于是==，左右可以颠倒）
    S = S1 + S2;
    printf("面积是%.3lf", S);


    return 0;
}






















