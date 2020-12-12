#include <stdlib.h>
#include <stdio.h>
void yqc();
int main()
{
    yqc();
    return 0;
}

void  yqc()
{
int n1=0, n2=0;
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    printf("Ingrese un numero: ");
    scanf("%d", &n2);
    system ("cls");
    printf("%d \n%d\n", n1, n2);
}
