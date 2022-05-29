#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("******    1.��ʼ    *******\n");
	printf("******    0.�˳�    *******\n");
	printf("***************************\n");
}

void game()
{
	//�������� ��ά����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ���� �������Ǵ�ӡ��������
	DisplayBoard(board,ROW,COL);

	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
			break;

		//��������
		ComputeMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("��������Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}