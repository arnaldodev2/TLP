#include <stdio.h>
int main()
{
	int n = 1;
	while (n != 0)
	{
		printf("Digite um numero:\n");
		scanf_s("%d", &n);
		if (n % 2 == 0)
		{
			printf("O numero digitado e par\n ");
		}
		else if (n == 0)
		{
			printf("Digitou 0 vai sair do programa");
		}
		else
		{
			printf("O numero digitado e impar\n");
		}
		return 0;
	}
}