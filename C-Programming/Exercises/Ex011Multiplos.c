#include <stdio.h>
int main()
{
	int n = 1;
	if (n != 0)
	{
		while (n != 0)
		{
			printf("Digite um numero: \n");
			scanf_s("%d", &n);
			if (n % 3 == 0)
			{
				printf("O numero %d e multiplo de 3\n", n);
			}
			if (n % 5 == 0)
			{
				printf("O numero %d e multiplo de 5\n", n);
			}
		}
	}
	printf("Digitar 0 vai sair do programa");
	return 0;
}
