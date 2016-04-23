#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
 
  int produt1, produt2, qtd1,qtd2;
  double valor1,valor2,valorf,valorp1,valorp2;
  
  
  cin >> produt1 >> qtd1 >> valor1;
  cin >> produt2 >> qtd2 >> valor2;
  
  
  
  valorf = (qtd1*valor1) + (qtd2*valor2);
  
  cout <<fixed<<setprecision(2)<< "VALOR A PAGAR: R$ " << valorf << endl;
  
  
  
    return 0;
}