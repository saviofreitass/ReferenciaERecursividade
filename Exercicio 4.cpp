#include <iostream>

using namespace std;

const int MAX_Li = 20;
const int MAX_Col = 25;

void setTamMatriz(int &li, int &col){
    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> li;
    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> col;
    if(li > 20 || col > 25){
        cout << "\nTamanho maximo de linhas: 20, e de colunas: 25\n";
        setTamMatriz(li,col);
    }
}

void lerMatriz(int (&matriz)[MAX_Li][MAX_Col], int li, int col){
    for(int i=0; i<li; i++){
        for(int o=0; o<col; o++){
            cout << "Digite o valor para a linha " << i << " coluna " << o << ": ";
            cin >> matriz[i][o];
        }
    }
}

void imprimeMatriz(int matriz[MAX_Li][MAX_Col], int li, int col){
    cout << "Sua matriz original: \n";
    for(int i=0; i<li; i++){
        for(int o=0; o<col; o++){
            cout << matriz[i][o] << " ";
        }
        cout << "\n";
    }
}

int menuOpcoes(){
    int opcao;
    cout << "\nEscolha a opcao que deseja fazer!";
    cout << "\n\n1-Calcular a matriz transposta. \n2-Multiplicar a matriz por um valor que voce deseja.\n";
    cout << "3-Realizar a adicao com uma segunda matriz informada pelo usuario.\n4-Sair\n";
    cin >> opcao;

   return opcao;
}

void transporMatriz(int matriz[MAX_Li][MAX_Col], int li, int col){
    int matrizTransposta[li][col];
    cout << "Sua matriz transposta: \n";
    for(int i=0; i<col; i++){
        for(int o=0; o<li; o++){
            matrizTransposta[i][o] = matriz[o][i];
            cout << matrizTransposta[i][o] << " ";
        }
        cout << "\n";
    }
}

void multiplicaMatriz(int matriz[MAX_Li][MAX_Col], int li, int col){
    int matrizMultiplicada[li][col], valor;
    cout << "Informe o valor pelo qual ira multiplica sua matriz: ";
    cin >> valor;
    cout << "Sua matriz multiplicada por "<< valor << " eh:\n";
    for(int i=0; i<li; i++){
        for(int o=0; o<col; o++){
            matrizMultiplicada[i][o] = matriz[i][o] * valor;
            cout << matrizMultiplicada[i][o] << " ";
        }
        cout << "\n";
    }
}

void adicionaMatriz(int matriz[MAX_Li][MAX_Col], int li, int col){
    int matrizAdicionada[MAX_Li][MAX_Col];
    cout << "Digite a matriz que voce deseja adicionar a sua matriz original:\n";
    lerMatriz(matrizAdicionada, li, col);
    cout << "Suas matrizes somadas eh: \n";
    for(int i=0; i<li; i++){
        for(int o=0; o<col; o++){
            matrizAdicionada[i][o] += matriz[i][o];
            cout << matrizAdicionada[i][o] << " ";
        }
        cout << "\n";
    }
}

int main(){

    int m,n;

    setTamMatriz(m,n);

    int matriz[MAX_Li][MAX_Col];

    lerMatriz(matriz, m, n);

    imprimeMatriz(matriz, m, n);

    int opcao;

    do{
        opcao = menuOpcoes();
        switch(opcao){
        case 1:
            system("cls");
            imprimeMatriz(matriz, m, n);
            transporMatriz(matriz, m, n);
            break;
        case 2:
            system("cls");
            imprimeMatriz(matriz, m, n);
            multiplicaMatriz(matriz, m, n);
            break;
        case 3:
            system("cls");
            imprimeMatriz(matriz, m, n);
            adicionaMatriz(matriz, m, n);
            break;
        case 4:
            cout << "Falou!!";
            break;
        default:
            cout << "\nOpcao invalida\n";
    }
    }while(opcao != 4);

return 0;
}
