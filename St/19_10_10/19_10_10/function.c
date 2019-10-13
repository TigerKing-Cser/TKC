#include "game.h"

void InitBoard(char ch[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			ch[i][j] = ' ';
		}
	}
}
void DisplayBoard(char ch[ROWS][COLS], int row, int col) {
	int i = 0;																
	int j = 0;																  
	for (i = 0; i < 2*row-1; i++) {
		for (j = 0; j < col; j++) {
			if (i % 2 == 0) {
				printf(" %c |", ch[i/2][j], ch[i/2][j], ch[i/2][j]);
			}
		}
		if (i % 2 == 0) {
			printf("\n");
		}
		for (j = 0; j < col; j++) {
			if (i % 2 == 1) {
				printf("---|");
			}
		}
		if (i % 2 == 1) {
			printf("\n");
		}
	}
}
void player(char ch[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	printf("请输入要玩家要走的坐标:>");			//(3,3)--->ch[2][2]
	while (1) {
		scanf("%d%d", &x, &y);
		if (x >= 0 && x <= row && y >= 1 && y <= col) {
			if (ch[x - 1][y - 1] == ' ') {
				ch[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("这个坐标被占用，请重新输入坐标");
			}
		}
		else {
			printf("输入的坐标超界");
		}
	}
}
void computer(char ch[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	printf("本轮轮到电脑下:\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && x < row && y >= 0 && y < col) {
			if (ch[x][y] == ' ') {
				ch[x][y] = '#';
				break;
			}
		}
	}
}
char IsWin(char ch[ROWS][COLS], int row, int col) {				//获胜条件  ch[x][1]=ch[x][2]=ch[x][3]
	int i = 0;													//			ch[1][x]=ch[2][x]=ch[3][x]
	int j = 0;													//			ch[1][1]=ch[2][2]=ch[3][3] ch[1][3]=ch[2][2]=ch[3][1]
	int ret = 0;
	for (i = 0; i < row; i++) {
		int flag = 0;
		for (j = 0; j < col - 1; j++) {
			if (ch[i][j] == ch[i][j + 1] && ch[i][j] != ' ') {
				flag++;
			}
			if (flag == 2) {
				return ch[i][j];
			}
		}
	}
	for (i = 0; i < row; i++) {
		int flag = 0;
		for (j = 0; j < col - 1; j++) {
			if (ch[i][j] == ch[i + 1][j] && ch[i][j] != ' ') {
				flag++;
			}
			if (flag == 2) {
				return ch[i][j];
			}
		}
	}
	for (i = 0; i < row; i++) {
		if (ch[i][1] == ch[i + 1][2] && ch[i + 2][3] == ch[i][1] && ch[i][1] == ' ') {
			return ch[i][1];
		}
		if (ch[i][3] == ch[i + 1][2] && ch[i + 2][1] == ch[i][3] && ch[i][3] == ' ') {
			return ch[i][3];
		}
	}
	/*ret = IsFull(ch, ROWS, COLS);*/
}
void game(){
	int ret = 0;
	char ch[ROWS][COLS] = { 0 };
	InitBoard(ch, ROWS, COLS);
	DisplayBoard(ch, ROWS, COLS);
	while (1) {
		player(ch, ROWS, COLS);
		DisplayBoard(ch, ROWS, COLS);
		if (IsWin(ch, ROWS, COLS) == '*') {
			printf("恭喜玩家获胜\n");
			break;
		}
		computer(ch, ROWS, COLS);
		DisplayBoard(ch, ROWS, COLS);
		if (IsWin(ch, ROWS, COLS) == '#') {
			printf("电脑获胜\n");
			break;
		}
	}
}