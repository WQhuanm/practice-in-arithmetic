#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//                        //首先所有的灯都是关的（注意是关！），编号为 11 的人走过来，把是 11 的倍数的灯全部打开，编号为 22 的人把是 22 的倍数的灯全部关上，
//                        //编号为 33 的人又把是 33 的倍数的灯开的关上，关的开起来……直到第 NN 个人为止。给定 NN，求 NN 轮之后，还有哪几盏是开着的。
//int arr[1010] = { 0};           //数组在全局定义才可以开得大一点   ,用int定义数组，则可以储存不止个位数
//int main()
//{
//    int n, k;
//    scanf("%d %d", &n, &k);   //n个灯，k个人
//    for (int i = 1; i <= k; i++)   //第i个人
//    {
//        for (int j = 1; j <= n; j++)       //对第j个灯
//            if (j % i == 0)      //判断灯是不是对应人的倍数，是则对灯操作
//                arr[j] = arr[j] + 1;
//    }
//    int first = 1;            //定义为1（真）
//    for (int j = 1; j <= n; j++)
//        if (arr[j] % 2 != 0)
//        {
//            if (first)             //括号里面是变量，表示当变量为真（不为0）时，进入，这样使第一个可以进入上一个if的变量的把first改为0（假），使后面的变量永远不再进入这里，从而实现对第一个数的特殊操作
//                first = 0;
//            else
//                printf(" ");    //这里是第一个前面不打空格，其余都要空格
//            printf("%d", j);
//        }
//    printf("\n");
//	return 0;
//}


               //参考答案
int arr[1010];
int main()
{
    int n, k,first=1;
    memset(arr, 0, sizeof(arr));    //memset函数(只可赋值数组为0或者-1），在string.h中定义，arr表示对象为arr这个数组，0，表示把整个数组赋值为0，sizeof(arr)表示对整个数组操作
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
            if (j % i == 0)
                arr[j] = !arr[j];      //数组本来全为0（假），！则是真假相反，所以变为1（真），通过1与0（真与假）表示灯状态
    }
    for (int h = 1; h <= n; h++)
    {
        if (arr[h])   //当为真（1)（即灯开着时）时可以进入
        {
            if (first)
                first = 0;
            else
                printf(" ");
            printf("%d", h);
        }
       
    }
    printf("\n");
    return 0;
}






