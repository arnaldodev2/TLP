#include <stdio.h>
int main()
{
	int n, n1, calc;
	printf("Press\n1 para somar\n2 para multiplicar\n3 para dividir\n4 para subtrair\n");
	scanf_s("%d", &calc);
	printf("Digite o primeiro numero:\n");
	scanf_s("%d", &n);
	printf("Digite o Segundo numero:\n");
	scanf_s("%d", &n1);
	if (calc == 1)
		printf("Soma:%d", n + n1);
	if (calc == 2)
		printf("Multiplicar:%d", n * n1);
	if (calc == 3)
		printf("Divisao:%d", n / n1);
	if (calc == 4)
		printf("Subtrair:%d", n - n1);
	return 0;
}