#define  _CRT_SECURE_NO_WARNINGS 1

//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}

#include <stdio.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value >> i) & 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	unsigned int value = 0;
	scanf("%d", &value);
	printf("%d",count_one_bits(value));
	return 0;
}



//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	printf("ż��λ");
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	printf("����λ");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	return 0;
}






//3. ���һ��������ÿһλ��
//
#include <stdio.h>

void print_num(int num)
{
	if (num <= 9)
		printf(" %d ", num);
	else
	{
		print_num(num / 10);
		printf(" %d ", num % 10);
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print_num(num);
	return 0;
}



//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#include <stdio.h>
int main()
{
	int n, m = 0;
	int num = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &n, &m);
	num = n^m;
	for (i = 0; i < 32; ++i)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}



