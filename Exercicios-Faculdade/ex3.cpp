#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1, nota2, nota3, media = 0;
	printf("Primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 +nota3)/3;
	
	printf("A media das 3 notas e: %f", media);
	return 0;
}