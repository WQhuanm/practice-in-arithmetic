#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                //��Ŀ���ҳ��������硰abc*de������λ��������λ��������ʽ��ʹ������������ʽ�У��������ֶ�����һ���ض������ּ��ϡ��������ּ��ϣ���������֮��û�пո񣩣�
                //���������ʽ��ÿ����ʽǰӦ�б�ţ�֮��Ӧ��һ�����С����������������

int main()
{
    int count = 0;
    char arr[20], ret[100];
    scanf("%s", arr);
    for (int abc = 111; abc <= 999; abc++)
    {
        for (int de = 11; de <= 99; de++)            //��������һ��һ�����ԣ����ȥ�ȽϾͺ�
        {
            int s1 = abc * (de % 10), s2 = abc * (de / 10), sum = abc * de;
            sprintf(ret, "%d%d%d%d%d", abc, de, s1, s2, sum);           //sprintf��������ַ�����ǰ�ᱣ֤�ַ����ռ��㹻д�룬����printf������Ļ��fprintf�����ļ�
            int flag = 1;
            for (int i = 0; i < strlen(ret); i++)
            {
                if (strchr(arr, ret[i]) == NULL)        //strchr��������arr�в����Ƿ�����ret[i]��ͬ��һ���ַ���ֻ��һ���������򷵻����ַ��û�оͷ���NULL
                    flag = 0;
            }      //������ѭ����û�з���NULL��֤��ͨ�������Դ�ӡ
            if (flag)  //flagΪ�棨1��ʱִ��
            {
                printf("<%d>\n", ++count);
                printf("%5d\nx%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, s1, s2, sum);     //s2������%4����Ϊ�����Ҷ����������룬�����ұ߿ո��ù���Ȼ����
            }     
        }

    }
    printf("The number of sulotions=%d\n", count);


    return 0;
}


   
















