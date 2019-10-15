#include "game.h"
int count = 0;
int count1 = 0;
void InitBoard(char Board[ROWS][COLS], int row, int col, char ch) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			Board[i][j] = ch;
		}
	}
}
void DisplayShow(char Board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row - 1; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++) {
		printf("%d ", i);
		for (j = 1; j < col - 1; j++) {
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
	/*判断雷子安置数量*/
	/*for (i = 1; i < row - 1; i++) {
		for (j = 1; j < col - 1; j++){	
			if (Board[i][j] == '1') {
				count++;
			}
		}
	}
}*/
void SetBoom(char Board[ROWS][COLS], int row, int col) {			//放置雷的函数
	int x = 0;
	int y = 0;
	int i = 0;
	while(count1 < boom) {
		x = (rand() % (row - 2)) + 1;
		y = (rand() % (col - 2)) + 1;
		if (Board[x][y] == '0' ) {
			Board[x][y] = '1';
			count1++;
		}
	}
}

char SearchBoom(char Boom[ROWS][COLS], int x, int y) {
	return Boom[x - 1][y - 1] + Boom[x][y - 1] + Boom[x + 1][y - 1]
		 + Boom[x - 1][y]	  +	Boom[x][y]     + Boom[x + 1][y] 
		 + Boom[x - 1][y + 1] + Boom[x][y + 1] + Boom[x + 1][y + 1] - 8 * '0';
}


void Find(char Boom[ROWS][COLS], char Show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int count = 0;
	while (1) {
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= 9) && (y >= 1 && y <= 9)) {
			if (Show[x][y] != '*') {
				printf("该位置被占用,请重新输入\n");
			}
			if (Boom[x][y] == '1') {
				printf("被炸死\n");
				break;
			}
			if (Boom[x][y] == '0') {
				Show[x][y] = SearchBoom(Boom, x, y);
				DisplayShow(Show, ROWS, COLS);
				count++;
			}
			if (count == (ROWS - 2) * (COLS - 2) - boom) {
				printf("扫雷成功\n");
			}
		}
		else
			printf("坐标输入错误请重新输入\n");
	}
}
void game() {
	char Boom[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	InitBoard(Boom, ROWS, COLS, '0');
	InitBoard(Show, ROWS, COLS, '*');
	DisplayShow(Show, ROWS, COLS);
	SetBoom(Boom, ROWS, COLS);
	DisplayShow(Boom, ROWS, COLS);
	Find(Boom, Show, ROWS, COLS);
}
