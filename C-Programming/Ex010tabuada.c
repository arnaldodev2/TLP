#include <stdio.h>
#include <locale.h>
int main()
{
	//setlocale(LC_All, "Portuguese");
	int n, i;
	printf("Digite um numero para ver a sua tabuada:");
	scanf_s("%d", &n);
	for (i = 1; i <= 10; i++)
	printf("%d X %d = %d\n", n, i, n * i);
	return 0;
}
