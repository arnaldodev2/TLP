#include <stdio.h>
#include <locale.h> 
int main()
{
	float l, w, l2, c, c1;
	//setlocale(LC_ALL, ""); -> it doesn't work, i don't know why
	printf("Qual e a capacidade maxima do aquario?[Em litros]\n");
	scanf_s("%f", &l);
	printf("Quantos litros de agua tem no aquario?\n");
	scanf_s("%f", &w);
	printf("Quantos litros de agua e fornecido por minuto?");
	scanf_s("%f", &l2);
	c = l - w;
	c1 = c * 1 / l2;
	printf("Faltam %.2f litros para o aquario encher!\nO aquario vai encher totalmente em %.0f minuto(s))", c, c1);
	
	return 0;
}