#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
double A,B,C,P,area;

cin>>A>>B>>C;

 area=((A+B)*C)/2;
   P=A+B+C;
   if (A>0 && B>0 && C>0 && A<B+C && B<A+C && C<A+B)
   {      

cout<<fixed<<setprecision(1) <<"Perimetro = "<<P<<endl;

}
 else 
 {
 	
 	cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
 	
 }
 
    return 0;
}