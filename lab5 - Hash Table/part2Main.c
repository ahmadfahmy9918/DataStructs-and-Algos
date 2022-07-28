#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int entry[1000]={0};//empty arrays for part 2
int increment[1000]={0};//empty arrays for part 2
int j,s;

int main(int argc, char * argv[]){
  int ch;
  int character_2;
  
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))			//step ignored if doesn't satisfy
      continue;

    else if(ch == '<'){			// checks if opening statement contains the "<"
	ch = getchar();				//stores next character in the ch integer
	if(isalpha(ch)){
		if(getchar()!= '>'){
			fprintf(stderr,"Invalid: Must Contain a Closing Tag\n");//error message for missing ending tag
			break;
				}
		else{
			push(ch);
			entry[ch] = ch;
			increment[ch] = increment[ch]+1;
		    }
		}
		else if(ch == '/'){
			ch = getchar();
			if(isalpha(ch)){
				if(getchar() == '>'){
					character_2 = pop();//pops second entry
					if(character_2 != ch){ 	//seeing if second entry i.e <a></a> is a or it is something else
						fprintf(stderr,"Invalid: Invalid Entry. Entry does not match previous letter\n");
						break;
					}
				}
			else{
				fprintf(stderr,"Invalid: Last Entry does not contain ending tag\n");
				break;
           		    }
          		}
		     }
		  }
  		}
   fprintf(stdout, "Valid\n");
   for(j=0;j<1000;j++){
   if((entry[j]>0) && (increment[j]>0) ){
      putchar(entry[j]);
      printf("%d\n", increment[j]);
    }
  }
  exit(0);
}
