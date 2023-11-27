#include <stdio.h>
#include <math.h>

//Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior.
char maiorNumero(int x, int y){
    //variavel
    char maiorNumero;

    if(x > y){
        maiorNumero = 'x';
    } else{
        maiorNumero = 'y';
    }

    return maiorNumero;
}


int main(){
    //variaveis para receber dados
    int x, y;
    char resultado;

    scanf("%d %d", &x, &y);

    resultado = maiorNumero(x, y);

    printf("%c", resultado);

    return 0;
}