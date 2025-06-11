#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Paciente {
    string nome;
    int prioridade;
};


void exibirPacientes(const vector<Paciente>& pacientes) {
    for (const auto& p : pacientes) {
        cout << "Nome: " << p.nome << ", Prioridade: " << p.prioridade << endl;
    }
    cout << "-------------------------------" << endl;
}


void bubbleSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (pacientes[j].prioridade > pacientes[j + 1].prioridade) {
                swap(pacientes[j], pacientes[j + 1]);
                trocou = true;
            }
        }
        if (!trocou) {
            break; 
        }
    }
}


void selectionSort(vector<Paciente>& pacientes) {
    int n = pacientes.size();
    for (int i = 0; i < n - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < n; j++) {
            if (pacientes[j].prioridade < pacientes[indiceMenor].prioridade) {
                indiceMenor = j;
            }
        }
        if (indiceMenor != i) {
            swap(pacientes[i], pacientes[indiceMenor]);
        }
    }
}

int main() {
    
    vector<Paciente> pacientes = {
        {"Ana", 5},
        {"Pedro", 2},
        {"Carla", 4},
        {"Lucas", 1},
        {"Mariana", 3},
        {"Fernanda", 5},
        {"Rafael", 2},
        {"Beatriz", 4},
        {"Guilherme", 1},
        {"Sofia", 3}
    };

    
    cout << "===== Bubble Sort =====" << endl;
    vector<Paciente> pacientesBubble = pacientes;
    bubbleSort(pacientesBubble);
    exibirPacientes(pacientesBubble);

    
    cout << "===== Selection Sort =====" << endl;
    vector<Paciente> pacientesSelection = pacientes;
    selectionSort(pacientesSelection);
    exibirPacientes(pacientesSelection);

    return 0;
}
