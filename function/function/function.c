//使用函数实现两个数的交换
#define  _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

void swap(int *a, int *b)
{
	int t = 0;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}


//创建一个数组，实现函数init（）初始化数组
void init(int arr[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		arr[i] = i;
	}

}







//实现empty（）清空数组
void empty(int arr[], int length)
{
	memset(arr, 0, length*sizeof(arr[0]));
}




//实现reverse（）函数完成数组元素的逆置。
void reverse(int arr[], int length)
{
	int left = 0;
	int right = length - 1;
	int t = 0;
	while (left < right)
	{
		t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
		left++;
		right--;
	}
}



//实现一个函数，判断一个数是否为素数

#include <stdio.h>
#include <math.h>

int prime_number(int number)
{
	int i = 0;
	for (i = 2; i <= sqrt(number); i++)
	{
		if (number%i == 0)
		{
			return 0;
			break;
		}
	}
	if (i > sqrt(number))
	{
		return 1;
	}


}


int main()
{
	int number = 0;
	scanf("%d", &number);
	int ret = prime_number(number);
	if (ret == 1)       //是素数返回1
	{
		printf("%d是素数\n", number);
	}
	else
	{
		printf("%d不是素数\n", number);
	}
	system("pause");
	return 0;
}


//用函数判断year是不是闰年

#include <stdio.h>

int leap_year(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	int n = leap_year(year);
	if (n == 1)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年不是闰年\n", year);
	}
	system("pause");
	return 0;
}



//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定



# define  _CRT_SECURE_NO_WARNINGS  1
# include <stdio.h>

void Multiplication(int line)
{
	int i = 0;
	int j = 0;
	int m = 0;
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			m = i*j;
			printf("%d * %d = %d  ", i, j, m);
		}
		printf("\n");
	}

}

int main()
{
	int line = 0;
	printf("请输入行数:\n");
	scanf("%d", &line);
	Multiplication(line);
	system("pause");
	return 0;
}