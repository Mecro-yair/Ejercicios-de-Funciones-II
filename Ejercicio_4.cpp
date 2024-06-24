#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    double a, b, c;
    cout<<"DIGITE LOS COEFICIENTES DE LA ASIGUIENTE ECUACCION CUADRATICA"<<endl;
    cout<<"\nax² + bx + c = 0\n";

    cout << "\nIngrese el coeficiente a: ";cin >> a;
    if (a == 0) {
        cout << "\nEl coeficiente 'a' no puede ser cero en una ecuación cuadrática." << endl;
        return 1;
    }
    cout << "\nIngrese el coeficiente b: ";cin >> b;
    cout << "\nIngrese el coeficiente c: ";cin >> c;
    




    double Discriminante = pow(b,2)- 4 * a * c;

    if (Discriminante > 0) {

        double x1 = (-b + sqrt(Discriminante)) / (2 * a);
        double x2 = (-b - sqrt(Discriminante)) / (2 * a);
        cout << "\nLas soluciones son reales y diferentes:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (Discriminante == 0) {
        
        double x = -b / (2 * a);
        cout << "\nLas soluciones son reales e iguales:" << endl;
        cout << "x = " << x << endl;
    } else {

        double Parte_R = -b / (2 * a);
        double Parte_I = sqrt(-Discriminante) / (2 * a);
        cout << "\nLas soluciones son complejas y conjugadas:\n" << endl;
        cout << "x1 = " << Parte_R << " + " << Parte_I << "i" << endl;
        cout << "x2 = " << Parte_R << " - " << Parte_I << "i" << endl;
        cout<<"\nDonde:\n\n1.Parte Real es : "<<Parte_R<<"\n2.Parte Imaginaria es : "<<Parte_I<<"i"<<endl;
    }

    return 0;
}
