/*Faça um programa que lendo duas
temperaturas separadas em números inteiros e
décimas, diga se a FEBRE BAIXOU, FEBRE
MANTEVE, FEBRE SUBIU OU ANFÍBIO ou se a
temperatura é NORMAL (Quando a
temperatura é inferior a 37,00º)*/
#include <stdio.h>
int main()
{
	float t1, t2;
	printf("Digite a temperatura inicial\n");
	scanf_s("%f", &t1);
	printf("Digite a teemperatura final:\n");
	scanf_s("%f", &t2);
	if (t1 <= 35 || t2 <= 35)
	{
		printf("Es um anfibio");
	}
	else if (t1 >= 37 || t2 >= 37)
	{
		if (t1 == t2)
		{
			printf("A febre manteve");
		}
		else if (t1 < t2)
		{
			printf("A febre subiu");
		}
		else
		{
			printf("A febre baixou");
		}
	}
	else
	{
		printf("Temperatura corporal normal");
	}
	return 0;
}