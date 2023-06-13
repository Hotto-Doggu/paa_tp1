#include "sortingAlgorithms.hpp"

void insertionSort(int* v, int n) {

    int temp, j;

    for(int i=1; i<n; i++)   
    {  
        temp = v[i];  
        j= i-1;  
        while(j>=0 && temp <= v[j])  
        {  
            v[j+1] = v[j];   
            j = j-1;  
        }  
        v[j+1] = temp;  
    } 
}

void selectionSort(int* v, int n) {
    int i, j, min_idx, swap_aux;
 
    for (i = 0; i < n-1; i++) {       
        min_idx = i;

        for (j = i+1; j < n; j++) 
            if (v[j] < v[min_idx])
                min_idx = j; 

        if(min_idx!=i) {
            swap_aux = v[min_idx];
            v[min_idx] = v[i];
            v[i] = swap_aux;
        }
    }
}

void mergeSort_intercala(int *vetor, int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    
    vetAux = new int[tam];

    while(com1 <= meio && com2 <= fim){

        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }
    
   delete[] vetAux;
}


void mergeSort(int *vetor, int comeco, int fim) {
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        mergeSort_intercala(vetor, comeco, meio, fim);
    }
}


void radixSort(int* v, int n) {
    int i;
    int *b;
    int maior = v[0];
    int exp = 1;

    b = new int[n];

    for (i = 0; i < n; i++) {
        if (v[i] > maior)
            maior = v[i];
    }

    while (maior/exp > 0) {
        int bucket[10] = { 0 };
        for (i = 0; i < n; i++)
            bucket[(v[i] / exp) % 10]++;
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for (i = n - 1; i >= 0; i--)
            b[--bucket[(v[i] / exp) % 10]] = v[i];
        for (i = 0; i < n; i++)
            v[i] = b[i];
        exp *= 10;
    }

    delete[] b;
}