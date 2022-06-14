#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp es abreviacion para string compare
// devuelve 0 si los dos strings son iguales

int main(int argc, char *argv[]) {
  printf("Ingrese contraseña mufa\n");
  char *password = "1234";
  // char *password = "";
  // scanf("%s\n", &password);
  if (strcmp(password, "1234") == 0) 
    printf("Autorizado\n");

  else
  printf("contraseña incorrecta\n");
  return 0;
}
