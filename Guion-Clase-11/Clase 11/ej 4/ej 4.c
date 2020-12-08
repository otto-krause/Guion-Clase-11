#include <stdio.h>
#include <stdlib.h>


	void pres(float f, float s);

	int main() {
	float s=0,f=0;
	printf(" Ingrese la fuerza ");
	scanf("%f",&f);
	printf(" Ingrese la superficie ");
	scanf("%f",&s);
	pre (f,s);
	}

	void pres(float f, float s){
	float pres=0;
	pres=f/s;
	printf("La presion es = %f ",pres);
	}
