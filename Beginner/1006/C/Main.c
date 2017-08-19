#include <stdio.h>
#include <stdlib.h>

double average (float A, float B, float C) {
  return (((A*2) + (B*3) + (C*5))  / 10);
}

int main (int argc, char *argv[]){
	
  float A,B,C;

  scanf ("%f", &A);
  scanf ("%f", &B);
  scanf ("%f", &C);

  if (average(A,B,C) > 10)
    printf ("MEDIA = %f\n", 10.0);
  else 
  	printf ("MEDIA = %.1f\n", average(A,B,C));
	
	return 0;
}
