#include <stdio.h>

//Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1
//a n.
void numeroQualquer(int n){
    //laço para imprimir numero
    for(int i = 1; i <= n; i++){
        printf("%d", i);
        printf("\n");
    }
}

int main(){
    //variavel para receber dado
    int n;

    scanf("%d", &n);

    //chamando função
    numeroQualquer(n);

    return 0;
}