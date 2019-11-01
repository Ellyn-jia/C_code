#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2


void init_board(char board[ROWS][COLS], int rows, int cols, char set);
void display_board(char board[ROWS][COLS],int row, int col);
void set_mine(char board[ROWS][COLS], int row, int col);
void check_mine(char mine[ROWS][COLS], char showed[ROWS][COLS], int row, int col);
void blank_area(char mine[ROWS][COLS], char showed[ROWS][COLS], int x, int y);
