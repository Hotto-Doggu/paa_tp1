#ifndef SORTINGALGORITMS_H_INCLUDED
#define SORTINGALGORITMS_H_INCLUDED

#include <iostream>
using namespace std; 

void insertionSort(int* v, int n);
void selectionSort(int* v, int n);
void mergeSort_intercala(int *vetor, int comeco, int meio, int fim);
void mergeSort(int *vetor, int comeco, int fim);
void radixSort(int* v, int n);

#endif