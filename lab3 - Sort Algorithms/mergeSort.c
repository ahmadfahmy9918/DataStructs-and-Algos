#include "mySort.h"
void merge(int array[], unsigned int f, int centre, unsigned int l){
	// first = f, l = last, centre = middle
	int k=0;//used in loop
	int n=0;//used in loop
	int key=0;//place-holder
	int r_size = (l-centre);//index length from right to center
	int l_size = ((centre-f)+1);//index length, right beside center to end
	int right[r_size];//array from right, with proper index size 
	int left[l_size];//array from left, with proper index size
	for(n=0;n< l_size; n++)
		myCopy(&array[f+n], &left[n]); //copy method utlizized here 
			for(k=0;k<r_size;k++)
				right[k]=array[(centre+k)+1];
	n=0; //re-setting to 0
	k=0; //re-setting to 0
	key=f;// key is now first 
	while(n<l_size && k<r_size){
		if(left[n] <= right[k]){
			array[key]=left[n];
			n++;
     			}
		else{
			array[key]=right[k];
        		k++;
     			}
		key++; //swap complete for first part
	}
	while(k<r_size){
		array[key]=right[k];
		key++;
		k++;
		}
	while(myCompare(n,l_size)){ //compare method utilized here
		array[key]=left[n];
		key++;
		n++;
    		}
}
void mySort(int array[], unsigned int f, unsigned int l){
	if (f<l){
		int centre = (f+l)/2;
		int besideCentre = centre+1; // slot beside center
		mySort(array,f,centre); // sending one part of whole numberset
		mySort(array,besideCentre,l); // sending second part of numerset
		merge(array,f,centre,l);//merges the whole numbers
    		}
}
