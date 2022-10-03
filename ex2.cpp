#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int anodenascimento;
	int anoatual;
	int idade;
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);
	
	printf("Digite a sua idade: ");
	scanf("%d0", &idade);
	anodenascimento = anoatual - idade;
	printf("Oi, voce nasceu  em %d e voce possui %d anos\n",anodenascimento, idade);
	system("PAUSE");
	return 0;
}
