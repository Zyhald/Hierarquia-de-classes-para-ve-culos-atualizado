#include "carro.h"
#include "mota.h"


using namespace std;

int main() {
    Carro carro;  // Cria um objeto Carro e solicita o nome e o número de portas
    Moto moto;    // Cria um objeto Moto e solicita o nome e o tipo de guidão

    int opcao;

    while (true) { 
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Mostrar detalhes do Carro" << endl;
        cout << "2 - Mostrar detalhes da Moto" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        // Limpeza do buffer de entrada para evitar problemas no próximo cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  

        switch (opcao) {
            case 1:
                carro.mostrarDetalhes();
                break;
            case 2:
                moto.mostrarDetalhes();
                break;
            case 0:
                cout << "Saindo..." << endl;
                return 0;
            default:
                cout << "Opcao invalida." << endl;
                break;
        }
    }

    return 0;
}
