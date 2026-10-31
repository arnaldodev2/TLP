#include <stdio.h>
int main()
{
	int i, n, n2, maior = -2147483647, menor = 2147483647;
	do
	{
		printf("Quantos numeros quer comparar?:\n");
		scanf("%d", &n);
		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				printf("Digite um numero:\n");
				scanf("%d", &n2);
				if( maior < n2)
				{
					maior = n2;
				}
				if(menor > n2)
				{
					menor = n2;
				}
			}
			printf("O maior numero e %d e o menor e %d\n", maior, menor);
		}
	}while(n != 0);
}