#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���ŵĶ���
#define ROW 3
#define COL 3


//����������
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//���Ǵ�ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputeMove(char board[ROW][COL], int row, int col);

//���Ӯ�ˡ���*
//����Ӯ�ˡ���#
//ƽ    �֡���Q
//��Ϸ��������C

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);

