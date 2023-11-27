#include <stdio.h>

/*
Supondo um empréstimo no valor de c Reais, por m meses a juros de t% ao mês, crie
uma função capaz de descobrir os juros cobrados nesse empréstimo. A fórmula para
cálculo dos juros simples é a que se segue: j = c ∗ m ∗ t.
*/

double jurosEmprestimo(double c, int m, double t){
    double juros;

    juros = c * m * t;

    return juros;
}


int main(){
    double c, t, juros;
    int m;

    scanf("%lf %d %lf", &c, &m, &t);

    juros = jurosEmprestimo(c, m, t);

    printf("%.2lf", juros);

    return 0;
}