#include <iostream>

using namespace std;

void buscaBinaria(int vetor[10], int inicio, int fim, int valor){

    if(inicio > fim){
        cout<< "\nNumero nao encontrado! Numero: " << valor << "\n" ;
        return;
    }

    int meio = inicio + (fim-inicio)/2;

    if(vetor[meio]<valor){
        inicio = meio+1;
        cout << "\nOpcoes restantes: ";
        for(int i = inicio; i<=fim; i++){
           cout << vetor[i] << "-";
        }
        buscaBinaria(vetor, inicio, fim, valor);
    }else if(vetor[meio]>valor){
        fim = meio-1;
        cout << "\nOpcoes restantes: ";
        for(int i=inicio; i<=fim; i++){
            cout << vetor[i] << "-";
        }
        buscaBinaria(vetor, inicio, fim, valor);
    }else if(vetor[meio]==valor){
        cout << "\nAchou!! Indice do numero: " << meio << ", numero: " << vetor[meio];
    }
}

int main(){

    int vetor[10] = {0,18,22,25,34,40,51,66,75,87};

    int inicio = 0;
    int fim = sizeof(vetor)/sizeof(vetor[0])-1;

    buscaBinaria(vetor, inicio, fim,75);

    cout << "\n\n";
    system("pause");
    system("cls");

    buscaBinaria(vetor, inicio, fim,22);

    cout << "\n\n";
    system("pause");
    system("cls");

    buscaBinaria(vetor, inicio, fim,90);

    cout << "\n\n";
    system("pause");

return 0;
}
