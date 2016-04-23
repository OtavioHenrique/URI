#include <stdio.h>
#include <stdlib.h>
 

 
int main(int argc, char *argv[]) {
  
  int x[10];
  int i;

  for (i=0;i<10;i++){
   
    scanf("%d", &x[i] );
   
  }

  for (i=0;i<10;i++){
   
   if (x[i] <= 0 ) x[i] = 1;
   
  }

  for (i=0;i<10;i++){
   
    printf("X[%d] = %d\n" , i ,x[i] );
   
  }

  return 0;
}