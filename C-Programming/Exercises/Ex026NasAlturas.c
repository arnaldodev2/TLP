#include <stdio.h>
int main()
{
	int altura[30], age[30], c, count = 0, adder = 0;
	float average;
	for (c = 0; c < 3; c++)
	{
		printf("Digite a sua idade:\n");
		scanf_s("%d", &age[c]);
		printf("How tall are you?:");
		scanf_s("%d", &altura[c]);
		adder += altura[c];
	}
	average = adder / 30;
	for (c = 0; c < 3; c++)
	{
		if (age[c] < 13 && altura[c] < average)
			count += 1;
	}
	printf("Ha %d alunos com mais de 13 anos e com altura abaixo da media", count);
}