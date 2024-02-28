#include <iostream>

bool esPrimo(int numero);

int main() {
  int numero;
  std::cout << "Escribe un numero:\n";
  std::cin >> numero;
  if (esPrimo(numero)) {
    std::cout << "Es primo";
  } else {
    std::cout << "NO es primo";
  }
}

bool esPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }

  return true;
}