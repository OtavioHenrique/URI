#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
int T,S,H,M,RH,RT,RM;
 
 cin >> T;
 

 S = T%60;
 M = T/60;
 RM = M%60;
 
 H = M/60;
 
 
 
 

 cout<<H<<":"<<RM<<":"<<S<<endl;
 
    return 0;
}