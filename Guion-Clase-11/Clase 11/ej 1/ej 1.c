#include <stdio.h>
#include <stdlib.h>

void yqc();
int total(int num1, int num2);
  void main( ) //función de tipo void.
  {
    yqc();
    //return 0;
  }
void yqc()
{
int num1=0,num2=0;
printf("\n Ingrese un numero ");
scanf("%d",&num1);
printf("\n Ingrese un numero ");
scanf("%d",&num2);
printf("\n El primer numero ingresado es :  %d \n El segundo numero ingresado es : %d",num1,num2);
}
