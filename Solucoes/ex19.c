#include <stdio.h>

#define MAX 3

typedef struct FilaCircular {
    char vet[MAX + 1];
    int primeiro, ultimo;
} FilaCircular;

void inicializar(FilaCircular *f) {
    f->primeiro = 0;
    f->ultimo = 0;
}

int estaVazia(FilaCircular *f) {
    if (f->primeiro == f->ultimo) {
        return 1;
    }
    return 0;
}

int estaCheia(FilaCircular *f) {
    if (((f->ultimo + 1) % (MAX + 1)) == f->primeiro) {
        return 1;
    }
    return 0;
}

void inserir(FilaCircular *f, char x) {
    if (estaCheia(f)) {
        printf("Erro: Fila cheia!\n");
        return;
    }
    f->vet[f->ultimo] = x;
    f->ultimo = (f->ultimo + 1) % (MAX + 1);
}

char remover(FilaCircular *f) {
    if (estaVazia(f)) {
        printf("Erro: Fila vazia!\n");
        return '\0';
    }
    char resp = f->vet[f->primeiro];
    f->primeiro = (f->primeiro + 1) % (MAX + 1);
    return resp;
}

void mostrar(FilaCircular *f, const char *passo) {
    printf("%-18s vazia=%d cheia=%d  fila: [ ", passo, estaVazia(f), estaCheia(f));
    int i = f->primeiro;
    while (i != f->ultimo) {
        printf("%c ", f->vet[i]);
        i = (i + 1) % (MAX + 1);
    }
    printf("]\n");
}

int main() {
    FilaCircular fila;
    inicializar(&fila);
    mostrar(&fila, "Inicio:");

    inserir(&fila, 'A');
    mostrar(&fila, "Inserir A:");

    inserir(&fila, 'B');
    mostrar(&fila, "Inserir B:");

    inserir(&fila, 'C');
    mostrar(&fila, "Inserir C:");

    char removido = remover(&fila);
    printf("Elemento removido: %c\n", removido);
    mostrar(&fila, "Apos remover:");

    inserir(&fila, 'D');
    mostrar(&fila, "Inserir D:");

    return 0;
}