#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
int main(int argc, char * argv[])
{
  int value;
  int count;
  printf("User may be required to press -1 mulitple times as the program has a lag\n");
  printf("Enter Values: \n");
  while (scanf("%d\n", &value) !=  EOF) {

	addHeap(value);
    count++;//Increments each value into the method
  }
  exit(0);
}
