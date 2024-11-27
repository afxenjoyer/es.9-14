#include <stdio.h>
#include <stdbool.h>
#include "retteperp.h"

int main(void)
{
    float m1;
    float m2;
    bool verifica;

    printf("Inserisci m1\n");
    scanf("%f", &m1);
    printf("Inserisci m2\n");
    scanf("%f", &m2);

    verifica = RettePerpendicolari(m1, m2);
    if (verifica == true)
        printf("Le rette sono perpendicolari\n");
    else
        printf("La rette non sono perpendicolari\n");

    return 0;
}
