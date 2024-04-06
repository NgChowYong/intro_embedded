
#include "computation.h"
#include <stdio.h>

#define ARR_SIZE 8

void print_array(uint16_t * ptr, uint16_t size){
  printf("print array: ");
  for (int i=0; i<ARR_SIZE; i++){
    printf("%d ", ptr[i]);
  }
  printf("\n");
}

int main(void){

  uint16_t my_arr[ARR_SIZE] = {5,4,3,2,1,8,7,6};

  print_array(my_arr, ARR_SIZE);
  sort_arr(my_arr, ARR_SIZE);
  print_array(my_arr, ARR_SIZE);

  return 0;
}
