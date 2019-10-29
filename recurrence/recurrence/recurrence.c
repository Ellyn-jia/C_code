#define _CRT_SECURE_NO_WARNINGS 1

递归和非递归分别实现求第n个斐波那契数。


递归
#include <stdio.h>

int fibonacci(int x)
{
	if (x == 1 || x == 2)
	{
		return x - 1;
	}
	else
	{
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int ret = fibonacci(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

非递归
#include <stdio.h>
int fibonacci(int x)
{
	int first = 0;
	int second = 1;
	int i = 0;
	int sum = 0;
	if (x == 1 || x == 2)
		return x - 1;
	for (i = 3; i <= x; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	int ret = fibonacci(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



编写一个函数实现n^k，使用递归实现


#include <stdio.h>
double Pow(int n, int k)
{
	if (k > 0)
		return n*Pow(n, k - 1);
	if (k == 0)
		return 1;
	if (k < 0)
		k = -k;
	return (1.0 / (n*Pow(n, k - 1)));
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	Pow(n, k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	system("pause");
	return 0;
}

写一个递归函数DigitSum(n)  ，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include <stdio.h>

int DigitSum(int input)
{
	if (input <= 9)
	{
		return input;
	}
	return DigitSum(input / 10) + input % 10;

}

int main()
{
	int input = 0;
	scanf("%d", &input);
	int ret = DigitSum(input);
	printf("%d", ret);
	return 0;
}


递归和非递归分别实现strlen


递归
#include <stdio.h>
int string_length(char* input)
{
	if (*input == '\0')
		return 0;
	else
		return string_length(input + 1) + 1;
}

int main()
{
	char input[30];
	scanf("%s", input);
	printf("%d\n", string_length(input));
	return 0;
}

非递归
#include <stdio.h>

int string_length(char* input)
{
	int count = 0;
	while (*input)
	{
		count++;
		input++;
	}
	return count;
}

int main()
{
	char input[30];
	scanf("%s", input);
	printf("%d\n", string_length(input));
	return 0;
}



递归和非递归分别实现求n的阶乘

递归
#include <stdio.h>
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return factorial(n - 1)*n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = factorial(n);
	printf("%d", ret);
	return 0;
}

非递归

#include <stdio.h>

int factorial(int n)
{
	int i = 0;
	int m = 1;
	for (i = 1; i <= n; i++)
	{
		m *= i;
	}
	return m;

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", factorial(n));
	return 0;
}

递归方式实现打印一个整数的每一位

#include <stdio.h>

void Print(int input)
{
	if (input <= 9)
		printf("%d", input);
	else
	{
		Print(input / 10);
		printf(" %d ", input % 10);
	}
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	Print(input);
	return 0;
}


#include <stdio.h>
int main()
{
	int num = 10;
	num << 1;
	printf("%d", num);
	system("pause");
}