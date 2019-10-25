// 折半查找数字

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int right = sz - 1;
	int left = 0;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int ret = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 11;
	ret = binary_search(arr, k, sz);
	if (ret == -1)
		printf("很遗憾。没有找到数字\n");
	else
		printf("找到了该数字，其下标为%d\n", ret);
	system("pause");
	return 0;
}