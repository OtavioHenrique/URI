#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void write_numbers(int *seq){
	int i;
	for (i=0; i < 3; i++){
		
		scanf("%d", seq+i);
		
	}
}

void ordenate (const int *seq, int *number){
	int i,j,z;
	int aux;
	int k = 3;
	for (z=0; z < 3; z++){
		
	 *(number+z) = *(seq+z);
		
	}
	
	
	for (i=0; i < 3; i++){
		
		for (j=0; j <k-1 ; j++){
			
			if ( *(number+j) > *(number+j+1)){
				
				aux = *(number+j);
				*(number+j) = *(number+j+1);
				*(number+j+1) = aux;
			}
			
		}	
		k--;
	}

}
int main(int argc, char *argv[]) {
	int i,j;
	int *number = malloc (sizeof(int)*3);
	int *seq = malloc (sizeof(int)*3);
	
	write_numbers(seq);
	
	ordenate (seq, number);
	
	
			for (j=0; j < 3; j++){
		
		printf("%d\n", *(number+j));
		
	}	

	puts("");
	
	for (i=0; i < 3; i++){
		
		printf("%d\n", *(seq+i));
		
	}

	return 0;
}