#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	double i;
//	for (i = 0; i != 10; i += 0.1)          //����������ḡ�����м�С��������ֱ�Ӳ����ڣ�������ѭ��
//		printf("%lf\n", i);
//
//
//	return 0;
//}


      //����
#include<math.h>
int main()
{
    double i;                                            //fabs�����������ֵ����
    for (i = 0; fabs(i - 10) > 0.01; i += 0.1)        //�޶�һ������10�ķ�Χ�����ӽ�10ʱ����������10�Ƚ�Զ������ѭ��
        printf("%lf\n", i);

    return 0;
}