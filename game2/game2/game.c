#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)

{
	int i = 0;
	int j = 0;
	printf("------扫雷-------\n");
	//打印列号
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷-------\n");

}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置十个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机的下标
		int x = rand()%row + 1;
		int y = rand()%col + 1;
		if (mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}


//static  修饰函数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//输入排查的坐标，检查是不是雷
	//如果是雷，炸死
	//如果不是，统计坐标周围几个雷
	   //储存排查雷的信息到show数组，游戏继续
	
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入排查的坐标:>");
		scanf("%d%d", &x, &y);

		//判断坐标对不对
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisPlayBoard(mine, row, col);
				break;
			}
			else
			{
				//不是雷统计xy坐标周围几个雷
				int count=get_mine_count(mine, x, y);
				show[x][y] = count+'0';
				//显示排查出的信息
				DisPlayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标错误，重新输入\n");
		}
	}

	if (win==row*col- EASY_COUNT)
	{
		printf("恭喜你，拆弹兵，赢得胜利\n");
		DisPlayBoard(mine, row, col);
	}
}