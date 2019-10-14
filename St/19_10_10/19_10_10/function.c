#include "game.h"
int is_full = 0;
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
	printf("������Ҫ���Ҫ�ߵ�����:>");			//(3,3)--->ch[2][2]
	while (1) {
		scanf("%d%d", &x, &y);
		if (x >= 0 && x <= row && y >= 1 && y <= col) {
			if (ch[x - 1][y - 1] == ' ') {
				ch[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("������걻ռ�ã���������������");
			}
		}
		else {
			printf("��������곬��");
		}
	}
	is_full++;
}
void computer(char ch[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	printf("�����ֵ�������:\n");
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
	is_full++;
}
char IsWin(char ch[ROWS][COLS], int row, int col) {				//��ʤ����  ch[x][1]=ch[x][2]=ch[x][3]
	int i = 0;													//			ch[1][x]=ch[2][x]=ch[3][x]
	int j = 0;													//			ch[1][1]=ch[2][2]=ch[3][3] ch[1][3]=ch[2][2]=ch[3][1]
	int ret = 0;
	for (i = 0; i < row; i++) {
		ret = 0;
		for (j = 0; j < col-1; j++) {
			if (ch[i][j] == ch[i][j + 1] && ch[i][j] != ' ') {
				ret++;
			}
			if (ret == 2) {
				return ch[i][j];
			}
		}
	}
	for (i = 0; i < col; i++) {
		ret = 0;
		for (j = 0; j < row - 1; j++) {
			if (ch[j][i] == ch[j + 1][i] && ch[j][i] != ' ') {
				ret++;
			}
			if (ret == 2) {
				return ch[j][i];
			}
		}
	}
	if ((ch[0][2] == ch[1][1] == ch[2][0] || ch[0][0] == ch[1][1] == ch[2][2])&&ch[1][1] == ' ') {
		return ch[1][1];
	}
	
}
void game(){
	int ret = 0;
	char ch[ROWS][COLS] = { 0 };
	InitBoard(ch, ROWS, COLS);
	DisplayBoard(ch, ROWS, COLS);
	while (1) {
		is_full = 0;
		player(ch, ROWS, COLS);
		DisplayBoard(ch, ROWS, COLS);
		if (IsWin(ch, ROWS, COLS) == '*') {
			printf("��ϲ��һ�ʤ\n");
			break;
		}
		if (is_full == 9) {
			printf("ƽ��");
			break;
		}
		computer(ch, ROWS, COLS);
		DisplayBoard(ch, ROWS, COLS);
		if (IsWin(ch, ROWS, COLS) == '#') {
			printf("���Ի�ʤ\n");
			break;
		}
		if (is_full == 9) {
			printf("ƽ��");
			break;
		}
	}
}