//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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







//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

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
