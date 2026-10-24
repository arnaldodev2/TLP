#include <stdio.h>
int main()
{
	int i = 0, n = 1, n2, maior = 0, menor = 0;
	if (n != 0)
	{
		printf("Quantos numeros quer comparar?: \n");
		scanf_s("%d", &n);
		for (i; i < n; i++)
		{
			printf("Digite um numero: \n");
			scanf_s("%d", &n2);
		}
		if (maior < n2)
		{
			maior = n2;
		}
		printf("O maior numero e %d e o menor e %d", maior);
	}
	return 0;
}