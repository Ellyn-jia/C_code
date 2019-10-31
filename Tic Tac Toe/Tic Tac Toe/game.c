#include "game.h"

void init(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW;  i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void show_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			printf("\n");
		}
	}
}


void player_move(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf(" 玩家请输入下棋的位置坐标： ");
		scanf("%d%d", &i, &j);
		if (i > 0 && i <= ROW && j > 0 && j <= COL)
		{
			board[i - 1][j - 1] = '*';
			break;
		}
		else
		{
			printf("坐标范围输入有误，请重新输入： ");
		}
	}
}


void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]) && (board[i][0] != ' '))
			{
				return board[i][0];
			}
	}
	for (i = 0; i < col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]) && (board[0][i] != ' '))
		{
			return board[0][i];
		}

	}
	if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && (board[0][0] != ' '))
	{
		return board[0][0];
	}
	if ((board[2][0] == board[1][1]) && (board[2][0] == board[0][2]) && (board[2][0] != ' '))
	{
		return board[2][0];
	}
	if (is_full(board, ROW, COL) == 0)
	{
		return 'C';
	}
	return 'Q';
}

void game(char board[ROW][COL], int row, int col)
{
	init(board, ROW, COL);
	show_board(board, ROW, COL);
	while (1)
	{
		if (is_win(board, ROW, COL) != 'C')
		{
			break;
		}
		player_move(board, ROW, COL);
		show_board(board, ROW, COL);
		if (is_win(board, ROW, COL) != 'C')
		{
			break;
		}
	    computer_move(board, ROW, COL);
		show_board(board, ROW, COL);
	}
	char ret = is_win(board, ROW, COL);
	if (ret == '*')
	{
		printf(" 玩家胜 \n");
	}
	if (ret == '#')
	{
		printf(" 电脑胜 \n");
	}
	if (ret == 'Q')
	{
		printf(" 平局 \n");
	}
}