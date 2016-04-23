#include <iostream>
#include <iomanip> 
 #include <math.h>
 
using namespace std;
 
int main() {
 
int idade,ano,mes,rano,rmes;

cin >> idade;

ano = idade/365;
rano = idade % 365;
mes = rano / 30;
rmes = rano % 30;

cout <<ano<<" ano(s)"<<endl;
cout <<mes<<" mes(es)"<<endl;
cout <<rmes<<" dia(s)"<<endl;



}