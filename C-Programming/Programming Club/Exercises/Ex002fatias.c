#include <stdio.h>
int main()
{
	int n, m, c;
	printf("Por quantoas pessoas e constituida a sua familia incluindo a ti proprio?\n");
	scanf("%d", &m);
	printf("Quantas fatias tem o bolo?\n");
	scanf("%d", &n);
	c = n / m;
	if (n < m || n <= 0)
	{
		printf("Nao ha fatias suficientes!");
	}
	printf("Para que cada elemento da sua familia receba o mesmo numero de fatias, podes no maximo dar %d fatias", c);
	return 0;
}