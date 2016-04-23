#include <iostream>
 
using namespace std;
 
int main() {
 
   int VL,N100,N50,N20,N10,N5,N2,N1;
   int S100,S50,S20,S10,S5,S2,S1;

cin >> VL;

N100 = VL / 100;
S100 = VL%100;
N50 = S100 / 50;
S50 = S100 % 50;
N20 = S50 / 20;
S20 = S50 % 20;
N10 = S20 / 10;
S10 = S20 % 10;
N5 = S10 / 5;
S5 = S10 % 5;
N2 = S5 / 2;
S2 = S5 % 2;
N1 = S2/1;

cout <<VL<<endl;
cout <<N100<<" nota(s) de R$ 100,00"<<endl;
cout <<N50<<" nota(s) de R$ 50,00"<<endl;
cout <<N20<<" nota(s) de R$ 20,00"<<endl;
cout <<N10<<" nota(s) de R$ 10,00"<<endl;
cout <<N5<<" nota(s) de R$ 5,00"<<endl;
cout <<N2<<" nota(s) de R$ 2,00"<<endl;
cout <<N1<<" nota(s) de R$ 1,00"<<endl;

 
    return 0;
}