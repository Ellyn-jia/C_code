#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("****** 1����  play ********\n");
	printf("*******0����  exit ********\n");
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

		printf("���������֣�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("���������룺");
		}
	} while (input);
}
int main()
{
	TEST();
	return 0;
}