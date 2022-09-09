#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//                     //由1到9不重复组成abc:def:ghi=1:2:3;
//             //方法一,利用数组标记1到9.哪一个出现次数不等于1，舍去
//int main()
//{
//   
//    int abc, def, ghi,i;
//    for (abc = 123; abc <= 987 / 3; abc++)   //数字只能出现一次，所以最大987，因为abc是三个数最小，所以小于987/3，大于123
//    {
//        char arr[100] = { 0 };
//        def = abc * 2;
//        ghi = abc * 3;
//        arr[abc / 100]++; arr[abc / 10 % 10] ++; arr[abc % 10]++;                //只要有一个数字出现不止1次，arr[i]不为1
//        arr[def / 100]++; arr[def / 10 % 10] ++; arr[def % 10]++;
//        arr[ghi / 100]++; arr[ghi / 10 % 10] ++; arr[ghi % 10]++;
//        for (i = 1; i <= 9; i++)
//        {
//            if (arr[i] != 1)
//                break;
//        }
//        if (i == 10)
//            printf("%d %d %d\n", abc, def, ghi);
//    }
//    return 0;
//}

//           //方法二，用数组标记数字，让出现的数字恒为定值，但是如果有一个数字没出现，则舍去
//int main()
//{
//    int abc, def,ghi,i;
//    for (abc = 123; abc <= 987 / 3; abc++)
//    {
//        def = abc * 2;
//        ghi = abc * 3;
//        char arr[100] = { 0 };
//        arr[abc / 100] = arr[abc / 10 % 10] = arr[abc % 10] = 1;
//        arr[def / 100]= arr[def / 10 % 10] = arr[def % 10] = 1;
//        arr[ghi / 100]= arr[ghi / 10 % 10]= arr[ghi % 10] = 1;
//        for (i = 1; i < 10; i++)
//        {
//            if (arr[i] != 1)
//                break;
//        }
//        if(i==10)
//            printf("%d %d %d\n", abc, def, ghi);
//    }
//
//    return 0;
//}





