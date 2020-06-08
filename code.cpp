#include <iostream>
using namespace std;


int main(){
    int denominador;
         cout << "Vou calcular múltiplos de um número de sua escolha abaixo de 1000" << endl << "Qual é ele ?" << endl;
            cin >>  denominador;
                cout << "Aqui estão os múltiplos" << endl;
                    for(int x = 1000 ; x >= 1 ; x--){
                            if(x % denominador == 0){
                                cout << x << endl;
                            }
                    }
            
        




        
}