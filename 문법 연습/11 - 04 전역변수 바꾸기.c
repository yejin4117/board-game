#include <stdio.h>

int A = 3;

void changeA(void);

void main(void)
{
	printf("¹Ù²Ù±â Àü %d\n", A);
	changeA();
	printf("¹Ù²Ù±â ÈÄ %d\n", A);
}

void changeA(void)
{
	A = 5;
}