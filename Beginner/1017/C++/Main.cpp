#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
 double T , D,DT;
 double F;
 
 cin>>T>>D;
 
 DT = T*D;
 
 F = DT/12;
 

cout<<fixed<<setprecision(3)<<F<<endl;
 
    return 0;
}