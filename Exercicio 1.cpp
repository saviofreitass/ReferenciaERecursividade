#include <iostream>

using namespace std;

void transformaIdade(int idade, int &anos, int &meses, int &dias){

    anos = idade/365;
    idade -= anos*365;
    meses = idade/30;
    idade -= meses*30;
    dias = idade;
}

int main(){

    int idadeDias, anos, meses, dias;

    cout << "Digite sua idade em dias: ";
    cin >> idadeDias;

    transformaIdade(idadeDias, anos, meses, dias);

    cout << "Sua idade:\nAnos: " << anos << "\nMeses: " << meses << "\nDias: " << dias << endl;

    system("pause");

return 0;
}
