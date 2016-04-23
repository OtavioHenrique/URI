#include <stdio.h>
#include <stdlib.h>



void divisors (int K){
	int number = K;
	int i;
	int rest = 0;
	for (i = 0; i < 10000; i++){
		
		rest = i % number;
		
		if (rest == 2){
			
			printf("%d\n", i);
			
		}
	}	
	
}

int main(int argc, char *argv[]) {
	
	
	int K;
	
	scanf("%d", &K);
	
	divisors(K);
	
}