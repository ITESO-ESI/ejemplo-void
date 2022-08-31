#include <stdio.h>

int main() {
  int mi_matriz[5][5];
  int *mi_super_pointer[5];

  int row_1[5] = {1,2,3,4,5};
  int foo; //ignoren esto
  int bar;
  int lol;
  int row_2[2] = {1,3};

  mi_super_pointer[0] = row_1;//mi_matriz[0];
  mi_super_pointer[1] = row_2;

  mi_matriz[0][0] = 12;
  mi_matriz[0][1] = 45;
  mi_matriz[1][3] = 75;
  mi_matriz[1][0] = 123;

  //int *mi_arreglo = mi_matriz[0];
  //int *mi_arreglo_dos = mi_matriz[1];

  //printf("%d", *(mi_arreglo_dos+3));

  printf("%d\n", *(*(mi_super_pointer+1)+1));

  //printf("%d", mi_matriz[0][0]);
  return 0;
}
