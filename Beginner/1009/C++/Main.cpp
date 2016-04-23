#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h> 

using namespace std;


   string funcionario;
  double SALARYF;
  double TTLVENDAS;
   double SALARY;
int main () {
	
	cin>>funcionario>>SALARY>>TTLVENDAS;
	
	
	  SALARYF = (TTLVENDAS*15/100) + SALARY; 
	
	
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<SALARYF<<endl;
	
	
	return 0;
}