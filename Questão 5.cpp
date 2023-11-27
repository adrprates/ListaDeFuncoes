#include <stdio.h>

/*
Crie uma função capaz de determinar a soma dos n primeiros termos de uma P.A. A soma
dos n primeiros termos de uma P.A. é definida pela fórmula a seguir: 

Sn = n∗(a1+an)/2;

É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n.
*/
int somaPA(int a1, int an, int n){
    int sn;
    
    sn = (n * (a1+an)) / 2;

    return sn;
}
int main(){
    int a1, an, n;
    int soma;

    //É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n.
    scanf("%d %d %d", &a1, &an, &n);
    
    soma = somaPA(a1, an, n);

    printf("%d", soma);

    return 0;
}