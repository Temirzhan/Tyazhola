#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"



char f;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do {
		int N;
		printf("�������� �������\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*�������� ��������� �� ����� �����, ���������� �������.
			*/
			int A = 50;
			int *b = &A;
			Celoe(b);
		}
		break;
		case 2:
		{
			char A = 'W';
			char *b = &A;
			CharW(b);
		}
		break;
		case 3:
		{
			/*�������� ��������� �� ��������� ������ � ���������� �Hello�
			*/      char A[] = "Hello";
		char *b = A;
		CharHEllo(b);
		}
		break;
		case 4:
		{
			int C = 10;
			printf("���� ��� ����� ������� 0, ����� ��� 1: %d ", prostoe(&C));
		}
		break;
		case 5:
		{
			/*�������� �������, ����������� �������� ��������� ������ ��������� ����� � ���������� �������.
			*/
			int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int len = 10;
			int pos;
			printf("������� �����");
			scanf("%d", &pos);
			printf("����� =%d ��� ������� %d", A[lineyniy(A, &len, &pos)], lineyniy(A, &len, &pos));
		}
		break;
		case 6:
		{
			/*�������� �������, ����������� �������� ��������� ������ ��������� ����� � ���������� �������.
			*/
			int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int len = 10;
			int pos;
			printf("������� �����");
			scanf("%d", &pos);
			printf("����� =%d ��� ������� %d", A[binarnyPoisk(A, &len, &pos)], binarnyPoisk(A, &len, &pos));
		}
		break;
		case 7:
		{
			/*�������� ���� ����� � �������. ��������� "����������" ������������� ����� � �������� ������ ������� ���.
			����� ����� ������������� ����� ��������� ��������, ������� ���� ����� ������� (����) � ������� ���� ������� � ����� �� ������ ����� (������).
			����� ����������� ����� �� ����� ���������� ������� ���������� ��������� ������������� �������.  � ��������� ���������� ������������ ��������.
			*/
			int A = 1000 + rand() % 8999;
			printf("%d", A);
			printf("��������� ���� � ���� ���� � ������\n");
			printf("� ������� ����� � �� �������� ������� ���\n");
			Mumu(&A);
		}
		break;
		case 8:
		{
			int  count = 10, *temp, sum = 0;
			temp = &count;
			*temp = 20;
			temp = &sum;
			*temp = count;
			printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum);

		}
		break;
		}
		printf("������ ����������\n");
		scanf("%c", &f);
	} while (f == 'y');
}