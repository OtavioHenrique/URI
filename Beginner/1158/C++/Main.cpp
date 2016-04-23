#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

	int N,X,Y,I,R,T;
	cin>>N;
	for(I=0;I<N;I++) {
		cin>>X>>Y;
		if(X%2==1) {
			for(T=0;T<Y;T++) {
				R+=X;
				X+=2;
			}
		}
		else{
			X=X+1;
			for(T=0;T<Y;T++) {
				R+=X;
				X+=2;
			}
		}
		cout<<R<<endl;
		X=0;
		Y=0;
		R=0;
		T=0;
	}


	system ("PAUSE");
	return 0;
}