#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"

void Celoe(int *b)
{
	printf("Указатель на целое число его адреc %p и его значение %d", b, *b);
}
void CharW(char*b)
{
	printf("Указатель на символ его адре %p и его значение %c\n", b, *b);

}

void CharHEllo(char*b)
{
	printf("Указатель на символ его адре %p и его значение %s\n", b, b);
}


int prostoe(int *A)
{
	for (int i = 2; i < *A; i++)
	{
		if ((*A%i) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int lineyniy(int *A, int *len, int*pos)
{
	for (int i = 0; i < *len; i++)
	{
		if (*pos == A[i])
		{
			return i;
		}
	}

	return 99;
}
int binarnyPoisk(int *A, int *len, int*pos)
{
	int fag = 0;
	int l = 0;
	int r = *len - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (A[mid] == *pos)
			return mid;
		if (*pos < A[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

void Mumu(int *A)
{
	int B;
	int chetchik = 0;

	do {
		int chetMest = 0;
		int chetUgadal = 0;
		printf("Введите число\n");
		scanf("%d", &B);
		chetchik++;
		if (B == *A)
		{
			printf("Все верно вы угодали\n");
			printf("Число попыток %d \n", chetchik);
			break;
		}
		else
		{
			Mumu2(&B, A, &chetMest, &chetUgadal, 4);
			printf("Число угаданных цифр %d и угаданых мест %d\n", chetUgadal, chetMest);
		}
	} while (1);

}

void Mumu2(int *B, int *A, int *chetMest, int *chetUgadal, int i)
{
	int chisko1 = *B;
	int chuslo11;
	if (i>0)
	{
		chuslo11 = chisko1 % 10;
		chisko1 /= 10;
		Mumu3(&chisko1, A, &i, chetMest, chetUgadal, 4);
		Mumu2(&chisko1, A, chetMest, chetUgadal, i++);
	}
}

void Mumu3(int *chisko, int *A, int *i, int *chetMest, int *chetUgadal, int j)
{
	int chislo2 = *A;
	int chislo21;
	if (j>0)
	{
		chislo21 = chislo2 % 10;
		chislo2 /= 10;
		if (*chisko == chislo21)
		{
			*chetUgadal++;
			if (j == *i)
			{
				*chetMest++;
			}
		}
		Mumu3(chisko, &chislo2, i, chetMest, chetUgadal, j++);

	}
}