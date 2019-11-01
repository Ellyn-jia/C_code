#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****** 1——  play ********\n");
	printf("*******0——  exit ********\n");
	printf("***************************\n");
}



void game()
{
	char mine[ROWS][COLS];
	char showed[ROWS][COLS];
	init_board(mine, ROWS, COLS,'0');
	init_board(showed, ROWS, COLS,'*');
	display_board(showed, ROW, COL);
	set_mine(mine, ROW, COL);	
	check_mine(mine, showed, ROW, COL);
}


void TEST()
{		
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();

		printf("请输入数字：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("请重新输入：");
		}
	} while (input);
}
int main()
{
	TEST();
	return 0;
}