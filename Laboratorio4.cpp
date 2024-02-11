//Joseline Vanessa Payes 5090-23-14071
#include <iostream>
#include <cmath>

using namespace std;

// Declaración de funciones
double realizarOperacion(double num1, double num2, char operador);
void imprimirResultado(double resultado);

int main() {
    int cantidadOperaciones;
    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;

    for (int i = 0; i < cantidadOperaciones; ++i) {
        double num1, num2;
        char operador;

        cout << "Ingrese el primer numero, el operador y el segundo numero: ";
        cin >> num1 >> operador >> num2;

        double resultado = realizarOperacion(num1, num2, operador);
        imprimirResultado(resultado);
    }

    return 0;
}

// Función para realizar operaciones matematicas
double realizarOperacion(double num1, double num2, char operador) {
    double resultado;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: división por cero" << endl;
                resultado = NAN; // Valor NaN (Not a Number)
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = fmod(num1, num2);
            } else {
                cout << "Error: módulo por cero" << endl;
                resultado = NAN; // Valor NaN (Not a Number)
            }
            break;
        default:
            cout << "Operador no valido" << endl;
            resultado = NAN; // Valor NaN (Not a Number)
    }
    return resultado;
}

// Función para imprimir el resultado
void imprimirResultado(double resultado) {
    if (!isnan(resultado)) {
        cout << "El resultado es: " << resultado << endl;
    }
}
