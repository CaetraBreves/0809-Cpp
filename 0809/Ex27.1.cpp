#include <iostream> 

using namespace std;  

int main(){
    int num[9];
 
  int d, f;
 
  for(int i = 0; i<= 9; i++){
      cout << "insira o numero: " << i << endl;
      cin >> num[i];
      if (num[i] >=10 && num[i] <=20) {
          ++d;
      }else{
          f++;
      }
  }
  cout << "Os numeros que estão dentro do intervalo são: " << d << endl;
  cout << "Os numeros que estão fora do intervalo são: " << f << endl;
 
}


