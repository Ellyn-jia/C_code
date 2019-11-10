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

#include<stdio.h>
void test1(int(*arr)[5])
{
}

void test2(int arr[3][5])
{
}
void test3(int arr[][5])
{
}

int main()
{
	int arr[3][5] = { 0 };
	test1(arr);
	test2(arr);
	test3(arr);
	return 0;
}