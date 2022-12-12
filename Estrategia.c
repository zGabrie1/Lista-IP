#include<stdio.h>

int main() {
    
    int a_soldados, a_tanques, a_avioes, a_misseis;
    int i_soldados, i_tanques, i_avioes, i_misseis;
    int R_soldados, R_tanques, R_avioes, R_misseis;
    int aliados, inimigos, reforcos, x, y, w, z;
    scanf("%i %i %i %i\n", &a_soldados, &a_tanques, &a_avioes, &a_misseis);
    scanf("%i %i %i %i\n", &i_soldados, &i_tanques, &i_avioes, &i_misseis);
    scanf("%i %i %i %i", &R_soldados, &R_tanques, &R_avioes, &R_misseis);
    aliados = a_soldados + a_tanques + a_avioes + a_misseis;
    reforcos = R_soldados + R_tanques + R_avioes + R_misseis;
    inimigos = i_soldados + i_tanques + i_avioes + i_misseis + reforcos;
    x = inimigos/2;
    w = aliados/2;
    y = aliados - inimigos;
    z = inimigos - aliados;
    printf("%i %i\n", z, w);
    if(y > x) {
        printf("Avancar");
    } else if(z > w) {
        printf("Recuar");
    } else {
        printf("Permanecer");
    }
    return 0;
}