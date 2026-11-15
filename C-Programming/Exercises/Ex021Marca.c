#include <stdio.h>
int main()
{
	int marca;
	char *carro[3] = { "Ferrari", "Mercedes", "Tesla" };
	char question = 'n';
	do
	{
		printf("Qual carro quer ver?[0 a 2]\n");
		scanf_s("%d", &marca);
		if (marca < 0 || marca > 2)
			printf("Opcao invalida, tente novamente\n");
		else
			printf("%s\n", carro[marca]);
			//getchar();
		printf("Deseja sair?[s/n]");
		scanf_s("%s", &question);
	} while (question == 'n');
	return 0;
}