#include "busca_binaria.hpp"

const int bad = 4;

bool isBadVersion(int version) {
    return version >= bad;
}

int busca_binaria(int n) {
    int esquerda = 1;
    int direita = n;
    int resposta = n;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (isBadVersion(meio)) {
            resposta = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return resposta;
}
