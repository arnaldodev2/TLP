/*É o aniversário do Ricardo. Como tal,
 a sua família comprou-lhe um bolo com N fatias iguais para todos comerem.
 O Ricardo é um rapaz justo, por isso quer que cada elemento da sua família coma o mesmo número de fatias.
 Além disso, o Ricardo não quer dividir nenhuma das fatias, como tal cada fatia só pode ser comida por no máximo uma única pessoa. 
 Sabendo que a família do Ricardo tem M (incluindo o Ricardo) elementos,
 qual o máximo número de fatias que o Ricardo pode dar a cada um para que todos comam o mesmo número de fatias?*/
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