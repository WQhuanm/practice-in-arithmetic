#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//    //printf���������������ʽ�������������ȵȣ��������Ǳ���
//int main()
//{
//    int a, b;
//    printf("%d", 34 + 54); //���Ϊ88
//    printf("%d", ADD(a, b));
//
//
//}

////ʹ����ѧ������Ҫ��ͷ�ļ�#include <math.h>
//#include <math.h>
//int main()
//{
//	printf("%.5f", 1 + 2 * sprt(3) / (5 - 0.1));        //sprt�ǿ�����ƽ����������sprt��3���Ǹ���3����˼
//
//
//
//}


      //��Բ�����
#include <math.h>
int main()
{
    double r, h;  //�뾶���
    const double pi = acos(-1.0);  // const�����������������޸ģ���acos����ѧ���������ң��˴����ΪԲ����pi
    double S1, S2, S;
    scanf("%lf %lf", &r, &h);
    S1 = 2*pi * r * r;
    S2 = 2 * pi * r * h;        //=���ǵ��ڣ��Ǹ�ֵ�����Ҳ����Եߵ����ȼ����Ҳ࣬�ٸ�ֵ����࣬������==�����ҿ��Եߵ���
    S = S1 + S2;
    printf("�����%.3lf", S);


    return 0;
}






















