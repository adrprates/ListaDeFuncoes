#include <stdio.h>
#include <math.h>

//função para receber números
int delta(int a, int b, int c){
    //variavel com valor de delta
    int valorDelta;

    valorDelta = (pow(b,2)) - 4 * a * c;

    return valorDelta;
}



int main (){
    //variaveis para receber dados
    int a, b, c;
    int valorDelta;

    scanf("%d %d %d", &a, &b, &c);

    valorDelta = delta(a,b,c);

    printf("%d", valorDelta);


    return 0;
}