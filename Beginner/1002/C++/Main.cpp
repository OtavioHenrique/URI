#include <iostream>
#include <iomanip>

using namespace std;


	double radius;
    double area;


int main () {
	
	cin>>radius;
	
	
	area = 3.14159 * (radius*radius);
	
	cout<<fixed<<setprecision(4)<<"A="<<area<<endl;
	
	
	
}