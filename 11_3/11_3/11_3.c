//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	int renum = 0;
	for (i = 0; i < 32; i++)
	{
		renum += (((n >> i) & 1) * pow(2 , 31 - i) );
	}
	return renum;
}

int main()
{
	int n = 25;
    printf("%u",reverse_bit(n));
	return 0;
}



//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("%d\n", ((a & b) + ((a ^ b) >> 1)));
	return 0;
}



//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

#include<stdio.h>
int main()
{
	int arr[5];
	int i = 0;
	int ret = 0;
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; ++i)
	{
		ret ^= arr[i];
	}
	printf("%d", ret);
	return 0;
}


//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//student a am i
//i ma a tneduts
//i am a student


#include<stdio.h>


int string_length(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}


void reverse_str(char* start, char* end)
{
	while (start < end)
	{
		char t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
}

void reverse(char* str)
{
	char* cur = str;
	int len = string_length(str);
	reverse_str(str, str + len - 1);
	while (*cur)
	{
		char* start = cur;
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		reverse_str(start, cur - 1);
		while (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{	
//����ָ���ַ���������������һ�������޸ĵ�����
	char str[] = "student a am i";
	reverse(str);
	printf("%s\n", str);
	return 0;
}