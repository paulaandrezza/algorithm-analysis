# Desafio Click Soft

## 📑 Sobre o Projeto


## 📚 Organização do Código

```
├── main.c
├── main.exe
├── commonFunctions.c
├── tests.c
├── test_data.csv
├── bublueSort.c
├── insertion.c
└── selection.c
```
Cada arquivo desempenha um papel específico na aplicação e contém funções dedicadas que serão detalhadas a seguir:

1. `main.c`: Este arquivo contém a função principal do programa. Neste arquivo, são definidos e inicializados os arrays, incluindo um array de números aleatórios e um array invertido. Além disso, é responsável por chamar a função `runTests` do arquivo `tests.c`, que realiza os testes e verifica o desempenho dos algoritmos de ordenação implementados.

2. `main.exe`: Este é um arquivo executável que foi gerado a partir do código-fonte. Ele permite a execução do programa para ordenar os dados usando os algoritmos implementados.

3. `commonFunctions.c`: Este arquivo desempenha um papel fundamental ao fornecer funções comuns que são utilizadas durante a implementação dos algoritmos de ordenação. Entre essas funções estão:
    - `randomArray`: Esta função gera um array de números aleatórios, o que é útil para testar o desempenho dos algoritmos de ordenação com dados não ordenados.
    - `invertedArray`: Esta função cria um array com os elementos em ordem inversa, fornecendo uma entrada específica para avaliar o comportamento dos algoritmos em casos de ordenação reversa.
    - `copyArray`: A função copyArray cria uma cópia do array original. Essa cópia é usada para preservar o estado do array original e garantir que ele não seja modificado durante a ordenação.
    - `printArray`: A função printArray é utilizada principalmente para fins de depuração e teste. Ela permite a exibição do conteúdo do array no terminal, facilitando a verificação da corretude dos algoritmos de ordenação.

4. `tests.c`: Neste arquivo, são definidos casos de teste para os algoritmos de ordenação implementados. Ele inclui duas funções principais:
    - `test`: Esta função é responsável por invocar todos os algoritmos de ordenação implementados para avaliar o desempenho de cada um.
    - `runTests`: A função runTests é encarregada de chamar a função test com valores específicos de posições no vetor, permitindo testar os algoritmos com diferentes configurações de dados e fornecendo resultados para avaliação e análise.

5. `test_data.csv`: Este arquivo contém dados gerados pelos testes em formato CSV, que inclue,: Array Type, Algorithm, Dataset Size, Time Spent (seconds) e Operations

6. `bubbleSort.c`: Este arquivo contém a implementação do algoritmo de ordenação "Bubble Sort". O Bubble Sort é um algoritmo simples que percorre repetidamente a lista, compara elementos adjacentes e os troca se estiverem na ordem errada.

7. `insertion.c`: Este arquivo contém a implementação do algoritmo de ordenação "Insertion Sort". O Insertion Sort funciona construindo uma matriz ordenada um item de cada vez, movendo os itens não ordenados para a posição correta.

8. `selection.c`: Este arquivo contém a implementação do algoritmo de ordenação "Selection Sort". O Selection Sort encontra o menor elemento da matriz e o move para a primeira posição, repetindo esse processo para os elementos restantes.


