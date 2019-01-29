#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){

	int index = 0;
	for(int i = 1; i < size; i++){
		if(arr[i] > arr[index]){index = i;}
	}
	int temp = arr[size-1];
	arr[size-1] = arr[index];
	arr[index] = temp;

	index = 0;
	for(int j = 1; j < size - 1; j++){
		if(arr[j] > arr[index] && arr[j] != arr[size-1]){index = j;}
	}

	return arr[index] * arr[size-1];
}

