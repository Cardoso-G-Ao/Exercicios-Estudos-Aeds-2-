# 📝 Exercícios de AEDS 2

Repositório de **exercícios práticos** da disciplina **Algoritmos e Estruturas de Dados 2**. Ele é o complemento do repositório de teoria [Estudos-Aeds-2](https://github.com/Cardoso-G-Ao/Estudos-Aeds-2): lá estão os guias, as demonstrações interativas e os códigos de referência; aqui está a **prática** para fixar esse conteúdo.

---

## 🎯 Objetivo

Estudar só lendo guias não basta para fixar estruturas de dados. Este repositório existe para **treinar o que foi estudado** no Estudos-Aeds-2, em dois níveis, sempre na mesma ordem do material:

**células → listas → filas → pilha → ordenações**

Os exercícios usam os mesmos arquivos e nomes do repositório de estudos (`Celula.c`, `CelulaDupla.c`, `LIstaFlexivel.c`, `testefilacircular.c`, `cont`, `ant`, `MAX` e assim por diante). Assim, cada exercício aponta para o código que você já viu e pede uma mudança ou extensão nele.

| Nível | O que pede | Onde está |
|---|---|---|
| **Básico** | Exercícios curtos, de um passo só (ler, contar, somar, imprimir, remover um elemento ou simular no papel) | `ExerciciosBasicos/` |
| **Intermediário** | Exercícios um pouco mais completos: mais de uma operação, tratamento de erros, exemplos para conferir e comparações entre as estruturas e os algoritmos | `ExerciciosIntermediarios/` |

---

## 🔗 Relação com o Estudos-Aeds-2

| Repositório | Papel | O que tem |
|---|---|---|
| [**Estudos-Aeds-2**](https://github.com/Cardoso-G-Ao/Estudos-Aeds-2) | Teoria e referência | Guias (`.md`), demonstrações (`.html`) e códigos em C |
| **Exercicios-Estudos-Aeds-2-** (este) | Prática | Listas de exercícios (PDF) e soluções em C |

Fluxo sugerido de uso:

1. Estude o assunto no Estudos-Aeds-2 (guia, demonstração e código).
2. Volte aqui e resolva os exercícios daquele assunto.
3. Confira o resultado nas demonstrações interativas do Estudos-Aeds-2.

---

## 🗂️ Estrutura de pastas

```
Exercicios-Estudos-Aeds-2-/
├── README.md                                  # este arquivo
├── .gitignore
│
├── ExerciciosBasicos/
│   └── 30 exercícios de AEDs 2.pdf            # enunciados do nível básico
│
├── ExerciciosIntermediarios/
│   └── Exercicios Intermediarios de AEDs 2.pdf  # enunciados do nível intermediário
│
└── Solucoes/                                  # soluções do nível básico
    ├── ex1.c
    ├── ex2.c
    ├── ...
    ├── ex26.c
    ├── ex28.c ... ex30.c
    ├── resposta17.txt                         # explicação escrita do exercício 17
    └── resposta27.txt                         # resposta do exercício 27 (sem código)
```

---

## 📋 Os exercícios

Os dois PDFs têm **30 exercícios** cada e são divididos por assunto, na mesma ordem do repositório de estudos.

### Nível básico

Enunciados em [`ExerciciosBasicos/30 exercícios de AEDs 2.pdf`](ExerciciosBasicos).

| Assunto | Exercícios | Pasta correspondente no Estudos-Aeds-2 |
|---|---|---|
| Células | 1 a 4 | `CelulaEstrutura/` |
| Listas | 5 a 12 | `LIsta/` |
| Filas | 13 a 19 | `Fila/` |
| Pilha | 20 a 23 | `Pilha/` |
| Ordenações | 24 a 30 | `Ordenacoes/` |

Dois tipos de exercício aparecem na lista:

- **De código:** pedem para ler, inserir, remover, contar ou procurar elementos, reaproveitando os arquivos `.c` do repositório de estudos.
- **De papel:** pedem para simular um algoritmo à mão (por exemplo, Insertion Sort em `[5, 2, 4, 1, 3]` ou uma partição do Quick Sort) ou explicar uma ideia com as próprias palavras. A recomendação do próprio PDF é resolver no papel primeiro e depois conferir nas demonstrações interativas.

### Nível intermediário

Enunciados em [`ExerciciosIntermediarios/Exercicios Intermediarios de AEDs 2.pdf`](ExerciciosIntermediarios).

| Assunto | Exercícios | Pasta correspondente no Estudos-Aeds-2 |
|---|---|---|
| Células | 1 a 4 | `CelulaEstrutura/` |
| Listas | 5 a 11 | `LIsta/` |
| Filas | 12 a 18 | `Fila/` |
| Pilha | 19 a 22 | `Pilha/` |
| Ordenações | 23 a 30 | `Ordenacoes/` |

O que muda em relação ao básico:

- **Estruturas:** inserção e remoção em posição, remoção por valor, junção de listas ordenadas, filas com comandos, fila dupla nos dois sentidos e fila circular com e sem a posição de segurança.
- **Pilha:** aplicações reais, como calculadora pós-fixa, parênteses balanceados, conversão para binário e fila feita com duas pilhas.
- **Ordenações:** um exercício para cada algoritmo (Insertion, Selection, Counting, Radix, Bucket, Merge, Quick e Heap), com contagem de comparações, passo a passo e inversões.
- **Quadros "CONFIRA":** vários exercícios trazem resultados prontos para você comparar com os seus.

---

## ✅ Soluções

A pasta `Solucoes/` reúne as resoluções em C do **nível básico**, um programa por arquivo (`ex1.c`, `ex2.c`, ... `ex30.c`). Cada arquivo tem o seu próprio `main`, então compile um de cada vez.

A pasta cobre os exercícios de **1 a 30**, com duas particularidades:

- **Exercício 17 (fila cheia):** tem o código `ex17.c` e a explicação escrita em `resposta17.txt`.
- **Exercício 27 (Radix e Bucket em uma frase):** é uma explicação, então a resposta está só em `resposta27.txt`, sem `.c`.

As soluções do **nível intermediário** ainda não foram adicionadas.

---

## ⚙️ Como compilar e executar

Você precisa de um compilador C, como o `gcc`. Na raiz do repositório:

```bash
gcc -Wall -o ex1 Solucoes/ex1.c
./ex1          # no Windows: ex1.exe
```

A flag `-Wall` ativa os avisos do compilador, o que ajuda a achar erros cedo.

### Entrada de dados

- Os programas leem números com `scanf`. Digite os valores separados por espaço e **termine a sequência com uma letra** (por exemplo, `10 20 30 x`) ou com o fim de entrada: **Ctrl + D** (Linux e macOS) ou **Ctrl + Z** e Enter (Windows).
- Nos exercícios que pedem um valor extra (como procurar um número na lista), digite esse valor **na linha seguinte**.

Exemplo de execução do exercício de procurar valor:

```
10 20 30 x
20
```

---

## 🧭 Sugestão de roteiro

1. Comece pelas **células** (1 a 4): elas são a base de listas, filas e pilha.
2. Siga para **listas** e **filas**, sempre relendo o código correspondente no Estudos-Aeds-2.
3. Faça a **pilha** e depois as **ordenações**, que são mais conceituais e pedem simulação no papel.
4. Termine o **nível básico** e compare suas respostas com as demonstrações interativas e com a pasta `Solucoes/`.
5. Passe para o **nível intermediário**, na mesma ordem de assuntos, usando os quadros "CONFIRA" para conferir seus resultados.

---

## 👤 Autor

**Gabriel Cardoso Alvares de Oliveira**