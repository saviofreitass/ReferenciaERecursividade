#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void transformaHoras(int valor, int &horas, int &minutos, int &segundos){
    horas = valor/pow(60,2);
    valor -= horas*pow(60,2);
    minutos = valor/60;
    valor -= minutos*60;
    segundos = valor;
}

int main(){

    int tempo, horas, minutos, segundos;

    cout << "Digite a quantidade de segundos: ";
    cin >> tempo;

    transformaHoras(tempo, horas, minutos, segundos);

    cout << setw(2) << setfill('0') << horas << ":" << setw(2) << setfill('0') << minutos << ":" <<  setw(2) << setfill('0') << segundos << "h" << endl;

return 0;
}
