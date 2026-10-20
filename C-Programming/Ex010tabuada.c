#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_All, "Portuguese");
	int n;
	printf("Digite um numero para ver a sua tabuada:");
	scanf("%d", &n);
	for(n = 0; n =< 10; n++)
}