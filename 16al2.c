#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  char *palabras[] = {
    "albarez",     // 0
    "farfan",      //1
    "grassi",      //2
    "cavalcanti",  //3
    "lesta"        //4
  };
  bool nada = true;
  for (int i = 0; i < 5; i++) {
    int j = 1;
    while (j < argc) {
      if (strcmp(palabras[i], argv[j]) == 0) {
      printf("%s: %d\n", palabras[i], i);
      nada = false;
    }
    j++;
  }
  }
  if (nada) {
    printf("-1\n");
  }
  return 0;
}
