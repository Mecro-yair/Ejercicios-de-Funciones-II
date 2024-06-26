#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float hipotenusa,cateto1,cateto2;
	cout<<"Digite un cateto del triangulo rectangulo:\n"; cin>>cateto1;
	cout<<"Digite el otro cateto del triangulo rectangulo:\n"; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout <<"La Hipotenusa es "<<hipotenusa;
	return 0;
}