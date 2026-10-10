# 📝 Exercícios de AEDS 2

Repositório de **exercícios práticos** da disciplina **Algoritmos e Estruturas de Dados 2**. Ele é o complemento do repositório de teoria [Estudos-Aeds-2](https://github.com/Cardoso-G-Ao/Estudos-Aeds-2): lá estão os guias, as demonstrações interativas e os códigos de referência; aqui está a **prática** para fixar esse conteúdo.

---

## 🎯 Objetivo

Estudar só lendo guias não basta para fixar estruturas de dados. Este repositório existe para **treinar o que foi estudado** no Estudos-Aeds-2, com exercícios curtos, de um passo só, que seguem a mesma ordem do material:

**células → listas → filas → pilha → ordenações**

Os exercícios usam os mesmos arquivos e nomes do repositório de estudos (`Celula.c`, `CelulaDupla.c`, `LIstaFlexivel.c`, `testefilacircular.c`, `cont`, `ant`, `MAX` e assim por diante). Assim, cada exercício aponta para o código que você já viu e pede uma pequena mudança ou extensão nele.

---

## 🔗 Relação com o Estudos-Aeds-2

| Repositório | Papel | O que tem |
|---|---|---|
| [**Estudos-Aeds-2**](https://github.com/Cardoso-G-Ao/Estudos-Aeds-2) | Teoria e referência | Guias (`.md`), demonstrações (`.html`) e códigos em C |
| **Exercicios-Estudos-Aeds-2-** (este) | Prática | Lista de exercícios e soluções em C |

Fluxo sugerido de uso:

1. Estude o assunto no Estudos-Aeds-2 (guia, demonstração e código).
2. Volte aqui e resolva os exercícios daquele assunto.
3. Confira o resultado nas demonstrações interativas do Estudos-Aeds-2.

---

## 🗂️ Estrutura de pastas

```
Exercicios-Estudos-Aeds-2-/
├── README.md                          # este arquivo
├── .gitignore
│
├── ExerciciosBasicos/
│   └── 30 exercícios de AEDs 2.pdf    # enunciados dos 30 exercícios
│
└── Solucoes/                          # soluções em C
    ├── ex1.c
    ├── ex2.c
    ├── ...
    └── ex11.c
```

---

## 📋 Os 30 exercícios

O enunciado completo está em [`ExerciciosBasicos/30 exercícios de AEDs 2.pdf`](ExerciciosBasicos). Eles são divididos por assunto, na mesma ordem do repositório de estudos:

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

---

## ✅ Soluções

A pasta `Solucoes/` reúne as resoluções em C, um programa por arquivo (`ex1.c`, `ex2.c`, ... `ex11.c`). Cada arquivo tem o seu próprio `main`, então compile um de cada vez.

As soluções estão sendo adicionadas aos poucos: no momento a pasta cobre os exercícios de **1 a 11**, e os demais serão incluídos conforme forem resolvidos.

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
4. Por último, compare suas respostas com as demonstrações interativas.

---

## 👤 Autor

**Gabriel Cardoso Alvares de Oliveira**