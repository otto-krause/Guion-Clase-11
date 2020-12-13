#include <stdlib.h>
#include <stdio.h>
int h, m;
void Porcen();

int main()
{
    Porcen();
    return 0;
}

void Porcen()
{
    int porH=0, porM=0;
    printf("Ingrese la cantidad de hombres que enviaron su curricular ");
    scanf("%d", &h);

    printf("Ingrese la cantidad de mujeres que enviaron su curricular ");
    scanf("%d", &m);

    porH=h*100/(h+m);
    porM=m*100/(m+h);
    printf("El porcentaje de hombres que enviaron su curricular es de %d y el de mujeres de %d ", porH, porM);
}
