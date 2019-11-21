//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void different_number(int* arr, int sz)
{
	int ret = 0;
	int index = 0;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			index = i;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (((arr[i] >> index) & 1) == 1)
			num1 ^= arr[i];
		else
			num2 ^= arr[i];
	}
	printf("%d %d \n", num1, num2);
}

int main()
{
	int arr[20];
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	different_number(arr, n);
	return 0;
//}
//
//
//
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//

#include<stdio.h>
int main()
{
	int empty = 20;
	int number = 20;
	while (empty > 1)
	{
		number += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", number);
	return 0;
}


//3.模拟实现strcpy
#include<stdio.h>
#include<assert.h>
char* Strcpy(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int main()
{
	char dest[] = "ABCD";
	char src[] = "EFGK";
	printf("%s\n", Strcpy(dest, src));
	return 0;
}

//4.模拟实现strcat


#include<stdio.h>

char* Strcat(char* dest, const char* src)
{
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int main()
{
	char dest[9] = "ABCD";
	char src[] = "EFGK";
	printf("%s\n",Strcat(dest, src));
	return 0;
}


