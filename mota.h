#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"

class Moto : public Veiculo {
private:
    string tipoDeGuidao;

public:
    Moto();  // Construtor que inicializa o nome e o tipo de guidão da moto
    void mostrarDetalhes() const override;  // Sobrescreve o método mostrarDetalhes
};

#endif
