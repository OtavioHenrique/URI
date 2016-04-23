#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int z, x, v2, i;

int main () {

	cin>>x>>z;


	while ( x >= z ){

		cin>>z;

	}

	v2 = 0;
	i= 0;

	while (v2 < z ) {
		i+=1;
		x+=1;
		v2 = v2 +x;
	}

	cout<<i<<endl;

}
