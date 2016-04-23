#include <iostream>
#include <iomanip> 
 #include <math.h>
 
using namespace std;
 
int main() {
 
double volume;
int raio;

cin >> raio;
 volume = (4.0/3.0) * 3.14159 * pow(raio,3);
 
 cout <<fixed<<setprecision(3)<< "VOLUME = " <<volume<<endl;


    return 0;
}