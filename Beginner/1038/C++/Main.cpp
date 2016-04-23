#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int qtd, A;
double valor;

int main() {

cin>>A>> qtd;
if (A== 1){
	valor = qtd * 4.00;
	cout<<fixed<<setprecision(2)<<"Total: R$ "<<valor<<endl;
}
if ( A == 2){
valor = qtd * 4.50;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<valor<<endl;
}

if (A == 3){
valor = qtd * 5.00;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<valor<<endl;
}
if (A == 4){
valor = qtd * 2.00;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<valor<<endl;
}
if (A == 5){
valor = qtd * 1.50;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<valor<<endl;
}

system("Pause");
return 0;
}