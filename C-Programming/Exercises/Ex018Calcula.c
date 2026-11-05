#include <stdio.h>
int main()
{
	int n, n1;
	char calc;
	printf("Press\ns para somar\nm para multiplicar\nd para dividir\nsb para subtrair\n");
	scanf_s("%d", &calc);
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
