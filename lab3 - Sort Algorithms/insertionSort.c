#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
{
	int j;
	int key;
	int k;
	for (j=first; j <= last; j++){
		key = array[j];
		k = j-1;
	while (k>=0 && (myCompare(array[k], key) >0)){

	mySwap(&array[k+1], &array[k]);
	k--;
	myCopy(&key, &array[k+1]);
	}
    }
}
