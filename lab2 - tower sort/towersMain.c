#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n;
    int from;
    int dest;
    if (argc > 3) {
        n = atoi(argv[1]);
	from = atoi(argv[2]);
	dest = atoi(argv[3]);
    }
    else
    {
    if (argc == 2){
	n = atoi(argv[1]);
	from = 1;
	dest = 2;
    }
    else
    {
	n = 3;
	from = 1;
	dest = 2;
    }
    }
    if (n<0){
	fprintf(stderr, "Error: N should be a positive integer only");
	return;
    }

    if (from<0){
	fprintf(stderr, "Error: From should be a positive integer only");
	return;
    }
    if (dest<0){
	fprintf(stderr, "Error: Desitination should be a positive integer only");
	return;
    }
    if (argc == 3)
    {
	fprintf(stderr,"Error: Three Inputs Required.");
	return;
    }
    towers(n, from, dest);
    return;
}

