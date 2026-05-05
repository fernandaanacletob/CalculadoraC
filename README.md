# CalculadoraC
Calculadora em C desenvolvida para a disciplina de Teoria dos Grafos. O projeto foca na revisão de recursividade vs. iteratividade (fatorial, exponencial e termial), servindo como base lógica para algoritmos de busca em profundidade (DFS) e exploração de estruturas de dados complexas.

# Revisão de Recursividade - Teoria dos Grafos
Este projeto foi desenvolvido como um exercício prático para a disciplina de **Teoria dos Grafos**. O objetivo principal é revisar a lógica de algoritmos recursivos e compará-los com as suas implementações iterativas (normais).

## Contexto
A recursividade é um conceito fundamental em Grafos, servindo de base para algoritmos essenciais como a **Busca em Profundidade (DFS)** e a exploração de estruturas de dados complexas.

## Funcionalidades
O programa consiste numa calculadora interativa em C que abrange:

* **Operações Básicas**: Soma, Subtração, Multiplicação, Divisão e Resto.
* **Cálculos de Percentagem**: Cálculo de valor sobre taxa e taxa sobre total.
* **Módulo de Recursividade**:
    * **Exponenciação**: Versão normal (`for`) e versão recursiva.
    * **Termial**: Somatório de 1 até N (Iterativo e Recursivo).
    * **Fatorial**: Produto de 1 até N (Iterativo e Recursivo).

## Como Executar
O código utiliza bibliotecas padrão da linguagem C e a `conio.h`, sendo otimizado para execução em ambientes Windows.
1.  **Compilar**:
    ```bash
    gcc RevisaoRecursividade.cpp -o calculadora
    ```
2.  **Correr**:
    ```bash
    ./calculadora
    ```

## Conceitos Revisados
* **Caso Base**: A condição que interrompe a chamada recursiva.
* **Pilha de Execução**: Como o sistema gere as chamadas sucessivas de funções.
* **Iteratividade vs. Recursividade**: Análise da lógica e estrutura de código em diferentes abordagens.

---
*Material desenvolvido para apoio académico na disciplina de Teoria dos Grafos.*
