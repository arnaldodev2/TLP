#include <stdio.h>
int main()
{
	int n, n1, s;
	printf("Quantos numeros quer somar? ");
	scanf_s("%d", &n);
	for (n; n > 0; n--)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n1);
		s = n1 + n1;
	}

	return 0;
}