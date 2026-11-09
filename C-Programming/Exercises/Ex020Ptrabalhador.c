#include<stdio.h>
int main()
{
	int A, L, C;
	scanf_s("%d %d %d", &A, &L, &C);
	if (A < 3)
		printf("0\n");
	else if ((A * L * C) >= 50)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}