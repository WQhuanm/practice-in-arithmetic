#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//                     //��1��9���ظ����abc:def:ghi=1:2:3;
//             //����һ,����������1��9.��һ�����ִ���������1����ȥ
//int main()
//{
//   
//    int abc, def, ghi,i;
//    for (abc = 123; abc <= 987 / 3; abc++)   //����ֻ�ܳ���һ�Σ��������987����Ϊabc����������С������С��987/3������123
//    {
//        char arr[100] = { 0 };
//        def = abc * 2;
//        ghi = abc * 3;
//        arr[abc / 100]++; arr[abc / 10 % 10] ++; arr[abc % 10]++;                //ֻҪ��һ�����ֳ��ֲ�ֹ1�Σ�arr[i]��Ϊ1
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

//           //�������������������֣��ó��ֵ����ֺ�Ϊ��ֵ�����������һ������û���֣�����ȥ
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





