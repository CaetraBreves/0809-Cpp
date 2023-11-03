#include <iostream>
using namespace std;

int main()
{
    int vet[9], cVet=0, maior=0, count=0,lixo=0;;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " Insira um valor: " << endl;
        cin >> vet[i];

    }
    cout << "--------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        count=0;
        for (int j = 0; j < 10; j++)
        {
         if(vet[i] == vet[j]){               
                count++;
                 
                if (count ==2)
                {
                
                cout << "os numeros repetidos: "  << vet[i] << endl;
                }
                
            }
        }
    }
}