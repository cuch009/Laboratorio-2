#include <iostream>

using namespace std;

int main() {
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un anio bisiesto." << endl;
    } else {
        cout << anio << " no es un anio bisiesto." << endl;
    }

    return 0;
}

