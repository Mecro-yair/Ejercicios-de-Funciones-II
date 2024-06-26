#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int maximo_De_aleatorios,cant_De_aleatorios;
	
	srand(time(NULL));
	cout << "Digite la Cantidad de números aleatorios: \n";cin >> cant_De_aleatorios;
	cout << "Digite el Número máximo de número aleatorio(desde 0 ¿hasta?): \n";cin >> maximo_De_aleatorios;
	cout <<endl;
	for(int i = 0; i < cant_De_aleatorios ; i++) {
		
		if (i+1==cant_De_aleatorios){
			cout <<rand() % maximo_De_aleatorios;
		}else{
			cout <<rand() % maximo_De_aleatorios <<" , ";
		}
	}
	
	return 0;
}