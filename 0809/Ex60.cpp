#include <iostream>
using namespace std;

int main()
{
    int vet[4];
    int maior=0, pmaior=0, menor=9999999, pmenor=0;

        for (int i = 0; i < 5; i++)
        {
            cout << "insira o valor: " << i << endl;
            cin >> vet[i];

            if (vet[i] > maior)
            {
                maior= vet[i];
                pmaior =i;
            }
            if (vet[i] < menor) {
            
                menor = vet[i];
                pmenor= i;
            }
            

        }
        cout<< "a maior posicao " << pmaior << endl;
        cout <<"a menor posicao " << pmenor << endl;
        


}