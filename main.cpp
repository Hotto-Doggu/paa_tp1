#include "sortingAlgorithms.hpp"
#include <algorithm>    // shuffle
#include <vector>
#include <random>       // default_random_engine
#include <chrono> 
#include <iostream>
using namespace std::chrono;

int* instanceGenerator(int n);

int main(int argc, char *argv[ ]) {
	if(argc != 3) {
		cout << "wrong input, try './exe n sortAlgorithm'\n\t1: radix sort\n\t2: merge sort\n\t3: insertion sort" << endl;
		return 1;
	}
	
	int n = atoi(argv[1]);
	int* v = new int[n];

	duration<double> time, total;

	for (int i = 0; i < 20; i++) {
		v = instanceGenerator(n);

		if(atoi(argv[2]) == 1) {
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			radixSort(v, n);
			high_resolution_clock::time_point t2 = high_resolution_clock::now();
			time = duration_cast<duration<double> >(t2 - t1);
			total += duration_cast<duration<double> >(t2 - t1);
		}
		else if(atoi(argv[2]) == 2) {
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			mergeSort(v, 0, n);
			high_resolution_clock::time_point t2 = high_resolution_clock::now();
			time = duration_cast<duration<double> >(t2 - t1);
			total += duration_cast<duration<double> >(t2 - t1);
		}
		else {
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			insertionSort(v, n);
			high_resolution_clock::time_point t2 = high_resolution_clock::now();
			time = duration_cast<duration<double> >(t2 - t1);
			total += duration_cast<duration<double> >(t2 - t1);
		}
		printf("\t\ti: %d -- tempo: %lf \n", i, time.count());
	}
	printf("Tempo total de execucao : %lf segundos \n", total.count());

	delete[] v;

	return 0;
}


int* instanceGenerator(int n) {

	vector<int> aux;

	for (int i = 0; i < n; i++)
	{
		aux.push_back(i);
	}

 	// obtain a time-based seed:
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();

	shuffle (aux.begin(), aux.end(), default_random_engine(seed));

	//---------------
	int* instance = new int[n];

	for (unsigned i=0; i<aux.size(); i++)
	{
		instance[i] = aux[i];
	}

	return instance;	
}