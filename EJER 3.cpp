#include <iostream>
using namespace std;

void imprimirPares() {
    cout << "Numeros pares del 2 al 20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void tablaMultiplicar() {
    int num;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void sumaPares() {
    int n, suma_pares = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        suma_pares += i;
    }
    cout << "La suma de los numeros pares hasta " << n << " es: " << suma_pares << endl;
}

void calcularFactorial() {
    int n, factorial = 1;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << n << " es: " << factorial << endl;
}

void imprimirPrimos() {
    cout << "Números primos del 1 al 50:" << endl;
    for (int i = 2; i <= 50; i++) {
        bool es_primo = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                es_primo = false;
                break;
            }
        }
        if (es_primo) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void serieSumaSucesiva() {
    int n, sum = 0;
    cout << "Ingrese un numero para la serie: ";
    cin >> n;
    for (int i = 1; sum + i <= n; i++) {
        sum += i;
        cout << sum << " ";
    }
    cout << endl;
}

void fibonacci() {
    int a = 0, b = 1, temp;
    cout << "Primeros 10 terminos de Fibonacci:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

void sumaNaturales() {
    int suma_naturales = 0;
    for (int i = 1; i <= 100; i++) {
        suma_naturales += i;
    }
    cout << "La suma de los primeros 100 numeros naturales es: " << suma_naturales << endl;
}

void divisoresNumero() {
    int n;
    cout << "Ingrese un numero para encontrar sus divisores: ";
    cin >> n;
    cout << "Los divisores de " << n << " son: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void primerosPrimos() {
    cout << "Primeros 10 numeros primos:" << endl;
    int contador = 0, num_primo = 2;
    while (contador < 10) {
        bool es_primo = true;
        for (int j = 2; j * j <= num_primo; j++) {
            if (num_primo % j == 0) {
                es_primo = false;
                break;
            }
        }
        if (es_primo) {
            cout << num_primo << " ";
            contador++;
        }
        num_primo++;
    }
    cout << endl;
}

int main() {
    int opcion;
    do {
        cout << "\nMENU:\n";
        cout << "1. Numeros pares del 2 al 20\n";
        cout << "2. Tabla de multiplicar\n";
        cout << "3. Suma de numeros pares hasta n\n";
        cout << "4. Factorial de un numero\n";
        cout << "5. Numeros primos del 1 al 50\n";
        cout << "6. Serie 1, 3, 6, 10, 15, ..., n\n";
        cout << "7. Primeros 10 terminos de Fibonacci\n";
        cout << "8. Suma de los primeros 100 numeros naturales\n";
        cout << "9. Divisores de un numero\n";
        cout << "10. Primeros 10 numeros primos\n";
        cout << "11. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: imprimirPares(); break;
            case 2: tablaMultiplicar(); break;
            case 3: sumaPares(); break;
            case 4: calcularFactorial(); break;
            case 5: imprimirPrimos(); break;
            case 6: serieSumaSucesiva(); break;
            case 7: fibonacci(); break;
            case 8: sumaNaturales(); break;
            case 9: divisoresNumero(); break;
            case 10: primerosPrimos(); break;
            case 11: cout << "Saliendo...\n"; break;
            default: cout << "Opcion no valida, intente de nuevo.\n";
        }
    } while(opcion != 11);
    
    return 0;
}
