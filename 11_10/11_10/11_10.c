//#include<stdio.h>
//void test(int* arr)
//{
//
//}
//
//void test1(int arr[10])
//{
//
//}
//
//void test2(int arr[])
//{
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//#include<stdio.h>
//void test1(int(*arr)[5])
//{
//}
//
//void test2(int arr[3][5])
//{
//}
//void test3(int arr[][5])
//{
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<malloc.h>
//void change(int* arr, int sz)
//{
//	int temp = 0;
//	int left = 0;
//	int i = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 != 0 && left < right)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0 && left < right)
//		{
//			right--;
//		}
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int n;
//	int i;
//	scanf("%d", &n);
//	int* arr = (int*) malloc(sizeof(int) * n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	change(arr, n);
//	return 0;
//}
//





//2.
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>

void Search(int arr[][3])
{
	
}
int main()
{
	int row;
	int col;
	int key;
	scanf("%d%d", &row, &col);
	int** arr = (int**)malloc(sizeof(int*)* row);
	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)* col);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &key );
	Search(arr);
	return 0
}


