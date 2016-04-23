#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

double a,b,c,delta,r1,r2;

int main() {
cin>>a>>b>>c;

delta = (b*b)-4*a*c;
if (delta > 0 and a!=0 ){
	
	r1 = (-b + sqrt(delta)) / (2.0 * a);
    r2 = (-b - sqrt (delta)) / (2.0 * a);

cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;
}
else {
 
 	cout<<"Impossivel calcular"<<endl;
}




system("Pause");
return 0;
}
