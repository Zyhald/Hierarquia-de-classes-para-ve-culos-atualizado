#include "mota.h"


Moto::Moto() : Veiculo() {
    cout << "Digite o tipo de guidao da moto: " << endl;
    cin >> tipoDeGuidao;
    getline(cin, tipoDeGuidao);
}

void Moto::mostrarDetalhes() const {
    cout << "\nDetalhes da Moto:\n";
    cout << "Nome do veiculo: " << getNome() << endl;
    cout << "Tipo de guidao: " << tipoDeGuidao << endl;
}
