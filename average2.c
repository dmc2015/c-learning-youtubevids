#include <stdio.h>

int main(void){
 int i, numberOfNums=0, total=0, value, valsRead;
 float average;

 // printf("How many numbers are to be read? ");
 valsRead = scanf("%d", &value);


 while(valsRead > 0){
  if(value < 0){
    valsRead = scanf("%d", &value);
    continue;
  }
  numberOfNums++;
  // printf("What is the Value  ");
  //scanf("%d", &value);
  total += value; //equivalent to total = total + value
  printf("Read %d\n", value);
  valsRead = scanf("%d", &value);
 } 

 average = (float)total / (float)numberOfNums;
 printf("You read %d values. Average = %f.\n", numberOfNums, average);
 return(0);
}
