#include <stdio.h>
int main()
{
	int n, acumulador = 0, count = 0, media;
	while(acumulador < 1000)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &n);
		acumulador = acumulador + n;
		count = count + 1;
		media = acumulador / count;
	}
	printf("A media dos numeros digitados e: %d\n", media);
	return 0;
}