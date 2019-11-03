#define  _CRT_SECURE_NO_WARNINGS 1

//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}

#include <stdio.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value >> i) & 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	unsigned int value = 0;
	scanf("%d", &value);
	printf("%d",count_one_bits(value));
	return 0;
}



//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	printf("偶数位");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	printf("奇数位");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	return 0;
}






//3. 输出一个整数的每一位。
//
#include <stdio.h>

void print_num(int num)
{
	if (num <= 9)
		printf(" %d ", num);
	else
	{
		print_num(num / 10);
		printf(" %d ", num % 10);
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print_num(num);
	return 0;
}



//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#include <stdio.h>
int main()
{
	int n, m = 0;
	int num = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &n, &m);
	num = n^m;
	for (i = 0; i < 32; ++i)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}



