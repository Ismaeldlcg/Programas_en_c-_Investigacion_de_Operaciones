/*
- Autor: Ismael De La Cruz Gomez.
- Fecha: 11/04/2024.
- Este codigo representa la secuencia de fibonacci, n = 10 el resultado seria (0, 1, 1, 2, 3, 5, 8, 13, 21, 34), esta secuencia
  empieza desde la posicion que le damos a i en este ejemplo la secuencia empieza en la posicion 4, en el cual se encuentra el 2.
*/

#include <iostream>

using namespace std;

int main() {
    int n, x = 0, y = 1, z = 0;
    cout << "Ingrese hasta el digito que quiera la secuencia: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i < n) {
            cout << z << ", ";
        } else {
            cout << z;
        }
        x = y;
        y = z;
        z = x + y;
    }
    
    return 0;
}
