// 猜数字游戏

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
		printf("请输入所猜数字：");
		scanf("%d", &input_num);
		if (input_num < random_num)
			printf("猜小了\n");
		else if (input_num > random_num)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了"); break;
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
		printf("请输入数字：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入：");
			break;
		}
	} while (input);
	return 0;
}
