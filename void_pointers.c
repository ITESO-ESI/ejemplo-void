//
// Created by Josean Camarena on 28/08/22.
//

#include "stdio.h"

// void return from function, void arguments
void say_hello()
{
  printf("Hello!\n");
}

// void return
void greet(void *name)
{
  printf("Hello, %s\n", ((char*)name));
  return;
}



typedef struct
{
  int miarry[1000000];
  char mi_char_arry[1000000];
}
EvilStruct;


int main(void)
{
  unsigned int mi_entero =1;
  unsigned long long int lolzors = 8589934592;

  unsigned int *mi_apuntador_a_entero = &mi_entero;
  void *mi_void_pointer = mi_apuntador_a_entero;
  char *mi_caracter = mi_void_pointer;

  // printf("%lu", sizeof(EvilStruct));

  printf("%d\n", *((float*) mi_void_pointer));
  // printf("%d\n", *mi_apuntador_a_entero);
  // printf("%d\n", mi_entero);
  greet("Josean");

  // int *mi_apuntador = &mi_entero;

}