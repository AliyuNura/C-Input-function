//This is an input function design to accept string input of very high length \
in other to avoid the buffer overflow error that occur when \
the limit of scanf() and get functions is excided.The functions \
tends to store some characters that they cannot score,due to this \
most C programs crashes.\
\\**THE FEATURES OF THE DESIGN ARE AS FOLLOWS**\\      \
1) Ability to read white spaces \
2) Ability to stop when it sees newline character '\n' \
3) Ability to discard extra characters \
4) Returns number of characters stored in the array

#include <stdio.h>
#define MAX 1000
int input(char [],int);
int main(){
  char str[MAX];
  int n = input(str,10);
  printf("%d %s",n,str);
return 0;
}
int input(char str[],int len){
  int ch,i=0;
  while((ch=getchar()) != '\n'){
    if(i<len){
      str[i++] = ch;
    }
    str[i]='\0';
  }
  return i;
}
