#include <stdlib.h>
#include <stdio.h>

void FuezaYsuperficie();

int main()
{
    FuerzaYsuperficie();
    return 0;
}

void FuerzaYsuperficie()
{
    int alt, bas, A=0, F=0;
    float  pres=0;
    printf("ingrese la altura y la base de la superficie:\n");
    scanf("%d \n%d", &alt, &bas);
    A=alt*bas;
    printf("Ingrese la fuerza: ");
    scanf("%d", &F);
    pres=F/A;
    printf("La presion de la superficie es de: %.1f\n", pres);
}
