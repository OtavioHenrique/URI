#include <stdio.h>
void compare_payment(float s,int *percent){
	
	if (s <= 400.00){
		
		*percent = 15;
		
		
	}
	if (s >= 400.01 && s <=800.00){
		
		*percent = 12;
		
		
	}
	if (s >= 800.01 && s <= 1200.00){
		
		*percent = 10;
	
		
	}
		if (s >= 1200.01 && s <= 2000.00){
		
		*percent = 7;
	
	}
		if (s > 2000.00){
		
		*percent = 4;
		
	}
	
}

float gain_adjustment (float s, int percent){
	
	float gain;
	float salary = s;
	float percen = percent;
	gain = percen/100 * salary;
	 
	return gain;
}

float final_salary (float s, float gain_salary){
	
	float final;
	final = s + gain_salary;
	return final;
}

int main() {

    float s, new_salary,gain_salary;
	int percent;
	percent = 0;
    scanf("%f", &s);
    compare_payment(s, &percent);
    gain_salary = gain_adjustment(s, percent);
    new_salary = final_salary (s, gain_salary);
    
    printf("Novo salario: %.2f\n", new_salary);
   	printf("Reajuste ganho: %.2f\n", gain_salary);
	printf("Em percentual: %d %%\n", percent);
	
	

    return 0;
}