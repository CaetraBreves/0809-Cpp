#include <iostream>
using namespace std;

int main()
{
    const int total = 5;
    int vet[total], count = 0, vetNaoRepetido[total];
    bool ver = false;

        for (int i = 0; i < total; i++)
        {
        cout << i << " Insira um valor: " << endl;
        cin >> vet[i];
        }

        cout << "--------------------" << endl;
    for (int i = 0; i < total; i++)
    {
    bool repetido = false;
        for (int j = i + 1; j < total && repetido == false; j++)
        {
            if (vet[i] == vet[j]) {
            repetido = true;
            }
        }

        if (repetido == false) {
        vetNaoRepetido[count] = vet[i];
        count++;
        }


        }

        cout << "Este e o array sem os repetidos: " << endl;
        for (int i = 0; i < count; i++) {
        cout << vetNaoRepetido[i] << endl;

        }
}
