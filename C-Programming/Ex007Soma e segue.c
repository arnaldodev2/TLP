#include <stdio.h>
int main()
{
	int n = 0, n1, s = 0, i;
	printf("Quantos numeros quer somar? ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n1);
		s += n1;
	}
	printf("A soma dos numeros digitados e: %d\n", s);
	return 0;
}