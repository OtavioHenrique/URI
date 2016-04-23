#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h> 

using namespace std;


   int funcionario;
  double SALARY;
  double NUMBER;
   int HORAS;
int main () {
	
	cin>>funcionario>>HORAS>>NUMBER;
	
	
	  SALARY = HORAS * NUMBER;
	
	cout<<"NUMBER = "<<funcionario<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<SALARY<<endl;
	
	
	return 0;
}