#include <iostream>
#include <iomanip> 
 #include <math.h>
 
using namespace std;
 
int main() {
 
double A,B,C,triangulo,esfera,trapezio,quadrado,retangulo;


cin >> A >> B >> C;
 triangulo = (A*C)/2;
 esfera =  3.14159 * pow(C,2);
 trapezio = C *(B+A) / 2;
 quadrado = B*B;
 retangulo = A*B; 
 
 cout <<fixed<<setprecision(3)<< "TRIANGULO: " <<triangulo<<endl;
  cout <<fixed<<setprecision(3)<< "CIRCULO: " <<esfera<<endl;
   cout <<fixed<<setprecision(3)<< "TRAPEZIO: " <<trapezio<<endl;
    cout <<fixed<<setprecision(3)<< "QUADRADO: " <<quadrado<<endl;
     cout <<fixed<<setprecision(3)<< "RETANGULO: " <<retangulo<<endl;
 


    return 0;
}