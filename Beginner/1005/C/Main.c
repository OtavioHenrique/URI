#include <stdio.h>
#include <stdlib.h>

float A,B;


int main (int argc, char *argv[]){
	

scanf ("%f", &A);
scanf ("%f", &B);
 	
double MEDIA = (((A*3.5f) + (B*7.5f)) / 11);

if (MEDIA > 10.00000){
	
printf ("MEDIA = %f\n", 10.00000);
	
}else {
	
	printf ("MEDIA = %.5f\n", MEDIA);
		
	
}
	
	return 0;
	
}