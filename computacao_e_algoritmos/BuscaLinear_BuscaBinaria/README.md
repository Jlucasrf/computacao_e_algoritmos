# 📚 Busca Linear e Busca Binária — Biblioteca

## 👨‍💻 Integrantes:
- 1º membro: João Lucas Ribeiro Feitosa


## 🏛️ Descrição
Este projeto implementa dois algoritmos de busca em uma lista de livros de uma biblioteca:

- 🔍 **Busca Linear**
- 🔍 **Busca Binária**

O objetivo é localizar um livro específico (ex.: "O Hobbit") em uma lista de títulos.

## 🧠 Tecnologias
- Linguagem: **C++**

## ⚙️ Algoritmos Implementados

### ✔️ Busca Linear
- Percorre a lista do início ao fim.
- Retorna a posição (índice) do livro se encontrado ou `-1` se não estiver na lista.
- **Não exige que a lista esteja ordenada.**

### ✔️ Busca Binária
- Divide a lista ordenada ao meio repetidamente.
- Retorna a posição (índice) do livro se encontrado ou `-1` caso contrário.
- **Exige que a lista esteja ordenada alfabeticamente.**

## 📊 Análise Comparativa

| Algoritmo     | Complexidade Média/Pior | Melhor Caso | Observações                                    |
|----------------|--------------------------|-------------|------------------------------------------------|
| **Busca Linear** | O(n)                  | O(1)        | Simples, funciona em qualquer ordem            |
| **Busca Binária** | O(log n)             | O(1)        | Muito mais eficiente, mas exige lista ordenada |

## 📝 Licença
Este projeto é apenas educacional.
