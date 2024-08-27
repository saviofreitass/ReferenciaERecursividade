#include <iostream>

using namespace std;

int fibonacciRecursivo(int n){

    if(n==0) return 0;

    if(n==1) return 1;

    if(n==2) return 1;

    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}

int fibonacciIterativo(int n){

    int fibonacci[n+1] = {0,1,1};

    for(int i=3; i<=n; i++){
        fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
    }

    return fibonacci[n];
}

int main(){

    int indice, opcao;

    cout << "Digite o indice que deseja buscar o valor, comecando em 0: ";
    cin >> indice;

    cout << "Escolha um modo para calcular: \n1-Recursivamente \n2-Iterativamente\n";
    cin >> opcao;

    switch(opcao){
    case 1:
        cout << "No indice " << indice << " temos o valor: " << fibonacciRecursivo(indice);
        cout << "\nCalculado pelo modo recursivo!\n\n";
        break;
    case 2:
        cout << "No indice " << indice << " temos o valor: " << fibonacciIterativo(indice);
        cout << "\nCalculado pelo modo iterativo!\n\n";
        break;

    }

    system("pause");

return 0;
}
