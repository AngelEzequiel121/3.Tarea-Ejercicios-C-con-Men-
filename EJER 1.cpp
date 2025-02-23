#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); //para reconocer la ñ
    int opcion;
    do {
        cout << "Menu de opciones:" << endl;
        cout << "1. Verificar numero positivo/negativo/cero" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Encontrar el mayor de tres numeros" << endl;
        cout << "4. Determinar si un año es bisiesto" << endl;
        cout << "5. Determinar si una letra es vocal o consonante" << endl;
        cout << "6. Verificar si un numero es primo" << endl;
        cout << "7. Verificar si un año de nacimiento es valido" << endl;
        cout << "8. Verificar si un numero es multiplo de 5 y 7" << endl;
        cout << "9. Determinar calificacion en letra" << endl;
        cout << "10. Calcular precio con descuento" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        
        if (opcion == 1) {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            if (num > 0) {
                cout << "El numero es positivo" << endl;
            } else if (num < 0) {
                cout << "El numero es negativo" << endl;
            } else {
                cout << "El numero es cero" << endl;
            }
        }
        else if (opcion == 2) {
            int num;
            cout << "Ingrese un numero: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << "El numero es par" << endl;
            } else {
                cout << "El numero es impar" << endl;
            }
        }
        else if (opcion == 3) {
            int a, b, c;
            cout << "Ingrese tres numeros: ";
            cin >> a >> b >> c;
            if (a >= b && a >= c) {
                cout << "El mayor es: " << a << endl;
            } else if (b >= a && b >= c) {
                cout << "El mayor es: " << b << endl;
            } else {
                cout << "El mayor es: " << c << endl;
            }
        }
        else if (opcion == 4) {
            int anio;
            cout << "Ingrese un año: ";
            cin >> anio;
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
                cout << "Es un año bisiesto" << endl;
            } else {
                cout << "No es un año bisiesto" << endl;
            }
        }
        else if (opcion == 5) {
            char letra;
            cout << "Ingrese una letra: ";
            cin >> letra;
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                cout << "Es una vocal" << endl;
            } else {
                cout << "Es una consonante" << endl;
            }
        }
        else if (opcion == 0) {
            cout << "Saliendo..." << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }
    } while (opcion != 0);
    
    return 0;
}

