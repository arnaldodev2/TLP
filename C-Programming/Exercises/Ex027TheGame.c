#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
	char *caixa[6] = {"Moedas+100P", "Diamantes+200P", "Pocao Magica+50P", "Nothing", "Monstro-100P", "Armadilha-50P"}, q;
	int  p = 0, show, p1[6] = {100, 200, 50, 0, -100, -50};
	do
	{
		printf("Uma caixa encontrada, Quer abrir ou sair?[A/S]\n");
		scanf_s(" %c", &q);
		if(q == 'a' || q =='A')
		{
			show = rand() % 6;
			printf("Encontrado: %s\n", caixa[show]);
			p += p1[show];
		}
	}while(q != 'S' && q != 's');
	return 0;
}