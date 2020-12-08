#include <stdio.h>
#include <stdlib.h>

	void area();
	void perimetro();
	int total(int n, int n1, int ar, int per);

		int main( ) {
			int n=0,n1=0,resul=0;
			printf(" Ingrese un numero ");
			scanf("%d",&n);
			printf(" Ingrese otro numero ");
			scanf("%d",&n1);
			area(n,n1);
			perimetro(n,n1);
		}

	void area(int n, int n1)
	{
		int ar=0;
		ar=n*n1;
		printf("\n El area de los dos numeros es : %d ",ar);
	}

	void perimetro(int n, int n1)
	{
		int per=0;
		per=(2*n)+(2*n1);
		printf("\n El perimetro de los dos numeros es : %d",per);
	}
