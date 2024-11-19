#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"

class Carro : public Veiculo {
private:
    int numeroDePortas;

public:
    Carro();  // Construtor que inicializa o nome e o número de portas do carro
    void mostrarDetalhes() const override;  // Sobrescreve o método mostrarDetalhes
};

#endif
