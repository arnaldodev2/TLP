#include <stdio.h>
int main()
{
	float km, l, c;
	printf("Quantos km voce percorreu? ");
	scanf_s("%f", &km);
	printf("Quantos litros de combustivel voce gastou em %.2f km?", km);
	scanf_s("%f", &l);
	c = 100 * l / km;
	printf("A cada 100 km voce gastara %.2f km de combustivel", c);

	return 0;
}