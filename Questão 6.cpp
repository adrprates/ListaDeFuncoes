#include <stdio.h>

/*
Faça uma função capaz de receber dois números b e h que representam os lados de um
retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo.
*/

int formaGeometrica(int b, int h){
    int forma;

    if(b == h){
        forma = 1;
    } else{
        forma = 0;
    }

    return forma;
}
int main(){
    int b, h;
    int forma;

    scanf("%d %d", &b, &h);

    forma = formaGeometrica(b, h);
    
    printf("%d", forma);

    return 0;
}