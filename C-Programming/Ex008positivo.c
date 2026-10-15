#include <stdio.h>
int main()
{
	int n;
	printf("Digite um numero: ");
	scanf_s("%d", &n);
	while (n != 0)
	{
		if (n < 0)
			printf("O numero digitado e negativo.\n");
	}
		else
		{
			printf("O numero digitado e positivo.\n");
		}

	return 0;
}