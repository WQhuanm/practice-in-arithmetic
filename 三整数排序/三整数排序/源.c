#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
            //��������������С��������
   //����һ��6��if�����о٣��鷳��
   
  //������������һֱ����a,b,c,���ǽ������ǵľ���ֵ������д��
int main()
{
    int a, b, c,swap;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)                //���ò���if��,ֻҪ����ͻ�ִ�У���������if.....else if��ֻ��ִ��һ����
    {
        swap = a;
        a = b;
        b = swap;
    }
    if (b > c)          //���ܹ�3�������ȱ�֤c�������a��b��ҪдС��c��Ȼ��дa<b;
    {                 
        swap = b;
        b = c;
        c = swap;
    }
    if (a > c)                       //ִ��ʱ��Ȼa��cֵ��ı䣬������Ȼa<b,��Ϊǰ���Ѿ�ȷ��b<c�ˣ���������������ζ�����
    {
        swap = a; a = c; c = swap;
    }
        printf("%d<%d<%d", a, b, c);
    return 0;
}






















