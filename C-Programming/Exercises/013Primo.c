#include <stdio.h>
int main()
{
	int n, i = 0, count = 0, p;
	printf("digite um numero para saber se e primo:\n");
	scanf_s("%d", &n);
	for (i; i < n; i++)
	{
		n % i == 0
		count = count + 1;
	}
	if (count >= 2)
	{
		printf("O numero %d e primo", n);
	}
	else
	{
		printf("O numero %d nao e primo", n);
	}


}