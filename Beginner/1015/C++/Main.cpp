#include <iostream>
#include <math.h>
#include <iomanip>     


using namespace std;
 
int main() {
 
double x1,y1,x2,y2,D,P1,P2,P3;

cin >>x1>>y1;
cin >>x2>>y2;

P1 = x2-x1;
P2 = y2-y1;

P3 = (P1*P1) + (P2*P2);
D = sqrt (P3);

cout<<fixed<<setprecision(4)<<D<<endl;




    return 0;
}