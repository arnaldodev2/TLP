#include <stdio.h>
#include <time.h>
#include <locale.h>
int main()
{
	//setlocale(LC_ALL, "");
	srand(time(NULL));
	int n = rand() % 1000 + 1, p, c = 0;
		printf("Vou pensar em um numero [Entre 1 e 1000], tente advinhar!!\n");
		do
		{
			printf("Em qual numero eu pensei?:\n");
			scanf_s("%d", &p);
			c = c + 1;
			if (n == p)
			{
				printf("Voce acertou na %d tentativa! GOOD BOY", c);
			}
			else
			{
				if (p < n)
				{
					printf("Errou, o numero que pensei e maior\n");
				}
				else if (p > n)
				{
					printf("Errou, o numero que pensei e menor\n");
				}
				
			}
		} while (p != n);
	return 0;
}
