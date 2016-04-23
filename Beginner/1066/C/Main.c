#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_result (int *valores){
	int i;
	int neg=0, pos=0, imp=0, par=0;
	for (i=0; i < 5; i++){
		
		int num = *(valores+i);
		if ( num == 0){
			
			pos = pos;
			
		}
		else if (num >= 0){
			
			pos = pos + 1;
			
		} 
		else {
			
			neg = neg + 1;
			
		}
		if (num%2 == 0){
			
			par = par + 1;
			
		}
		else {
			
			imp = imp + 1;
			
		}
		
		
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", imp);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);
	
}

int main(int argc, char *argv[]) {
	int i,j;
	int *valores = malloc (sizeof(int)*5);
	
	for (i=0; i < 5; i++){
		
		scanf("%d", valores+i);
	}
	
	print_result(valores);

	return 0;
}