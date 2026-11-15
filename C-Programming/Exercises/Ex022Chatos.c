#include <stdio.h>
int main()
{
	int vetor[10], i, n, count = 0, somador = 0;
	for(i = 1; i <= 10; i++)
	{
		printf("Digite o %d numero\n", i);
		scanf("%d", &vetor[10]);
		if(vetor[10] < 0)
			count+= 1;
			somador+= vetor[10];
	}
	printf("Digite [1] Para saber quantos negativos tem\nDigite [2] para somar os numeros negativos\n");
	scanf("%d", &n);
	if(n == 1)
		printf("Numeros negativos: %d", count);
	if( n == 2)
		printf("A soma dos numeros negativos: %d", somador);
	return 0;
}