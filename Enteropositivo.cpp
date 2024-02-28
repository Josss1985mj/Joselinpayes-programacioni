#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "El numero ingresado no es positivo." << std::endl;
        return 1;
    }
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    std::cout << "La suma de los numeros enteros desde 1 hasta " << n << " es: " << suma << std::endl;
    return 0;
}
