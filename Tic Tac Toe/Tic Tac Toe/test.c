#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("****** 1 --    play  *****\n");
	printf("****** 0 --    exit  *****\n");
	printf("**************************\n");
}

int main()
{
	char board[ROW][COL];
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("\n������ѡ�����֣� ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(board, ROW, COL);
			break;
		case 0:
			break;
		default:
			printf("\n�����������������룺 ");
		}
	}
		while (input);
	return 0;
}