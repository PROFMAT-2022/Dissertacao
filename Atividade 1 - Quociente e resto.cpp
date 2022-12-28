#include <stdio.h>

main(){
	int A, B;
	printf("\n\n Determinando o quociente e o resto da divisão de A por B \n\n");
	printf(" Digite o valor de A: ");
	scanf("%i",&A);
	printf(" Digite o valor de B: ");
	scanf("%i",&B);
	printf("\n\n O quociente vale %i e o resto vale %i",A/B,A%B);
}