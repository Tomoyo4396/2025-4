#define _CRT_SECURE_NO_WARNINGS 1//符号常量#define用于定义
#define PI 3.14

//为使用printf而引用的头文件
#include <stdio.h>
//main函数：主函数；一个工程中只能有一个main函数.
#include <stdio.h>
int main()
{
	char G = 'V';//char类型定义字符
	int num = 100;//int类型定义整形
	float point = 0.1;//float类型定义单精度浮点形
	double d = 0.01;//double类型定义双精度浮点形

	printf("%d\n", 100);//%d为整型十进制的使用格式
	printf("to\tmoyo");//对于转义字符\t (下一个tab位置) 与 \b(退格) 的使用
	printf("tomo\ryoa\n");//对于转义字符\r的使用(将当前位置跳转至本行开头)
	printf("tomo\fyo\n");//对于转义字符\f的使用(将当前位置跳转至下页此位置)

	printf("%d\n",sizeof(char));//计算字符型所占的字节(1个字节 = 8个比特位(1个比特位识别一个二进制))
	printf("%f",PI);//输出已定义的PI

	return 0;
}