//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void different_number(int* arr, int sz)
//{
//	int ret = 0;
//	int index = 0;
//	int num1 = 0, num2 = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (int i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			index = i;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> index) & 1) == 1)
//			num1 ^= arr[i];
//		else
//			num2 ^= arr[i];
//	}
//	printf("%d %d \n", num1, num2);
//}
//
//int main()
//{
//	int arr[20];
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	different_number(arr, n);
//	return 0;
//}
//
//
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//

//#include<stdio.h>
//int main()
//{
//	int empty = 20;
//	int number = 20;
//	while (empty > 1)
//	{
//		number += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", number);
//	return 0;
//}


//3.ģ��ʵ��strcpy






//4.ģ��ʵ��strcat







