#define _CRT_SECURE_NO_WARNINGS 1//���ų���#define���ڶ���
#define PI 3.14

//Ϊʹ��printf�����õ�ͷ�ļ�
#include <stdio.h>
//main��������������һ��������ֻ����һ��main����.
#include <stdio.h>
int main()
{
	char G = 'V';//char���Ͷ����ַ�
	int num = 100;//int���Ͷ�������
	float point = 0.1;//float���Ͷ��嵥���ȸ�����
	double d = 0.01;//double���Ͷ���˫���ȸ�����

	printf("%d\n", 100);//%dΪ����ʮ���Ƶ�ʹ�ø�ʽ
	printf("to\tmoyo");//����ת���ַ�\t (��һ��tabλ��) �� \b(�˸�) ��ʹ��
	printf("tomo\ryoa\n");//����ת���ַ�\r��ʹ��(����ǰλ����ת�����п�ͷ)
	printf("tomo\fyo\n");//����ת���ַ�\f��ʹ��(����ǰλ����ת����ҳ��λ��)

	printf("%d\n",sizeof(char));//�����ַ�����ռ���ֽ�(1���ֽ� = 8������λ(1������λʶ��һ��������))
	printf("%f",PI);//����Ѷ����PI

	return 0;
}