#include <stdio.h>
#include "TAD.h"
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }


  void insere(int arr[]){
      int ele;
      printf("Insira um novo numero: ");
      scanf("%d",&ele);
      arr[5] = ele;

  }


  void heap(int arr[], int n, int i) {

    int largo = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < n && arr[esquerda] > arr[largo])
      largo = esquerda;

    if (direita < n && arr[direita] > arr[largo])
      largo = direita;


    if (largo != i) {
      troca(&arr[i], &arr[largo]);
      heap(arr, n, largo);
    }
  }


  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heap(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      troca(&arr[0], &arr[i]);

      heap(arr, i, 0);
    }
  }

  void printMax(int arr[]){

    if(arr[0] >= arr[1]){
        printf("Heap Maximo");
    }else{
         printf("Heap Minimo");
    }
  }


  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
