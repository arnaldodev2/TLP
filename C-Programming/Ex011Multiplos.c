#include <stdio.h>
int main()
{
	int n = 1;
	while (n != 0)
	{
		printf("Digite um numero: \n");
		scanf_s("%d", &n);
		if (n % 3 == 0)
		{
			printf("O numero %d e multiplo de 3\n", n);
		}
		else if (n % 5 == 0)
		{
			printf("O numero %d e multiplo de 5\n", n);
		}
	}
	return 0;
}