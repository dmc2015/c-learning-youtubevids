#include <stdio.h>


int main(int argc, char* argv[])
{
  char c[2] = {'x', '\0'};
  char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char farewell[] = {"bye"};

  printf("%s\n", greeting); //what is this going to print out?

  printf("%s\n", c); //how about this?

  // return(0);

}
