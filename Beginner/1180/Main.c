#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, y, z, mn, aux, pos;
	float x;

	scanf ("%d", &y);
	int *n = malloc(sizeof(int)*y);

	for (j=0; j<y; j++){
        scanf ("%d", n+j);
		z = *(n+j);
		if (z < mn){
			mn = z;
			pos = j;
		}
	}
	printf ("Menor valor: %d\n", mn);
	printf ("Posicao: %d\n", pos);
	system ("PAUSE");
	return 0;
}
