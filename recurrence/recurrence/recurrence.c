#define _CRT_SECURE_NO_WARNINGS 1

�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������


�ݹ�
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

�ǵݹ�
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



��дһ������ʵ��n^k��ʹ�õݹ�ʵ��


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

дһ���ݹ麯��DigitSum(n)  ������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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


�ݹ�ͷǵݹ�ֱ�ʵ��strlen


�ݹ�
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

�ǵݹ�
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



�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

�ݹ�
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

�ǵݹ�

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

�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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