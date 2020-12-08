#include <stdio.h>
#include <stdlib.h>

	void teca ();

	int main() {
	int n1,n2;
	printf(" Ingrese un numero : ");
	scanf("%d",&n1);
	printf(" Ingrese otro numero : ");
	scanf("%d",&n2);
	teca(n1,n2);
	}

	void teca(int n1, int n2){
		if (n1>n2) {
			printf(" %d Es mayor que %d ",n1,n2);
		}else if(n2>n1){
			printf(" %d Es mayor que %d ",n2,n1);
		} else{
			printf(" %d Es igual que %d ",n1,n2);
		}

	}
