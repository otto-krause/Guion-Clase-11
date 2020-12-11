#include <stdlib.h>
#include <stdio.h>
void FuerzaYsuperficie (float n1,float n2);
 int main ()//Idem ejercicio anterior.
 {
     float n1,n2;
     FuerzaYsuperficie( n1, n2);
     return 0;
 }
 void FuerzaYsuperficie (float f,float s)
 {
     float Presion=0;

    printf ("Ingrese la fuerza ");
    scanf ("%f",&f);
    printf ("Ingrese la superficie ");
    scanf ("%f",&s);
    Presion=f/s;
    system ("cls");
    printf ("La presion aplicada sobre la superficie es %2.f",Presion);
 }
