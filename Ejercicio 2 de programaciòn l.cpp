//Joseline Vanessa Payes 509023-14071
#include <iostream>
#include <locale.h>
#include <cstdlib> // Para la función system("pause")
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ""); // Utilizando la función setlocale para establecer la localización predeterminada

    bool salir = false;
    int eleccion = 0;

    do
    {
        cout << "1) Numero par o impar" << endl;
        cout << "2) Bisiesto" << endl;
        cout << "3) Numeros iguales" << endl;
        cout << "4) Mayor o menor de edad" << endl;
        cout << "5) Aprobado o reprobado" << endl;
        cout << "6) Salir" << endl;

        cout << "\nElige el numero de ejercicio a realizar: ";
        cin >> eleccion;

        switch (eleccion)
        {
            case 1:
            {
                int numero;
                cout << "\nIngrese un numero: ";
                cin >> numero;

                if (numero % 2 == 0)
                {
                    cout << "El numero " << numero << " es par.\n\n";
                }
                else
                {
                    cout << "El numero " << numero << " no es par.\n\n";
                }
                break;
            }

            case 2:
            {
                int anio;
                cout << "Ejercicio 2) \n Crea un programa que determine si un año ingresado es bisiesto o no." << endl;
                cout << "\n Ingresa un año:" << endl;

                cout << "Introduce año: ";
                cin >> anio;

                if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
                {
                    cout << "Este año es bisiesto.\n\n";
                }
                else
                {
                    cout << " Este año no es bisiesto.\n\n";
                }
                break;
            }

            case 3:
            {
                int num1, num2;
                cout << "Ejercicio 3) \n Desarrolla un programa que solicite al usuario dos numeros y determine si son iguales." << endl;
                cout << "\nIngrese el primer numero:" << endl;
                cin >> num1;
                cout << "\nIngrese el segundo numero:" << endl;
                cin >> num2;

                if (num1 == num2)
                {
                    cout << "Los numeros son iguales.\n\n";
                }
                else
                {
                    cout << "Los numeros no son iguales.\n\n";
                }
                break;
            }

            case 4:
            {
                int edad;
                cout << "Ejercicio 4) \n Realiza un programa que pida al usuario su edad y verifique si es mayor de edad (18 años o más)." << endl;
                cout << "\nIngresa tu edad:" << endl;
                cin >> edad;
                if (edad >= 18)
                {
                    cout << "Usted es mayor de edad. \n\n";
                }
                else if (edad < 18)
                {
                    cout << "Usted es menor de edad. \n\n";
                }
                break;
            }

            case 5:
            {
                int nota;
                cout << "Ejercicio 5) \n Implementa un programa que evalue si un estudiante aprobó un examen, considerando que la calificación de aprobación es 60 o más" << endl;
                cout << "\nIngrese la nota: ";
                cin >> nota;
                if (nota >= 0 && nota <= 100)
                {
                    if (nota >= 60)
                    {
                        cout << "El estudiante ha aprobado.\n\n";
                    }
                    else
                    {
                        cout << "El estudiante ha reprobado.\n\n";
                    }
                }
                else
                {
                    cout << "Nota inválida. Ingrese una nota entre 0 y 100.\n\n";
                }
                break;
            }

            case 6:
                salir = true;
                break;

            default:
                cout << "Opción invalida." << endl;
                break;
        }

    } while (!salir);

    cout << "FIN DE PROGRAMA" << endl;
    system("pause"); // Pausa la ejecución del programa antes de finalizar
    return 0;
}
