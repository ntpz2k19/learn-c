#include <stdio.h>
#include <string.h>

int main(){
  char *word[] = {"Hilmi", "Usman", "Adil"};
  printf("ini berikut string array:\n");
  for (int i = 0;i < 3; i++){
       printf("%s\n", word[i]);
}
  return 0;
}
