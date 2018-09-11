//Dahong Jiang

#include <stdio.h>
#include <stdlib.h>

//Problem 1
int mult_3_5(){
  int sum = 0;
  int count = 0;
  while (count != 1000) {
    if (count % 3 == 0 || count % 5 == 0) {
      sum += count;
    }
    count++;
  }
  return sum;
}

//Problem 5
int smallest_mult(){
  int count = 20;
  while( count%20 != 0 || count%19 != 0 || count%18 != 0 || count%17 != 0 || count%16 != 0 || count%15 != 0 || count%14 != 0 || count%13 != 0 || count%11 != 0){
    count++;
  }
  return count;
}


int main() {
  printf("Solution for number one: %d \n",mult_3_5());
  printf("Solution for number five: %d \n",smallest_mult());
  return 0;	
}
