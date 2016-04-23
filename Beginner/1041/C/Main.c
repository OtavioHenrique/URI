#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float X,Y;

int main (int argc, char *argv[]){
	
	 scanf ("%f%f", &X,&Y);
	
if (X > 0 && Y > 0){
	
	printf ("Q1\n");
	
}
if (X > 0 && Y < 0){
	
	printf ("Q4\n");
	
}

if (X < 0 && Y > 0){
	
		printf ("Q2\n");
	
}

if (X < 0 && Y < 0){
	
		printf ("Q3\n");
	
}

if (X == 0 && Y == 0){
	
		printf ("Origem\n");
	
}
	
if (X == 0 && Y > 0 ) {
	
		printf ("Eixo Y\n");
	
}
		
if (X == 0 && Y < 0 ) {
	
		printf ("Eixo Y\n");
	
}

if (X < 0 && Y == 0 ) {
	
		printf ("Eixo X\n");
	
}

if (X > 0 && Y == 0 ) {
	
		printf ("Eixo X\n");
	
}
	
	return 0;
	
}