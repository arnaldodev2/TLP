#include <stdio.h>
#include <locale.h>
int main (void)
{
	setlocale(LC_ALL, " ");
	float cel, far, f, c;
	int p1;
	printf("Quer converter c ou f?[1 para f, 2 para c]");
	scanf_s("%d", &p1);
	if (p1 == 1)
	{
		printf("Digite o valor da temperatura em f:");
		scanf_s("%f", &f);
		cel = (f - 32) * 5 / 9;
		printf("Celsius em Fahrenheit é %.1f", cel);
	}
	else if (p1 == 2)
	{
		printf("Digite o valor da temperatura em c:");
		scanf_s("%f", &c);
		far = (c * 9 / 5 + 32);
		printf("Fahrenheit em celsius %.1f", far);
	}
	return 0;
}