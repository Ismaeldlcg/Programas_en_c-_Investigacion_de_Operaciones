/*
- Autor: Ismael De La Cruz Gomez.
- Fecha: 11/04/2024.
- Este codigo representa la sumatoria de i, por ejemplo si le indicamos que i = 3 y n = 10
  nos imprime la suma de los numeros de i hasta n --> (3 + 4 + 5 + 6 + 7 + 8 + 9 + 10), el
  cual nos daria como resultado 52.
*/

#include <iostream>

using namespace std;

int main()
{
    int sumari = 0, a, n;
    cout << "Ingrese el i inicial: ";
    cin >> a;
    cout << "Ingrese el n final: ";
    cin >> n;

    for (int i = a; i <= n; i++){
        sumari += i;
        cout << i;
        if(i <= n - 1){
            cout << " + ";
        }
    }
    cout << endl;
    cout << "La sumatoria de i: " << sumari << endl;

    return 0;
}
