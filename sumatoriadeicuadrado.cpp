/*
- Autor: Ismael De La Cruz Gomez.
- Fecha: 11/04/2024.
- Este codigo representa la sumatoria de i cuadrado (i*i), por ejemplo si le indicamos que i = 5 y n = 10
  nos imprime la suma de los cuadrados de i hasta n --> (25 + 36 + 49 + 64 + 81 + 100), el cual nos daria
  como resultado 355.
*/

#include <iostream>

using namespace std;

int main()
{
    int sumai = 0, a, n;
    cout << "Ingrese el i inicial: ";
    cin >> a;
    cout << "Ingrese el n final: ";
    cin >> n;

    for (int i = a; i <= n; i++){
        sumai += i * i;
        cout << i * i;
        if(i < n ){
            cout << " + ";
        }
    }
    cout << endl;
    cout << "La suma de cuadrados consecutivos es: " << sumai << endl;

    return 0;
}
