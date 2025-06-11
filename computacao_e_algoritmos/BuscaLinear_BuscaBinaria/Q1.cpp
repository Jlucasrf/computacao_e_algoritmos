#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;


int buscaLinear(const vector<string>& livros, const string& tituloBuscado) {
    for (int i = 0; i < livros.size(); i++) {
        if (livros[i] == tituloBuscado) {
            return i;
        }
    }
    return -1; 
}


int buscaBinaria(const vector<string>& livros, const string& tituloBuscado) {
    int inicio = 0;
    int fim = livros.size() - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (livros[meio] == tituloBuscado) {
            return meio; // Encontrado
        } else if (livros[meio] < tituloBuscado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; 
}

int main() {
    
    vector<string> livros = {
        "A Culpa é das Estrelas",
        "Dom Quixote",
        "Harry Potter e a Pedra Filosofal",
        "O Hobbit",
        "O Senhor dos Anéis",
        "Percy Jackson e o Ladrão de Raios",
        "Sherlock Holmes"
    };

    string tituloBuscado = "O Hobbit";

    cout << "===== BUSCA LINEAR =====" << endl;
    int posLinear = buscaLinear(livros, tituloBuscado);

    if (posLinear != -1) {
        cout << "Livro encontrado na posicao: " << posLinear << endl;
    } else {
        cout << "Livro nao encontrado." << endl;
    }

    
    sort(livros.begin(), livros.end());

    cout << "\n===== BUSCA BINARIA =====" << endl;
    int posBinaria = buscaBinaria(livros, tituloBuscado);

    if (posBinaria != -1) {
        cout << "Livro encontrado na posicao (lista ordenada): " << posBinaria << endl;
    } else {
        cout << "Livro nao encontrado." << endl;
    }

    return 0;
}
