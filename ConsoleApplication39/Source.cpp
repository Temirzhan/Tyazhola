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
		printf("Выберите задание\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*Объявите указатель на целое число, называемое адресом.
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
			/*Объявить указатель на текстовую строку с сообщением «Hello»
			*/      char A[] = "Hello";
		char *b = A;
		CharHEllo(b);
		}
		break;
		case 4:
		{
			int C = 10;
			printf("Если что число простое 0, ексли нет 1: %d ", prostoe(&C));
		}
		break;
		case 5:
		{
			/*Написать функцию, реализующую алгоритм линейного поиска заданного ключа в одномерном массиве.
			*/
			int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int len = 10;
			int pos;
			printf("Введите число");
			scanf("%d", &pos);
			printf("число =%d под номером %d", A[lineyniy(A, &len, &pos)], lineyniy(A, &len, &pos));
		}
		break;
		case 6:
		{
			/*Написать функцию, реализующую алгоритм бинарного поиска заданного ключа в одномерном массиве.
			*/
			int A[10] = { 1,2,3,4,5,6,7,8,9,10 };
			int len = 10;
			int pos;
			printf("Введите число");
			scanf("%d", &pos);
			printf("число =%d под номером %d", A[binarnyPoisk(A, &len, &pos)], binarnyPoisk(A, &len, &pos));
		}
		break;
		case 7:
		{
			/*Написать игру «Быки и коровы». Программа "загадывает" четырёхзначное число и играющий должен угадать его.
			После ввода пользователем числа программа сообщает, сколько цифр числа угадано (быки) и сколько цифр угадано и стоит на нужном месте (коровы).
			После отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.  В программе необходимо использовать рекурсию.
			*/
			int A = 1000 + rand() % 8999;
			printf("%d", A);
			printf("приветвую тебя в игре быки и коровы\n");
			printf("Я загадал число а ты попробуй отгадай его\n");
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
		printf("Хотите продолжить\n");
		scanf("%c", &f);
	} while (f == 'y');
}