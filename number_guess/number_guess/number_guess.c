// ��������Ϸ

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
	int random_num = rand() % 10 + 1;
	int input_num = 0;

	while (1)
	{
		printf("�������������֣�");
		scanf("%d", &input_num);
		if (input_num < random_num)
			printf("��С��\n");
		else if (input_num > random_num)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���"); break;
		}
	}
}

void menu()
{
	printf("***************\n");
	printf("****1--play****\n");
	printf("****0--exit****\n");
	printf("***************\n");

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("���������֣�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("���������룺");
			break;
		}
	} while (input);
	return 0;
}
