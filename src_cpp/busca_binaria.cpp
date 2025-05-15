#include "busca_binaria.hpp"

int errada = 5;

bool isBadVersion(int versao){

    return versao>=errada;

}


int busca_binaria(int n) {
    int inicio = 1, fim = n, resultado = n, meio;

    while(inicio<=fim){
        meio = fim/2;

        if(isBadVersion(meio)){
            resultado = meio;
            fim = meio - 1;
        }else{
            inicio = meio+1;

        }

    }

    
    

}

/*Ela deve retornar a primeira versão defeituosa entre 1 e n, 
usando busca binária e uma função isBadVersion(int version) que 
já te informa se uma versão é defeituosa ou não.*/