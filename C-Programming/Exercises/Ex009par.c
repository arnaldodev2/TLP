#include <stdio.h>
int main()
{
	int n = 1;
	do
	{
		printf("Digite um numero:\n");
		scanf_s("%d", &n);
		if(n != 0)
		{
			if (n % 2 == 0)
			{
				printf("O numero digitado e par\n ");
			}
			else
			{
				printf("O numero digitado e impar\n");
			}
		}
	} while (n != 0);
	printf("Digitar 0 sai do proprama\n");
	return 0;
}