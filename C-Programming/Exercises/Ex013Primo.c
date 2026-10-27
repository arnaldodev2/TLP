#include <stdio.h>
int main()
{
	int n, i, count = 0;
	printf("digite um numero para saber se e primo:\n");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count <= 2)
	{
		printf("O numero %d e primo", n);
	}
	else
	{
		printf("O numero %d nao e primo", n);
	}
	return 0;
}
