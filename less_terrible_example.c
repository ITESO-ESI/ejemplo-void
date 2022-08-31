//
// Created by Josean Camarena on 28/08/22.
//
#include "stdio.h"

int main(void)
{
  int mi_entero = 12;
  int *mi_apuntador_con_un_nivel = &mi_entero;
  int **mi_apuntador_con_dos_niveles = &mi_apuntador_con_un_nivel;

  printf("Direccion de mi_entero: %p\n", &mi_entero);
  printf("Valor de mi_apuntador: %p\n", mi_apuntador_con_un_nivel);
  printf("Valor de mi_entero a traves de mi apuntador con dos niveles: %p\n", mi_apuntador_con_dos_niveles);



  /* int matrix[][1] = {{872}};


  int cero_indireccion = matrix[0][0];
  int* primer_nivel = matrix[0];
  int** segundo_nivel = &primer_nivel;


  printf("%d\n", (**segundo_nivel));
 */

  return 0;
}
