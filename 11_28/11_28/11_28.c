//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	char c = (char)i;
//	if (c = 1)
//		printf("小端机\n");
//	else
//		printf("大端机\n");
//	return 0;
//}


#include<stdio.h>
int main()
{
	int f1 = 0, f2 = 1, f3= 0;
	int n;
	scanf_s("%d", &n);
	while (f2 < n && f3 > n)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	int count1 = n - f1;
	int count2 = f2 - n;
	if (count1 < count2)
		printf("%d", count1);
	else
		printf("%d", count2);
	return 0;
}