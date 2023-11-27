#include <stdio.h>

/*
Faça uma função capaz de receber dois números a e b, onde o primeiro sempre é menor
que o segundo, e calcula a soma dos números pares compreendidos entre os dois números
lidos.
*/

int somaNumeros(int a, int b){
    int soma = 0;

    for(int i = a; i < b; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }

    return soma;
}
int main(){
    int a, b;
    int soma;

    scanf("%d %d", &a, &b);

    soma = somaNumeros(a, b);

    printf("%d", soma);
    
    return 0;
}