#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main (){
	int A,B,C,X;


	do {
		cin>>A;
		if(A!=0){
			cin >> B >> C;

			X =floor(sqrt (100 * A * B / C));
			cout << X << endl;
		}
	} while (A!=0);




	return 0;
	}

