#include <stdio.h>
 
void print_result (){
	int num;
	scanf("%d", &num);
	
	if (num%2 == 0 && num > 0) {
		
		printf("EVEN POSITIVE\n");
		
	}
	
	if (num%2 == 0 && num < 0) {
		
		printf("EVEN NEGATIVE\n");
		
	}
		
	if (num%2 != 0 && num < 0) {
		
		printf("ODD NEGATIVE\n");
		
	}
	if (num%2 != 0 && num > 0) {
		
		printf("ODD POSITIVE\n");
		
	}
	if (num == 0){
		
		printf("NULL\n");
		
	}
	
} 
 
int main() {
 
    int K;
    int i;
    scanf("%d", &K);
    
    for (i = 0; i < K; i++){
    	
    	print_result();
    	
    	
	}
 
    return 0;
}