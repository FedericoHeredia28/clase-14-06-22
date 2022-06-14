#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  srand(atoi(argv[1]));
  int matriz[4][4];
  int seq[] = {1,2,3,4,5,6,7,8,9};
  // mezclamos la secuencia (seq)
  for (int i = 0; i < 200; i++) {
    int r = rand() % 9;
    int s = rand() % 9;
    int temp= seq[r];
    seq[r] = seq[s];
    seq[s] = temp;
  }

  int k = 0;
  for (int i = 0; i < 4; i++) {
    int suma = 0;
    for (int j = 0; j < 4; j++) {
      if (i != 3 && j != 3) {
        matriz[i][j] = seq[k++];
        suma += matriz[i][j];
      }
      else
      matriz[i][j] = suma;
    }
  }
  //suma de columnas
  for (int i = 0; i < 3; i++) {
    int suma = 0;
    for (int j = 0; j < 4; j++) {
      if ( j != 3)
      suma += matriz[j][i];
      else
      matriz[j][i] = suma;
    }

      }
      //imprimir la matriz
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%02d ", matriz[i][j]);
      }
      printf("\n");
    }
  matriz[3][3] = 0;
  return 0;
}
