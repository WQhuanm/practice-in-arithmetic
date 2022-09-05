#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
            //判断n是否为完全平方数
            
    
//                    //方法一，将n开平方，并看其是否为整数（即用int来储存平方根，并判断其平方还是否为n）
//#include<math.h>
//int main()
//{
//    for (int a = 1; a < 10; a++)
//    {
//        for (int b = 0; b < 10; b++)
//        {
//            int n = a * 1100 + b * 11;            //想要在第几位赋值，就用1，哪一位不赋值，就用0，一次就能赋值完，不要麻烦的写a*1000+a*100+b*10+b+1
//            int m = sqrt(n);//完全平方数开完还是整数，就不会被int省略，则m平方为n，其余不可
//            if (m * m == n)
//                printf("%d", n);
//        }
//    }
//    return 0;
//}

//
//          //方法2，不用开平方，用平方的方法
//int main()
//{
//    for (int m = 1; ; m++)
//    {
//        int n = m * m;
//        if (n < 1000)           //你先成为四位数再说话
//            continue;
//        if (n > 9999)     //五位数滚蛋
//            break;           //这里不用else if语句，因为全都要判断，后面还有if
//        int x = n / 100, y = n % 100;      //用int类型除100，就是舍去最后俩位，取前面位数（百位，千位），int类型%100就是舍去（十位，个位）前面的所有位数
//        if (x / 10 == x % 10 && y / 10 == y % 10)       //保证个位与十位相等，百位与千位相等
//            printf("%d\n", n);
//    }
//    return 0;
//}
















