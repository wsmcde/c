#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include"game.h"


void menu()
{
	printf("************************\n");
	printf("********1 .��ʼ*********\n");
	printf("********0 .����*********\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų���׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');//'0'
	InitBoard(show, ROWS, COLS,'*');//'*'
	//��ӡ����
	//DisPlayBoard(mine,ROW,COL);
	DisPlayBoard(show,ROW,COL);

	//������
	SetMine(mine, ROW, COL);
	//DisPlayBoard(mine,ROW,COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);

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





