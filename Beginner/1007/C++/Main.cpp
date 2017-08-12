#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h> 

int difference (int A, int B, int C, int D) {
  return ((A * B) - (C * D));
}

using namespace std;

int main () {
	 int A, B, C, D;

	cin>>A>>B>>C>>D;
	
	cout<<"DIFERENCA = "<<difference(A,B,C,D)<<endl;
	
}
