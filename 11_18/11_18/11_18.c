//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(char* arr, int k)
{
	while (k--)
	{
		int start = 0;
		int init = arr[start];
		while (arr[start + 1])
		{
			arr[start] = arr[start + 1];
			start++;
		}
		arr[start] = init;
	}
}

int main()
{
	int k = 0;
	char arr[] = "ABCD";
	scanf("%d", &k);
	move(arr, k);
	printf("%s\n", arr);
	return 0;
}







//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC