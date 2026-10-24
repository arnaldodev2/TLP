#include <stdio.h>
#include <locale.h>
int main()
{
	//setlocale
	float l, p, a, h, b, a2;
	printf("Digite o lado de um quadrado:");
	scanf_s("%f", &l);
	printf("Digite a altura do retângulo:");
	scanf_s("%f", &h);
	printf("Digite a base do retângulo:");
	scanf_s("%f", &b);
	a = l * l;
	a2 = b * h;
	printf("Area do quadrado: %.2f\nArea do retângulo: %.2f", a, a2);

	return 0;
}
