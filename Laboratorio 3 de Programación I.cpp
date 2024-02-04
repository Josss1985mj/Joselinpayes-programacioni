//Joseline Vanessa Payes 5090-23-14071
#include <iostream>
#include <cmath>

// Función para realizar operaciones aritmeticas y operadores de relación
void operacionesAritmeticas(int num1, int num2) {
    // Realiza operaciones aritmeticas basicas
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    double division = static_cast<double>(num1) / num2;

    // Mostrar resultados de operaciones aritméticas
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion << std::endl;
    std::cout << "Division: " << division << std::endl;

    // Operadores de relación
    std::cout << num1 << " es mayor que " << num2 << ": " << (num1 > num2) << std::endl;
    std::cout << num1 << " es menor que " << num2 << ": " << (num1 < num2) << std::endl;
    std::cout << num1 << " es igual a " << num2 << ": " << (num1 == num2) << std::endl;
}

// Función para calcular la potencia de un número
double calcularPotencia(double base, int exponente) {
    // Verifica si el exponente es cero o negativo
    if (exponente >= 0) {
        // Calcula y devuelve la potencia
        return pow(base, exponente);
    } else {
        // Maneja el caso del exponente negativo
        std::cout << "Exponente debe ser un numero positivo" << std::endl;
        return -1; // Valor de error
    }
}

// Función para determinar si un numero es primo
bool esPrimo(int numero) {
    // Verifica si el número es mayor que 1
    if (numero > 1) {
        // Verifica divisibilidad por números menores
        for (int i = 2; i <= sqrt(numero); ++i) {
            if (numero % i == 0) {
                // Si es divisible, no es primo
                return false;
            }
        }
        // Si no es divisible por ninguno, es primo
        return true;
    } else {
        // Si es 1 o menor, no es primo
        return false;
    }
}

// Función para determinar si un año es bisiesto
bool esBisiesto(int year) {
    // Verifica si el año es bisiesto
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int opcion;
    int num1, num2;
    double base;
    int exponente;
    int num;
    int year;

    do {
        // Menú de opciones
        std::cout << "\nMenu de Opciones" << std::endl;
        std::cout << "1. Realizar operaciones aritmeticas y operadores de relacion" << std::endl;
        std::cout << "2. Calcular potencia de un numero" << std::endl;
        std::cout << "3. Determinar si un numero es primo" << std::endl;
        std::cout << "4. Determinar si un año es bisiesto" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese dos numeros enteros: ";
                std::cin >> num1 >> num2;
                operacionesAritmeticas(num1, num2);
                break;
            case 2:
                std::cout << "Ingrese la base y el exponente para calcular la potencia: ";
                std::cin >> base >> exponente;
                std::cout << "Resultado de la potencia: " << calcularPotencia(base, exponente) << std::endl;
                break;
            case 3:
                std::cout << "Ingrese un número para verificar si es primo: ";
                std::cin >> num;
                std::cout << "¿El número es primo?: " << (esPrimo(num) ? "Si" : "No") << std::endl;
                break;
            case 4:
                std::cout << "Ingrese un año para verificar si es bisiesto: ";
                std::cin >> year;
                std::cout << "¿El año es bisiesto?: " << (esBisiesto(year) ? "Si" : "No") << std::endl;
                break;
            case 5:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción no valida. Intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

