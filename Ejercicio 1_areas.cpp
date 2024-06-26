#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
float  radio;
//funcion double
double area(int x){
	double pi=M_PI;
	float area;
	area = pi * pow(x,2);
	return area; 
}
//funcion void
void escribir(){
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Digite el radio para conseguir el área:\n"; cin>>radio;
	cout<<"El area del circulo es "<<area(radio);
}
//funcion principal
int main(){
	escribir();
	return 0;
}