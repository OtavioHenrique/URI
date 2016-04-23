#include <stdio.h>
#include <stdlib.h>

float A,B,C;


int main (int argc, char *argv[]){
	

scanf ("%f", &A);
scanf ("%f", &B);
scanf ("%f", &C);
 	
double MEDIA = (((A*2) + (B*3) + (C*5))  / 10);

if (MEDIA > 10.0){
	
printf ("MEDIA = %f\n", 10.0);
	
}else {
	
	printf ("MEDIA = %.1f\n", MEDIA);
		
	
}
	
	return 0;
	
}