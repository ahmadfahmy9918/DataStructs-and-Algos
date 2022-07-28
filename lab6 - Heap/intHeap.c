/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();


struct leaf{
	int store;//temporarily stores values
	struct leaf *Child_Right;//right child
	struct leaf *Child_Left;//left child
	//these structures will be used for chilld on left and right
};
//instance variables
int heap[25];
int increment, j, right, left;
int increment = 0;
int j=0;
int z=0;
int right = 0;
int left = 0;

struct leaf *TempLeaf(int a){ //here we are using structure to create a temporary leaf
	struct leaf *key = (struct leaf*)malloc(sizeof(struct leaf));
	key->store = a;
	key->Child_Left = key->Child_Right = NULL;
	return key;
}

void merge(struct leaf *top){//this puts everything in the correct order
	if(top != NULL){
		merge(top->Child_Left);
		printf("%d \n", top->store);
		j++;
		push(top->store);
		merge(top->Child_Right);
	}
	else if(j == increment){
		printf("\n");
		printf("<node=id %d>\n", heap[0]);
		print(1);//sending to print statement
		heapDelete();
	}
}
void print(int count){
	printf("node=id: %d>", heap[count]);
	if((2*count+1)<increment){
		print(2*count+1);
		printf("</node>");
		}
	if(2*count<increment){
		print(2*count);
	}
	printf("</node> \n");
}
struct leaf*place(struct leaf* leaf, int store){ //THIS method utilizes recurssion
	if(leaf == NULL){
		return TempLeaf(store); //adding new leaves  to binary tree
		exit(0);
	}
	else if(store > leaf->store){
		leaf->Child_Left = place(leaf->Child_Left, store);
		left++;
	}
	else if(store < leaf->store){
		leaf->Child_Right = place(leaf->Child_Right, store);
		right++;
	}
	return leaf;
}

int heapDelete()
{
	printf("\n Heap popped from stack\n");
	for (j=0;j<increment;j++){
		pop();
	}
 exit(1);
 return 0;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	if(thing2add == EOF)
	  sort();
	  heap[increment] = thing2add;//stores each value user enters
	  increment++;
}
int sort(){
	struct leaf *top = NULL;
	top = place(top, heap[0]);
	int k=1;
		while(k<increment){
			place(top,heap[k]);//sending to our structure, which will organize these
			k++;
		}
	merge(top);//makes sure root at top
	return 0;
}
/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return 0;  //Did not require this method
}
