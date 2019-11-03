//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	int renum = 0;
	for (i = 0; i < 32; i++)
	{
		renum += (((n >> i) & 1) * pow(2 , 31 - i) );
	}
	return renum;
}

int main()
{
	int n = 25;
    printf("%u",reverse_bit(n));
	return 0;
}



//2.不使用（a + b） / 2这种方式，求两个数的平均值。
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%d\n", ((a & b) + ((a ^ b) >> 1)));
	return 0;
}



//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

#include<stdio.h>
int main()
{
	int arr[5];
	int i = 0;
	int ret = 0;
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; ++i)
	{
		ret ^= arr[i];
	}
	printf("%d", ret);
	return 0;
}


//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//student a am i
//i ma a tneduts
//i am a student


#include<stdio.h>


int string_length(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}


void reverse_str(char* start, char* end)
{
	while (start < end)
	{
		char t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
}

void reverse(char* str)
{
	char* cur = str;
	int len = string_length(str);
	reverse_str(str, str + len - 1);
	while (*cur)
	{
		char* start = cur;
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		reverse_str(start, cur - 1);
		while (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{	
//不能指向字符串常量，必须是一个可以修改的数组
	char str[] = "student a am i";
	reverse(str);
	printf("%s\n", str);
	return 0;
}