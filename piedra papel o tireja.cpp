#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int selecciona, numero,cont_1=0,cont_2=0;
	cout<<"|-------------------JUEGO PIEDRA,PAPEL-------------------|";

do{
	srand(time(0));
	
    cout<<("\nSelecciona una opcion: |1. Piedra | 2. Papel 3. | Tijera |\n");
    cin >> selecciona;
	numero = (rand()%2)+1;
	//numero es la PC
	if(selecciona==2 && numero==1) {
		cout << "|-------------------------GANASTE------------------------|";
		cont_1++;
	} else if(selecciona==3 && numero==2) {
		cout << "|-------------------------GANASTE------------------------|";
		cont_1++;
	} else if(selecciona==1 && numero==3) {
		cout << "|-------------------------GANASTE------------------------|";
		cont_1++;
	} else if(selecciona==numero){
		cout << "|-------------------------EMPATE-------------------------|";
	} else {
    	cout << "|-------------------------PERDISTE------------------------|";
    	cont_2++;
	}
	cout<<endl<<"|---------------------------"<<cont_1<<"-"<<cont_2<<"---------------------------|";
	if (cont_1 == 2|| cont_2== 2){
		cout<<"\n|-----------------------DEFINICIÓN------------------------|"<<endl;
	}
}while(cont_1 <3 && cont_2<3);
	return 0;
}