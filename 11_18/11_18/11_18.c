//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void move(char* arr, int k)
//{
//	while (k--)
//	{
//		int start = 0;
//		int init = arr[start];
//		while (arr[start + 1])
//		{
//			arr[start] = arr[start + 1];
//			start++;
//		}
//		arr[start] = init;
//	}
//}
//
//int main()
//{
//	int k = 0;
//	char arr[] = "ABCD";
//	scanf("%d", &k);
//	move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}







//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include<string.h>

int check_arr(char* arr1, char* src)
{
	if (strstr(strncat(arr1, arr1,5), src) != NULL)
	{
		return 1;
	}
	else
		return 0;
}



int main()
{
	char arr1[20];
	char src[20];
	scanf("%s", arr1);
	scanf("%s", src);
	check_arr(arr1,src);
	printf("%d\n", check_arr(arr1,src));
	return 0;
}
