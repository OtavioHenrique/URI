#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h> 

double totalSalary (double totalSales, double salary) {
  return ((totalSales*15)/100) + salary;
}

using namespace std;

int main () {
  string employee;
  double totalSales, salary;

	cin>>employee>>salary>>totalSales;
	
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<totalSalary(totalSales, salary)<<endl;
	
	return 0;
}
