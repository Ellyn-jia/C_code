//ʹ�ú���ʵ���������Ľ���
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


//����һ�����飬ʵ�ֺ���init������ʼ������
void init(int arr[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		arr[i] = i;
	}

}







//ʵ��empty�����������
void empty(int arr[], int length)
{
	memset(arr, 0, length*sizeof(arr[0]));
}




//ʵ��reverse���������������Ԫ�ص����á�
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



//ʵ��һ���������ж�һ�����Ƿ�Ϊ����

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
	if (ret == 1)       //����������1
	{
		printf("%d������\n", number);
	}
	else
	{
		printf("%d��������\n", number);
	}
	system("pause");
	return 0;
}


//�ú����ж�year�ǲ�������

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
		printf("%d��������\n", year);
	}
	else
	{
		printf("%d�겻������\n", year);
	}
	system("pause");
	return 0;
}



//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��



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
	printf("����������:\n");
	scanf("%d", &line);
	Multiplication(line);
	system("pause");
	return 0;
}