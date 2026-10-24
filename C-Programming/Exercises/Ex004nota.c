#include <stdio.h>
int main()
{
	float n;
	printf("Digite a sua nota[0 a 20]: ");
	scanf_s("%f", &n);
	if (n < 9.5)
	{
		printf("Reprovado, estud mais!\n");

	}
	else {
		printf("Aprovado, god job!\n");
	}

	return 0;
}