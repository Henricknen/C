#include <iostream>
using namespace std;

int main() {

    int val;

    cout << "Selecione um transporte:\n";
    cout << "[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicoptero\n";

    cin >> val;

    switch (val) {
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(val) {       // aqui se tem um 'switch aninhado' um dentro do outro
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte aero\n";
            switch(val) {       // aqui se tem um 'switch aninhado' um dentro do outro
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;
            }
            break;

            default:
            cout << "Transporte selecinado invalido";
    }

    cout << "\nPrograma finalizado\n";

    return 0;

} 