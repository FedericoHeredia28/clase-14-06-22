//  >& echo $? es el comando para ver el codigo de salida de la ultima entrada
// Escribir un programa que reciba un argumento de tipo string y busque en un array conocido en tiempo
// de compilaci ́on si el string est ́a en el array. Si est ́a el programa devuelve el  ́ındice del elemento y de lo
// contrario devuelve -1.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *busqueda = argv[1];
  char *palabras[] = {
    "albarez",     // 0
    "farfan",      //1
    "grassi",      //2
    "cavalcanti",  //3
    "lesta"        //4
  };
  for (int i = 0; i < 5; i++) {
    int j = 0;
    while (busqueda[j] != 0) {
      if (busqueda[j] != palabras[i][j]) break;
      j++;
      }
      if (busqueda[j] == 0 && palabras[i][j] == 0) {
        printf("%d\n", i);
        return 0;
      }
    }

  printf("-1\n");
  return 1;
}
