#include <iostream>
#include <iomanip> 
 #include <math.h>
 
using namespace std;
 
int main() {
 
int A,B,C;

cin >> A >> B >> C;

if ( A > B && A > C)
{
	
	cout <<A<<" eh o maior"<<endl;
	
}
if (B > A && B > C){
	
	
	cout <<B<<" eh o maior"<<endl;
	
}
if (C > A && C > B) {
	
	cout<<C<<" eh o maior"<<endl;
	
}


    return 0;
}