#include <stdio.h>
#include <math.h>

/*
Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da
equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se
não tiver raiz, imprima não existem raízes.
*/

void raizes(int a, int b, int c){
    double delta = 0, r1 = 0, r2 = 0;

    delta = ((pow(b,2)) - 4 * a * c);

    r1 = (((-b) + sqrt(delta)) / 2 * a);
    r2 = (((-b) - sqrt(delta)) / 2 * a);

    if(delta > 0){
        printf("Duas raizes distintas:\n");
        printf("%lf\n%lf\n", r1, r2);
    } else if(delta == 0){
        printf("Uma raiz real:\n");
        printf("%lf\n", r1);
    } else{
        printf("Nao existem raizes reais.\n");
    }

}

int main(){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    //chamando função
    raizes(a, b, c);

    return 0;
}