#include <iostream>

using namespace std;

int main(){

    int numero;
do {
cout << "insira um numero maior que 10: " << endl;
cin >> numero;
} while (numero < 10);


if (numero >= 10) {
cout << "estes numeros sao pares: " << endl;
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
        cout << i << endl;

        }
    }
}
}
