#include <iostream>
using namespace std;

int main()
{
    int val[5];

    for (int i = 0; i < 6; i++)
    {
        cout << "insira o numero " << i << endl;
        cin >> val[i]; 
    }
    for (int i = 5; i >= 0; i--)
    {
        cout << val[i] << endl;
    }
    
    



}