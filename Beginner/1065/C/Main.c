#include <stdio.h>
 
int main() {
 
    int values[5];
    int i,pares,aux;
    pares = 0;
    for (i=0; i<5; i++){
	
	scanf("%d", &values[i]);
	
	}
	
	for (i=0; i <5; i++){
		
		aux = values[i]%2;
		
		if (aux == 0){
		
		pares += 1;
		
		}
		
	}
	
	printf("%d valores pares\n", pares);
	
    
    return 0;
}