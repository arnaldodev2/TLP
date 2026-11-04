#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int n = rand() % 1000 + 1, p, c = 0;
	do
	{
		printf("Vou pensar em um numero [Entre 1 e 1000], tente advinhar!!\n");
		printf("Em qual numero eu pensei?:\n");
		scanf_s("%d", &p);
		c = c + 1;
		if (n == p)
		{
			printf("Voce acertou na %dª tentativa! GOOD BOY", c);
		}
		else
		{
			printf("Errou, try again\n");
			printf("Pensei no numero %d\n", n);
		}
	} while (p != n);
	return 0;
}
