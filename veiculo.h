#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <string>

using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo();  // Construtor que inicializa o veículo
    virtual void mostrarDetalhes() const = 0;  // Método virtual puro (abstrato) que será implementado nas classes derivadas
    void setNome(const string& nomeVeiculo);  // Método para definir o nome
    string getNome() const;  // Método para obter o nome
};

#endif
