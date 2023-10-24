#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int opcion;
    double numero, resultado;

    cout << "CALCULADORA\n";
    cout << "1. Suma\n";
    cout << "2. Raiz cuadrada\n";
    cout << "3. Cuadrado\n";
    cout << "4. Cubo\n";
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "Ingrese dos numeros para sumar:\n";
            cin >> numero >> resultado;
            resultado = numero + resultado;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            cout << "Ingrese un numero para calcular su raiz cuadrada:\n";
            cin >> numero;
            resultado = sqrt(numero);
            cout << "La raiz cuadrada de " << numero << " es: " << resultado << endl;
            break;
        case 3:
            cout << "Ingrese un numero para calcular su cuadrado:\n";
            cin >> numero;
            resultado = pow(numero, 2);
            cout << "El cuadrado de " << numero << " es: " << resultado << endl;
            break;
        case 4:
            cout << "Ingrese un numero para calcular su cubo:\n";
            cin >> numero;
            resultado = pow(numero, 3);
            cout << "El cubo de " << numero << " es: " << resultado << endl;
            break;
        default:
            cout << "Opcion invalida\n";
            break;
    }

    return 0;
}

