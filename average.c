#include <stdio.h>

int main(void){
 int i, numberOfNums=0, total=0, value;
 float average;

 printf('How many numbers are to be read?');
 scanf("%d", &numberOfNum);


 for(i=0; i <numberOfNums; i++){
  printf("What is the Value");
  scanf("%d", &value);
  total += value; //equivalent to total = total + value
  printf("Read %d\n", value);
 } 

 average = (float)total / (float)numberOfNums;
 printf("You read %d values. Average = %f.\n", numberOfNums, average);
 return(0);
}
