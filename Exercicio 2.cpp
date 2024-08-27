#include <iostream>
#include <iomanip>

using namespace std;

void transformaMinutos(int valor, int &horas, int &minutos){
    horas = valor/60;
    valor -= horas*60;
    minutos = valor;

}

int main(){

    int tempo, horas, minutos;

    cout << "Digite quantos minutos se passaram desde as 00h: ";
    cin >> tempo;

    transformaMinutos(tempo, horas, minutos);

    cout << "Agora sao: " << setw(2) << setfill('0')<< horas << ":" << setw(2) << setfill('0') << minutos << "h\n\n";

    system("pause");

return 0;
}
