#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main() {

    float d;
    Ponto *p, *q;

    p = Ponto_cria(10, 21);
    q = Ponto_cria(7, 25);

    d = Ponto_distancia(p, q);

    float x, y;

    printf("-----------------------------------------\n");
    Ponto_acessa(p, &x, &y);
    printf("Ponto P: %f, %f\n", x, y);

    Ponto_acessa(q, &x, &y);
    printf("Ponto Q: %f, %f\n", x, y);
    printf("-----------------------------------------\n");

    printf("Distancia entre pontos: %f \n", d);
    printf("-----------------------------------------\n");

    Ponto_libera(p);
    Ponto_libera(q);
    return 0;
}
