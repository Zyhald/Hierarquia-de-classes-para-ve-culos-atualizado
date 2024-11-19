#include "veiculo.h"


Veiculo::Veiculo() {
    cout << "Digite o nome do veiculo: " << endl;
    getline(cin, nome);  // Lê o nome do veículo e salva no nome
}

void Veiculo::setNome(const string& nomeVeiculo) {
    nome = nomeVeiculo;
}

string Veiculo::getNome() const {
    return nome;
}
