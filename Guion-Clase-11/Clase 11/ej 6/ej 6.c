#include <stdio.h>
#include <stdlib.h>


	void oct(float n);

	int main() {
	float n=0;
	printf(" Ingrese un numero ");
	scanf("%f",&n);
	oct(n);
	}

	void oct (float n){
		float res=0;
		res=n/8;
		printf(" La octava parte del numero %f es %f ",n,res);
	}
