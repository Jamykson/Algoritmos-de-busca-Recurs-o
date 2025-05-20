#include <iostream>
#include <iomanip>
#include <vector>
#include "busca_seq_ordenada.hpp"
#include "busca_binaria.hpp"
#include "recursao.hpp"

#define RUN_TEST(name, expr, expected)                                 \
    do {                                                               \
        int result = (expr);                                           \
        std::cout << std::left << std::setw(25) << name                \
                  << ": " << ((result == (expected)) ? "OK" : "FAIL")  \
                  << std::endl;                                        \
    } while(0)

int main() {
    
    std::vector<int> arr2 = {};
    
    int arr1[] = {4, 2, 1, 4, 2, 1};
    RUN_TEST("Busca Ordenada", conta_especialidades_distintas(arr1, 6), 3);
    RUN_TEST("Busca binaria", busca_binaria(5), 4);
    RUN_TEST("Recursiva", recursao("banana", 'a'), 3);

    return 0;
}