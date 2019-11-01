#include "game.h"

void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void set_mine(char board[ROWS][COLS], int row, int col)//设置雷
{
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int seek_number(char board[ROWS][COLS], int x, int y)//显示周围有几颗雷
{
	return board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] + board[x - 1][y]-8 * '0';

}

void blank_area(char mine[ROWS][COLS], char showed[ROWS][COLS], int x, int y)
{
	int flag = 0;
	flag = seek_number(mine, x, y);
	if (flag == 0)
	{
		showed[x][y] = ' ';
		if (x - 1 > 0 && x - 1 <= ROW && y > 0 && y <= COL && showed[x - 1][y] == '*')
			blank_area(mine, showed, x - 1, y);
		if (x - 1 > 0 && x - 1 <= ROW && y + 1 > 0 && y + 1 <= COL && showed[x - 1][y + 1] == '*')
			blank_area(mine, showed, x - 1, y + 1);
		if (x > 0 && x <= ROW && y + 1 > 0 && y + 1 <= COL && showed[x][y + 1] == '*')
			blank_area(mine, showed, x, y + 1);
		if (x + 1 > 0 && x + 1 <= ROW && y + 1 > 0 && y + 1 <= COL && showed[x + 1][y + 1] == '*')
			blank_area(mine, showed, x + 1, y + 1);
		if (x + 1 > 0 && x + 1 <= ROW && y > 0 && y <= COL && showed[x + 1][y] == '*')
			blank_area(mine, showed, x + 1, y);
		if (x + 1 > 0 && x + 1 <= ROW && y - 1 > 0 && y - 1 <= COL && showed[x + 1][y - 1] == '*')
			blank_area(mine, showed, x + 1, y - 1);
		if (x > 0 && x <= ROW && y - 1 > 0 && y - 1 <= COL && showed[x][y - 1] == '*')
			blank_area(mine, showed, x, y - 1);
		if (x - 1 > 0 && x - 1 <= ROW && y - 1 > 0 && y - 1 <= COL && showed[x - 1][y - 1] == '*')
			blank_area(mine, showed, x - 1, y - 1);
	}
	else
		showed[x][y] = seek_number(mine, x, y) + '0';
}



void check_mine(char mine[ROWS][COLS], char showed[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("输入坐标：");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf(" 游戏结束 \n");
				break;
			}
			else
			{
				blank_area(mine,showed, i, j);
				display_board(showed, ROW, COL);
			}

		}
		else
		{
			printf("输入有误，请重新输入");
		}
	}
}
