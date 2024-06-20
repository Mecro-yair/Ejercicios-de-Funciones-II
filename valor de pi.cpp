#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
double area(int x){
	double pi=M_PI;
	float area ;
	area = pi * pow(x,2);
	return area; 
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	float  radio;
	cout<<"Digite el radio para conseguir el área:\n"; cin>>radio;
	cout<<"El area del circulo es "<<area(radio);
	return 0;
}