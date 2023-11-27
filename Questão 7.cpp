#include <stdio.h>

/*
Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor
número.
*/

int somaNumeros(int a, int b, int c){
    int menor, maior, soma;

    if(a > b){
        maior = a;
        menor = b;
    } else{
        maior = b;
        menor = a;
    }

    if(c > maior){
        maior = c;
    } else if(c < menor){
        menor = c;
    }

    soma = maior + menor;

    return soma;
}

int main(){
    int a, b, c;
    int soma;

    scanf("%d %d %d", &a, &b, &c);

    soma = somaNumeros(a, b, c);

    printf("%d", soma);

    return 0;
}