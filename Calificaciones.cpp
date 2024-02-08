#include <iostream>

using namespace std;

int main() {
    int calificacion;

    cout << "Ingrese su calificacion: ";
    cin >> calificacion;

    if (calificacion >= 60) {
        cout << "Felicitaciones, usted ha aprobado el examen." << endl;
    } else {
        cout << "Lo siento, usted ha reprobado el examen." << endl;
    }

    return 0;
}

