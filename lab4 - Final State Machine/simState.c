#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
A B F
B E H
C F E
D B A
E A C
F G F
G H D
H C D

Your starting state is: H
*/

struct stateMachine {
    char thisState;
    int running;
    struct stateMachine *forZero;
    struct stateMachine *forOne;
};

typedef struct stateMachine *node;

void printStates(node A,  node B,  node C,  node D,  node E,  node F,  node G,  node H){
  if(A->running == 1)
    printf("A %c %c\n",(A->forZero)->thisState,(A->forOne)->thisState);
  if(B->running == 1)
    printf("B %c %c\n",(B->forZero)->thisState,(B->forOne)->thisState);
  if(C->running == 1)
    printf("C %c %c\n",(C->forZero)->thisState,(C->forOne)->thisState);
  if(D->running == 1)
    printf("D %c %c\n",(D->forZero)->thisState,(D->forOne)->thisState);
  if(E->running == 1)
    printf("E %c %c\n",(E->forZero)->thisState,(E->forOne)->thisState);
  if(F->running == 1)
    printf("F %c %c\n",(F->forZero)->thisState,(F->forOne)->thisState);
  if(G->running == 1)
    printf("G %c %c\n",(G->forZero)->thisState,(G->forOne)->thisState);
  if(H->running == 1)
    printf("H %c %c\n",(H->forZero)->thisState,(H->forOne)->thisState);
}

int main(int argc, char * argv[]){

    node A,B,C,D,E,F,G,H;
    A = (node)malloc(sizeof(struct stateMachine));
    B = (node)malloc(sizeof(struct stateMachine));
    C = (node)malloc(sizeof(struct stateMachine));
    D = (node)malloc(sizeof(struct stateMachine));
    E = (node)malloc(sizeof(struct stateMachine));
    F = (node)malloc(sizeof(struct stateMachine));
    G = (node)malloc(sizeof(struct stateMachine));
    H = (node)malloc(sizeof(struct stateMachine));

    A->thisState = 'A';
    A->forZero = B;//when zero entered
    A->forOne = F;//when one entered
    A->running = 1;//running will see if the link has been removed or not in later applications

    B->thisState = 'B';
    B->forZero = E;
    B->forOne = H;
    B->running = 1;

    C->thisState = 'C';
    C->forZero = F;
    C->forOne = E;
    C->running = 1;

    D->thisState = 'D';
    D->forZero = B;
    D->forOne = A;
    D->running = 1;

    E->thisState = 'E';
    E->forZero = A;
    E->forOne = C;
    E->running = 1;

    F->thisState = 'F';
    F->forZero = G;
    F->forOne = F;
    F->running = 1;

    G->thisState = 'G';
    G->forZero = H;
    G->forOne = D;
    G->running = 1;

    H->thisState = 'H';
    H->forZero = C;
    H->forOne = D;
    H->running = 1;

    node currentState = H;

    printf("\n");
    printf("Current State is: %c\n", (H->thisState));
    printf("Note to use c function, please first type c, and follow instructions after\n");
 
    char input[5];
    scanf(" %c", &input[5]);
    //NextState is 0
     while(input[5] != 'N'){
            if(input[5] == '0'){
            printf("%c\n",(currentState->forZero)->thisState);//utilized pointer to make easy for cases
            currentState = currentState->forZero;//updates the current state, goes back to column 1
        }
           if(input[5] == '1'){ //Column 3 of the FSM from current state
            printf("%c\n",(currentState->forOne)->thisState);//utilized pointer to make easy for cases
            currentState = currentState->forOne; //updates the current state, goes back to column 1
        }
            if(input[5] == 'p'){
            printStates(A,B,C,D,E,F,G,H); //This statement prints the FSM 
	}
	    if(input[5]=='c'){ //we are now accounting for change function
		printf("Enter Letter you wish to change to: ");
	        scanf(" %c", &input[4]);
          	if(input[4] == 'A'){ //Changing current state to A
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(A->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = A;
				}
              			if(input[3]== '1')
               				currentState->forOne = A;
				}
          	if(input[4] == 'B'){ //Changing current state to B
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(B->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = B;
				}
              			if(input[3]== '1')
               				currentState->forOne = B;
				}
          	if(input[4] == 'C'){ //Changing current state to C
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(C->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = C;
				}
              			if(input[3]== '1')
               				currentState->forOne = C;
				}
          	if(input[4] == 'D'){ //Changing current state to D
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(D->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = D;
				}
              			if(input[3]== '1')
               				currentState->forOne = D;
				}
          	if(input[4] == 'E'){ //Changing current state to E
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(E->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = E;
				}
              			if(input[3]== '1')
               				currentState->forOne = E;
				}
          	if(input[4] == 'F'){ //Changing current state to F
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(F->running == 1){
              			if(input[3]== '0')
                			currentState->forZero = F;
				}
              			if(input[3]== '1')
               				currentState->forOne = F;
				}

          	if(input[4] == 'G'){ //Changing current state to G
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(G->running == 1){
              			if(input[3]== '0') //IF USER enters 0, we also make G current state
                			currentState->forZero = G;
				}
              			if(input[3]== '1') // Also if USER enters 1, we make G current state
               				currentState->forOne = G;
				}

          	if(input[4] == 'H'){ //Changing current state to G
			printf("Enter #: ");
			scanf(" %c", &input[1]);
           		if(H->running == 1){
              			if(input[3]== '0') //IF USER enters 0, we also make H current state
                			currentState->forZero = H;
				}
              			if(input[3]== '1') // Also if USER enters 1, we make G current state
               				currentState->forOne = H;
				}
		}

    scanf(" %c",&input[5]);//input[5] dedicates this slot to the input between 0 and 1
    }
    exit(0);
}