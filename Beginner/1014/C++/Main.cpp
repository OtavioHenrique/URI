#include <iostream>
#include <iomanip> 
 #include <math.h>
 
using namespace std;
 
int main() {
 
int X;
float Y;
double consumo;

cin >> X >> Y;

consumo = X/Y;

cout << fixed<<setprecision(3)<<consumo<<" km/l" <<endl;

}