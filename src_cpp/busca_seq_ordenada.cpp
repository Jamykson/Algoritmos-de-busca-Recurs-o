#include "busca_seq_ordenada.hpp"
#include <algorithm> 

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n && arr[i] <= alvo; i++) {
        if (arr[i] == alvo) return i;
    }
    return -1;
}

int conta_especialidades_distintas(int arr[], int n) {
    bubble_sort(arr, n);
    int distintos = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            distintos++;
        }
    }
    return distintos;
}