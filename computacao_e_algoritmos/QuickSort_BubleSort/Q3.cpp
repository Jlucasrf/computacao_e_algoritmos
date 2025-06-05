#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
Qual algoritmo ordena mais rápido na prática para esses 50 números?

O QuickSort ordena mais rápido na prática, mesmo com apenas 50 números, O QuickSort tem uma complexidade média de O(n log n), o que significa que ele precisa de muito menos comparações e trocas do que algoritmos simples como o Bubble Sort, que tem complexidade O(n²).


O que faz o QuickSort ser mais eficiente em listas maiores?

O QuickSort utiliza a técnica de Dividir e Conquistar, Escolhe um elemento chamado pivô.
Separa o vetor em dois grupos:
Um com elementos menores que o pivô.
Outro com elementos maiores que o pivô.
Depois, aplica o mesmo processo recursivamente nos dois grupos.
Esse modelo de divisão reduz drasticamente o número de comparações necessárias, principalmente quando os dados estão bem distribuídos.
Por isso, sua complexidade média é O(n log n), muito mais eficiente que algoritmos quadráticos (O(n²)), como Bubble Sort, Selection Sort e Insertion Sort.À medida que o tamanho da lista cresce, a diferença de desempenho fica cada vez maior. O QuickSort escala muito melhor para listas grandes, enquanto algoritmos simples se tornam extremamente lentos.

*/
vector<int> gerarVetorAleatorio(int tamanho, int min, int max) {
    vector<int> vetor;
    srand(time(0));  // Inicializar a semente
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}


void exibirVetor(const vector<int>& vetor) {
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;
}


void bubbleSort(vector<int>& vetor) {
    int n = vetor.size();
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                swap(vetor[j], vetor[j + 1]);
                trocou = true;
            }
        }
        if (!trocou) {
            break; 
        }
    }
}


void quickSort(vector<int>& vetor, int esquerda, int direita) {
    if (esquerda < direita) {
        int pivo = vetor[(esquerda + direita) / 2];
        int i = esquerda;
        int j = direita;

        while (i <= j) {
            while (vetor[i] < pivo) i++;
            while (vetor[j] > pivo) j--;

            if (i <= j) {
                swap(vetor[i], vetor[j]);
                i++;
                j--;
            }
        }

        
        if (esquerda < j)
            quickSort(vetor, esquerda, j);
        if (i < direita)
            quickSort(vetor, i, direita);
    }
}

int main() {
    
    vector<int> vetorOriginal = gerarVetorAleatorio(50, 1, 500);

    
    cout << "Vetor original:" << endl;
    exibirVetor(vetorOriginal);

   
    vector<int> vetorBubble = vetorOriginal;
    bubbleSort(vetorBubble);
    cout << "\nVetor ordenado com Bubble Sort:" << endl;
    exibirVetor(vetorBubble);

    
    vector<int> vetorQuick = vetorOriginal;
    quickSort(vetorQuick, 0, vetorQuick.size() - 1);
    cout << "\nVetor ordenado com QuickSort:" << endl;
    exibirVetor(vetorQuick);

    return 0;
}
