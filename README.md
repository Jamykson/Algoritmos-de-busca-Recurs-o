# Algoritmos-de-busca-Recurs-o
Algoritmos de busca + Recursão

1. Busca Binária para Versão Ruim
Arquivos: busca_binaria.hpp, busca_binaria.cpp
Funções:

bool isBadVersion(int version)
    Descrição: Função que indica se uma determinada versão é "ruim" (defeituosa).
    Parâmetros: version (int): número da versão a ser testada.
    Retorno: true se a versão for ruim ou superior, ou false caso contrário.
    Observação: Neste código, a versão ruim está fixada como 4 (const int bad = 4).

int busca_binaria(int n)
    Descrição: Determina a primeira versão ruim dentro de um conjunto de versões numeradas de 1 até n, usando busca binária para eficiência.
    Parâmetros: n (int): o número total de versões a serem avaliadas.
    Retorno: O número da primeira versão ruim (menor índice para a qual isBadVersion retorna true).

    Funcionamento: Usa os ponteiros esquerda e direita para delimitar o intervalo de busca. No meio do intervalo, verifica se a versão é ruim. Se sim, ajusta o limite direito para buscar versões anteriores. Caso contrário, avança o limite esquerdo. Retorna a primeira versão ruim encontrada.


2. Busca Sequencial Ordenada e Contagem de Especialidades Distintas
Arquivos: busca_seq_ordenada.hpp, busca_seq_ordenada.cpp
Funções:

void bubble_sort(int arr[], int n)
    Descrição: Ordena o vetor arr de tamanho n em ordem crescente utilizando o algoritmo bubble sort.
    Parâmetros: arr[] (int array): vetor de inteiros a ser ordenado, n (int): tamanho do vetor.
    Retorno: Void (modifica o vetor original).

int busca_seq_ordenada(int arr[], int n, int alvo)
    Descrição: Realiza uma busca sequencial em um vetor ordenado para encontrar um elemento específico (alvo).
    Parâmetros: arr[] (int array): vetor ordenado onde será feita a busca, n (int): tamanho do vetor, alvo (int): valor a ser procurado no vetor.
    Retorno: Índice do elemento encontrado no vetor, ou -1 se não encontrado.
    Funcionamento: Percorre o vetor enquanto os elementos forem menores ou iguais ao alvo, e retorna o índice ao encontrar o valor.

int conta_especialidades_distintas(int arr[], int n)
    Descrição: Conta a quantidade de valores únicos em um vetor de especialidades, utilizando ordenação para facilitar a contagem.
    Parâmetros: arr[] (int array): vetor de especialidades (não necessariamente ordenado), n (int): tamanho do vetor.
    Retorno: Número inteiro representando a quantidade de especialidades distintas.
    Funcionamento: Ordena o vetor usando bubble_sort e percorre o vetor e conta quantos valores são diferentes do anterior, acumulando esse total.

3. Contagem Recursiva de Ocorrências de Caracteres em Strings
Arquivos: recursao.hpp, recursao.cpp
Função:
int recursao(const std::string &str, char alvo)
    Descrição: Conta quantas vezes o caractere alvo aparece na string str, utilizando recursão.
    Parâmetros: str (const referência para std::string): string na qual será feita a contagem, alvo (char): caractere cuja ocorrência será contada.
    Retorno: Número inteiro representando a quantidade de ocorrências do caractere alvo na string.
    Funcionamento: Se a string estiver vazia, retorna 0. Verifica o primeiro caractere da string; se for igual ao alvo, soma 1 mais o resultado da chamada recursiva na substring sem o primeiro caractere; caso contrário, soma 0 mais o resultado da chamada recursiva.


4. Arquivo de Testes: test_algorithms.cpp
    Descrição: Arquivo principal que executa testes automatizados nas funções implementadas para validar seu correto funcionamento.
    Macro utilizada: RUN_TEST
    Recebe nome do teste, expressão a ser avaliada, e valor esperado.
    Imprime "OK" caso o resultado seja igual ao esperado, ou "FAIL" caso contrário.
    Testes exemplares no código:
    Teste de contagem de especialidades distintas no vetor {4, 2, 1, 4, 2, 1} (esperado: 3).
    Teste da busca binária para encontrar a primeira versão ruim em 5 versões (esperado: 4).
    Teste da função recursiva para contar 'a' na string "banana" (esperado: 3).
    Como usar: Compile todos os arquivos .cpp juntos, execute o programa gerado, e observe a saída dos testes no console.