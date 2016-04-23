#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

double a;

int main() {

cin>>a;
if(a>=0 and a<=100)
{
if (a >= 0 && a <= 25.0000){
	cout<<"Intervalo [0,25]"<<endl;
}
if (a >= 25.00001 && a <= 50.0000000) {
    	cout<<"Intervalo (25,50]"<<endl;
	}
if (a >= 50.0000001 && a <= 75.0000000 ){
    cout<<"Intervalo (50,75]"<<endl;
}
if (a >= 75.0000001 && a <= 100.0000000){
    cout<<"Intervalo (75,100]"<<endl;
}
}
else{

 cout<<"Fora de intervalo"<<endl;

}
system("Pause");
return 0;
}