#include <stdio.h>
int main()
{
	int n, n1;
	char calc;
	printf("Press\n[s] para somar\n[m] para multiplicar\n[d] para dividir\n[sb] para subtrair\n");
	scanf_s("%c", &calc);
	printf("Digite o primeiro numero:\n");
	scanf_s("%d", &n);
	printf("Digite o Segundo numero:\n");
	scanf_s("%d", &n1);
	if (calc == 's')
		printf("Soma:%d", n + n1);
	if (calc == 'm')
		printf("Multiplicar:%d", n * n1);
	if (calc == 'd')
		printf("Divisao:%d", n / n1);
	if (calc == 'sb')
		printf("Subtrair:%d", n - n1);
	return 0;
}