#include "carro.h"


Carro::Carro() : Veiculo() {
    cout << "Digite o numero de portas do carro: " << endl;
    cin >> numeroDePortas;
}

void Carro::mostrarDetalhes() const {
    cout << "\nDetalhes do Carro:\n";
    cout << "Nome do veiculo: " << getNome() << endl;
    cout << "Numero de portas: " << numeroDePortas << endl;
}
