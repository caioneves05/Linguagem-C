//Aprendendo a usar a estrutura do switch, que funciona como um conjunto de if's
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero entre 1 e 7\n");
    scanf("%d",&numero);
    switch(numero){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("O número digitado está fora do Range (entre 1 e 7) pedido.");
            break;
    }
    printf("\n\n\n\n");
    system("PAUSE");
    
    return 0;
}