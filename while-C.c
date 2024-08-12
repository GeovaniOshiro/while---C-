#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b;
	printf("Digite um numero >>");
	scanf("%d",&a);
	printf("digite o segundo numero >>");
	scanf("%d",&b);
	
	while (a < b)
	{
		printf("Intervalo dos numeros %d\n",a);
		a = a + 1;
	}
	printf("Tentativa invalida !");
	return 0;
}