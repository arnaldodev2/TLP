#include<stdio.h>

#include<locale.h>
 
int main(void)

{

	setlocale(LC_ALL, "");

	int p1, fatias,p2,p3;

	printf("Numero de pessoas: ");

	scanf_s("%d", &p1);

	printf("Numero de fatias: ");

	scanf_s("%d", &fatias);

	p3 = fatias / p1;

	p2 = fatias % p1;

	if (p1 > fatias)

	{

		printf("Não há fatias suficientes");

	}

	else

	{

		printf("há fatias suficientes %d por pessoa\n", p3);

		printf("Sobram %d fatias", p2);

	}

	return 0;

}
 
