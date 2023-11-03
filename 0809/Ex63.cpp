#include <iostream>
using namespace std;

int main()
{

    int vet[9], vet2[9], num=0;

    for (int i = 0; i < 10; i++)
    {
        
        
        cout << "insira um numero de 0-50: " << endl;
        cin >> num;
        if (num >=0 && num <=50)
        {
            vet[i] = num;

                if (vet[i]%2 == 1)
                {
                    vet2[i] = num;
                }
                
        }else{
            do
            {
                cout << "insira um numero valido" << endl;
                cin >> num;
            } while (num <0 || num >50);
            
                
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Os numeros do vetor: " << vet[i] << endl;   
    }
    for (int i = 0; i < 10; i++)
    {
        if (vet2[i] >0)
        {
        cout << "Os numeros impares do vetor: " << vet2[i] << endl;
        }
    }
    
    



}