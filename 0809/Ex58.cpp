#include <iostream>
using namespace std;

int main()
{
int nota[9];
int  count=0, sum=0;
double media=0;

    for (int i = 0; i <= 9; i++)
    {
        cout << "insira a nota do aluno: " << i << endl;
        cin >> nota[i];
        sum = nota[i]+sum;
        count++;
        
        
    }
    media= sum/count;
    cout << "a media dos alunos todos e de: " << media << endl;
    


}