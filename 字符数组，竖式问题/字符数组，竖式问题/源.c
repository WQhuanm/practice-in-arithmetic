#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                //题目：找出所有形如“abc*de”（三位数乘以两位数）的算式，使得在完整的竖式中，所有数字都属于一个特定的数字集合。输入数字集合（相邻数字之间没有空格），
                //输出所有竖式。每个竖式前应有编号，之后应有一个空行。最后输出解的总数。

int main()
{
    int count = 0;
    char arr[20], ret[100];
    scanf("%s", arr);
    for (int abc = 111; abc <= 999; abc++)
    {
        for (int de = 11; de <= 99; de++)            //所有例子一个一个测试，最后去比较就好
        {
            int s1 = abc * (de % 10), s2 = abc * (de / 10), sum = abc * de;
            sprintf(ret, "%d%d%d%d%d", abc, de, s1, s2, sum);           //sprintf是输出到字符串，前提保证字符串空间足够写入，区别printf输入屏幕，fprintf输入文件
            int flag = 1;
            for (int i = 0; i < strlen(ret); i++)
            {
                if (strchr(arr, ret[i]) == NULL)        //strchr函数，在arr中查找是否有与ret[i]相同的一个字符（只有一个），有则返回其地址，没有就返回NULL
                    flag = 0;
            }      //当整个循环都没有返回NULL，证明通过，可以打印
            if (flag)  //flag为真（1）时执行
            {
                printf("<%d>\n", ++count);
                printf("%5d\nx%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, s1, s2, sum);     //s2这里是%4，因为不是右对齐而是左对齐，所以右边空格不用管自然会有
            }     
        }

    }
    printf("The number of sulotions=%d\n", count);


    return 0;
}


   
















