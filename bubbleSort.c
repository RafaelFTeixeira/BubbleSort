#include <stdio.h>

void Troca(int vetor[], int indice);
void BubbleSort(int vetor[], int tamanhoDoVetor);
void Imprimir(int vetor[], int tamanhoDoVetor);

int main() {
  int tamanhoDoVetor = 10;
  int vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

  BubbleSort(vetor, tamanhoDoVetor);
  Imprimir(vetor, tamanhoDoVetor);

  return 0;
}

void BubbleSort(int vetor[], int tamanhoDoVetor) {
  int temTroca = 0;
  for(int i = 0; i < tamanhoDoVetor - 1; i++) {
      if(vetor[i] > vetor[i+1]) {
        Troca(vetor, i);
        temTroca = 1;
      }
  }
  if(temTroca != 0) {
    BubbleSort(vetor, tamanhoDoVetor - 1);
  }
}

void Troca(int vetor[], int indice) {
  int aux = vetor[indice];
  vetor[indice] = vetor[indice+1];
  vetor[indice+1] = aux;
}

void Imprimir(int vetor[], int tamanhoDoVetor) {
  for(int i = 0; i < tamanhoDoVetor; i++) {
    printf("%d ", vetor[i]);
  }
}