#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "Menu de opciones:" << endl;
        cout << "1. Imprimir numeros del 1 al 20" << endl;
        cout << "2. Imprimir numeros desde 1 hasta N" << endl;
        cout << "3. Sumar numeros positivos hasta ingresar un negativo" << endl;
        cout << "4. Generar secuencia de Fibonacci hasta N" << endl;
        cout << "5. Sumar numeros hasta superar 100" << endl;
        cout << "6. Imprimir numeros pares hasta N" << endl;
        cout << "7. Calcular media de numeros ingresados" << endl;
        cout << "8. Ingresar numeros hasta ingresar 0" << endl;
        cout << "9. Imprimir los primeros 10 numeros naturales y su cuadrado" << endl;
        cout << "10. Calcular producto de los primeros 10 numeros naturales" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        
        if (opcion == 1) {
            int i = 1;
            while (i <= 20) {
                cout << i << " ";
                i++;
            }
            cout << endl;
        }
        else if (opcion == 2) {
            int n, i = 1;
            cout << "Ingrese un numero: ";
            cin >> n;
            while (i <= n) {
                cout << i << " ";
                i++;
            }
            cout << endl;
        }
        else if (opcion == 3) {
            int num, suma = 0;
            cout << "Ingrese numeros positivos (negativo para detenerse): ";
            while (true) {
                cin >> num;
                if (num < 0) break;
                suma += num;
            }
            cout << "Suma total: " << suma << endl;
        }
        else if (opcion == 4) {
            int n, a = 0, b = 1, c;
            cout << "Ingrese un numero: ";
            cin >> n;
            while (a <= n) {
                cout << a << " ";
                c = a + b;
                a = b;
                b = c;
            }
            cout << endl;
        }
        else if (opcion == 5) {
            int suma = 0, num;
            cout << "Ingrese numeros hasta que la suma supere 100: ";
            while (suma <= 100) {
                cin >> num;
                suma += num;
            }
            cout << "Suma total: " << suma << endl;
        }
        else if (opcion == 6) {
            int n, i = 2;
            cout << "Ingrese un numero: ";
            cin >> n;
            while (i <= n) {
                cout << i << " ";
                i += 2;
            }
            cout << endl;
        }
        else if (opcion == 7) {
            int num, suma = 0, count = 0;
            cout << "Ingrese numeros (0 para calcular media): ";
            while (true) {
                cin >> num;
                if (num == 0) break;
                suma += num;
                count++;
            }
            if (count > 0) cout << "Media: " << (double)suma / count << endl;
            else cout << "No se ingresaron numeros." << endl;
        }
        else if (opcion == 8) {
            int num;
            cout << "Ingrese numeros (0 para salir): ";
            while (true) {
                cin >> num;
                if (num == 0) break;
            }
        }
        else if (opcion == 9) {
            int i = 1;
            while (i <= 10) {
                cout << i << "^2 = " << i * i << endl;
                i++;
            }
        }
        else if (opcion == 10) {
            int i = 1, producto = 1;
            while (i <= 10) {
                producto *= i;
                i++;
            }
            cout << "Producto de los primeros 10 numeros naturales: " << producto << endl;
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

