#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Los numeros son iguales." << endl;
    } else {
        cout << "Los numeros no son iguales." << endl;
    }

    return 0;
}

