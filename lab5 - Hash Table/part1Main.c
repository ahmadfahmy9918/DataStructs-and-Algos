#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  int character_2;

  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')){//step ignored if doesn't satisfy
      continue;
    }
    if(ch != '<'){// checks if opening statement contains the "<"
      fprintf(stderr,"Invalid: Must Contain an Opening Tag");
      break;
  }
  ch = getchar();//stores next character in the ch integer
  if(isalpha(ch)){
        push(ch);//pushes into stack
        if(getchar()!= '>'){
          fprintf(stderr,"Invalid: Must Contain a Closing Tag");//error message for missing ending tag
          break;
        }
      }
  else if(ch == '/'){
        ch = getchar();
        if(isalpha(ch)){
              character_2 = pop();//pops second entry
              if(character_2 != ch){//seeing if second entry i.e <a></a> is a or it is something else
                fprintf(stderr,"Invalid: Invalid Entry. Entry does not match previous letter");
                break;
                }
              }

              if(getchar() != '>'){
                fprintf(stderr,"Invalid: Last Entry does not contain ending tag");
                break;
              }
          }
        }
      if(isEmpty() == 0){
    	  fprintf(stdout, "Valid\n");
      }
      else if(isEmpty() != 0){
    	  fprintf(stderr,"Invalid: Stack is currently not balanced\n");
      }
  exit(0);
}
