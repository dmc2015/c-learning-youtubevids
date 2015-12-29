#include <stdio.h>

int main(void){
  char f,m,l;
  int age;
  printf("Enter Your Initials and your Age Please\n");
  scanf("%c %c %c %d", &f, &m, &l,  &age);
  
  printf("My initials are %c%c%c and my age is %d.\n", f, m, l, age);
//printf("My initials are %c%c%c and my age is %d.\n", 'D', 'M', 'M', 28);

  return(0);
}
