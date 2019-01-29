#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){

	int product_max = 0;

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if((arr[i] != arr[j]) && (arr[i] * arr[j] > product_max)){
				product_max = arr[i] * arr[j];
			}
		}
	}

	return product_max;
}
