#include <iostream>
#include <stdio.h>
#include <iomanip> 

double salary (int hours, int number) {
  return hours * number;
}

using namespace std;

int main () {
  int employee, hours, number;
 	
	cin>>employee>>hours>>number;
	
	cout<<"NUMBER = "<<employee<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary(hours, number)<<endl;
		
	return 0;
}
