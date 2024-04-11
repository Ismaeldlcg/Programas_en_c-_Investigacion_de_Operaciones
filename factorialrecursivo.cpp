/*
- Autor: Ismael De La Cruz Gomez.
- Fecha: 11/04/2024.
- Este codigo representa el resultado del factorial de cualquier numero dado excepto los negativos,
  este es un codigo de factorial recursivo y solo nos muesta el resultado. Hay un apartado en el
  cual se muestra el factorial simple este esta hecho con el bucle for.
*/

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero, a = 1;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Factorial recursivo. " << endl;

    if(numero < 0) {
        cout << "El factorial no esta definido para numeros negativos.";
    } else {
        cout << "El factorial de " << numero << " es: " << factorial(numero);
    }

    cout<<endl;
    cout << "Factorial simple con bucle for. " << endl;
    for(int i = 1; i <= numero; i++){
        a *= i;
        cout << i;
        if(i <= numero - 1)
            cout << " * ";
    }
    cout << endl;
    cout << "factorial: " << a;

    return 0;
}
