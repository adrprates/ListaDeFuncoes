#include <stdio.h>

//Crie uma função capaz de receber 3 números a, b e c e retornar quantos são pares.
int numerosPares(int a, int b, int c){
    int cont = 0;

    if(a % 2 == 0){
        cont++;
    }

    if(b % 2 == 0){
        cont++;
    }

    if(c % 2 == 0){
        cont++;
    }

    return cont;
}

int main(){
    //variaveis para receber dados
    int a, b, c;
    int numPares;

    scanf("%d %d %d", &a, &b, &c);

    //chamando função
    numPares = numerosPares(a, b, c);

    printf("%d", numPares);

    return 0;
}