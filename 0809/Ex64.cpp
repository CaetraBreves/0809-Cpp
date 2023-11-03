#include <iostream>
using namespace std;

int main()
{
    int vet[9], vet2[9];

    for (int i = 0; i < 10; i++)
    {
       cout << "insira um numero" << endl;
       cin >> vet[i];
       vet2[i] = vet[i];

        if (vet2[i] <0)
        {
            vet2[i] =1;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
      cout << "O vetor normal: " << vet[i] << endl;
    }
    for (int i = 0; i < 10; i++)
    {
      cout << "O vetor com a regra: " << vet2[i] << endl;
    }
    
    


}