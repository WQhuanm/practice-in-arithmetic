#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
                 //����������a��b��c�����a/b��С����ʽ����ȷ��С�����cλ�������������ݣ��������Ϊa��b,c=0
             //��Ϊ�趨С��λ,���������������������
int main()
{
    int a, b, c;
    
    while (scanf("%d %d %d", &a, &b, &c)==3)
    {
        if (a ==0 && b ==0 && c== 0)
            break;
        else
        {
            int x = a / b;  char arr[110] = { 0 };
            int h = (a * 10) / b; int d = (a * 10) % b;   //hΪ������������dΪ����������
            for (int i = 0; i <= c-1; i++)
            {
                arr[i] = h + '0';
                //���Ͻ���λ*10תΪʮλ��Ȼ����Գ�����ȡ�ñ�λС����ֵ�����ø÷�ȡ�����ú����С����ȡ
                h = (d * 10) / b;
                d = (d * 10) % b;
            }
            if (h >= 5)
                arr[c - 1] = arr[c - 1] + 1;
            printf("%d.%s\n", x, arr);
        }
    }
    return 0;
}



