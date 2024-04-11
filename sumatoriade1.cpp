/*
- Autor: Ismael De La Cruz Gomez.
- Fecha: 11/04/2024.
- Este codigo representa la sumatoria de unos, por ejemplo si le indicamos que i = 1 y n = 5
  nos imprime la suma de los cincos unos (1 + 1 + 1 + 1 + 1) el cual seria igual a 5.
*/

#include <iostream>

using namespace std;

int main()
{
    int sumarunos = 0, a, n;
    cout << "Ingrese el i inicial: ";
    cin >> a;
    cout << "Ingrese el n final: ";
    cin >> n;

    for (int i = a; i <= n; i++){
        sumarunos += 1;
        cout << " 1 ";
        if(i <= n - 1){
            cout << " + ";
        }
    }
    cout << endl;
    cout << " La sumatoria de unos es:  " << sumarunos << endl;

    return 0;
}