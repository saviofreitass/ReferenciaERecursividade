#include <iostream>

using namespace std;

int somatorio(int n){

    if(n<=0) return -1;

    if(n==1) return 1;

    int soma = somatorio(n-1)+n;

    return soma;
}

int main(){

    int valor;

    cout << "Digite ate qual valor voce deseja realizar o somatorio: ";
    cin >> valor;

    int soma = somatorio(valor);

    if(soma == -1){
        cout << "ERROR";
    }else{
        cout << "O somatorio de 1 a " << valor << " eh: " << soma;
    }

    cout << "\n\n";

    system("pause");

return 0;
}
