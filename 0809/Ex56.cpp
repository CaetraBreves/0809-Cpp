#include <iostream>
using namespace std;

int main()
{

    int vet[15], pm[7], sm[7], vet2[15];

    for (int i = 0; i < 16; i++)
    {
        cout << "insira o valor " << i << endl;
        cin >> vet[i];
    }
    for (int i = 0; i < 8; i++)
    {
        pm[i] = vet[i];
        cout << pm[i] << endl;
    }
     for (int i = 7; i < 16; i++)
    {
        sm[i] = vet[i];
        
    }
    for (int i = 0; i < 16; i++)
    {
        
        if (i <=8)
        {
            vet2[i] = pm[i];
            
        }
    }
    for (int i = 7; i < 16; i++)
    {
       if (i >8)
        {
            vet2[i] = pm[i];
        }
    }
        
        
        

    for (int i = 0; i < 16; i++)
    {
        
        cout << "A nova posicao do " << i << " e " << vet2[i] << endl;
    }
    
    
    
    
    

}
