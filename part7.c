#include <stdio.h>


int main(int argc, char* argv[])
{
  char c = 'x';
  char greeting[5] = {'h', 'e', 'l', 'l', 'o'};
  char farewell[] = {"bye"};

  printf("%s\n", greeting); //what is this going to print out?

  printf("%s\n", &c); //how about this?

  return(0);

}
