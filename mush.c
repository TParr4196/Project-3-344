#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {
  while(1){
    printf("Welcome to mush. Enter you commands below:\n");
    char *response = (char *) malloc(2048*sizeof(char));
    fgets(response, 128, stdin);
    char* holder[128] = {};
    int i=0;
    int tokenizing=1;
    holder[i]=strtok(response, " ");
    printf("%s\n", holder[i]);
    while(tokenizing){
      holder[i]=strtok(NULL, " ");
      if (holder[i]==NULL){
        tokenizing=0;
      }
      i+=1;
    }
    int j=0;
    while(j<i){
      printf("%s\n", holder[j]);
      j+=1;
    }
  }
}
