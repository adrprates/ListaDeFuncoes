#include <stdio.h>

/*
Faça uma função que receba um número positivo e imprima todos os seus divisores.
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

void divisoresNum(int numero){
    for(int i = 1; i <= numero; i ++){
        if(numero % i == 0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int numero;

    scanf("%d", &numero);

    divisoresNum(numero);
    
    return 0;
}