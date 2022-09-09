#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	double i;
//	for (i = 0; i != 10; i += 0.1)          //浮点数计算会浮动，有极小误差，不可以直接不等于，否则死循环
//		printf("%lf\n", i);
//
//
//	return 0;
//}


      //改正
#include<math.h>
int main()
{
    double i;                                            //fabs函数是求绝对值函数
    for (i = 0; fabs(i - 10) > 0.01; i += 0.1)        //限定一个靠近10的范围，当接近10时，不满足离10比较远，跳出循环
        printf("%lf\n", i);

    return 0;
}