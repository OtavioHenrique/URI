#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int resp,resp2,resp3;
	char palavra1 [20];
	char palavra2 [20];
	char palavra3[30];
	
	scanf("%s", &palavra1);
	scanf("%s", &palavra2);
	scanf("%s", &palavra3);
	
	resp = strcmp(palavra1, "vertebrado");
	
	if ( resp == 0){
		
		resp2 = strcmp (palavra2, "ave");
		
		if (resp2 == 0){
			
			resp3 = strcmp (palavra3, "carnivoro");
			
			if (resp3 == 0){
				
				printf("aguia\n");
				
			}
			else {
				
				printf("pomba\n");
				
			}
		}
			
			else {
				
					resp3 = strcmp (palavra3, "onivoro");
			
			if (resp3 == 0){
				
				printf("homem\n");
				
			}
			else {
				
				printf("vaca\n");
				
			}
				
			}
			
		}	
		
		else {
			
			
			resp2 = strcmp (palavra2, "inseto");
			
			if (resp2 == 0){
				
				
				resp3 = strcmp (palavra3, "hematofago");
				
				if ( resp3 == 0){
					
					printf("pulga\n");
					
				}
				else {
					
					printf ("lagarta\n");
					
				}
				
				
			}
			else {
				
				
				resp3 = strcmp (palavra3, "hematofago");
				
				if ( resp3 == 0){
					
					printf ("sanguessuga\n");
					
				}
					else {
					
					printf ("minhoca\n");
					
				}
				
				
			}
			
			
		}
		
		
	
	
}