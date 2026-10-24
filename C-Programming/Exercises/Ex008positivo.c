#include <stdio.h>
int main()
{
	int n = 1;
	while (n != 0)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("O numero digitado e negativo.\n");
		}
		else if( n == 0)
		{
			printf("Digitar 0 vai sair do programa.\n");
		}
		else
		{
			printf("O numero digitado e positivo.\n");
		}
	}
	return 0;
}