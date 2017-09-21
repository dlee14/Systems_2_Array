#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
  int arr_one[10], arr_two[10], i;

  //create random order with seed
  srand(1);

  //assign random values from 0-8
  for (i = 0; i < 9; i++) {
    arr_one[i] = rand();
  }

  //set last value to 0
  arr_one[9] = 0;

  //printing
  for (i = 0; i < 10; i++) {
    printf("arr_one[%d]: %d\n", i, arr_one[i]);
  }

  //declaring pointers and populating the second array
  int * p;
  for (i = 9; i >= 0; i--) {
    p = &arr_one[i];
    arr_two[9 - i] = *p;
  }
  
  //printing
  for (i = 0; i < 10; i++) {
    printf("arr_two[%d]: %d\n", i, arr_two[i]);
  }

}
