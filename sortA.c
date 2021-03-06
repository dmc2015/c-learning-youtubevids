#include <stdio.h>

#define MAX 10 //preprocessor directive - when using ‘MAX’ in the program the value for MAX will be defined as 10

int main(void) {

  int data[MAX];
  int i, j, tmp;
  FILE *fp; //pointer variable for file

  // read the data
  fp = fopen("input.txt", "r");

  if(fp == NULL){printf("Could not open file\n"); return(0);}


  for(i = 0; i<MAX; i++){
    // printf("Enter item #%d:", i); CHANGED
    // scanf("%d", &data[i]);
    fscanf(fp, "%d", &data[i]);
  }

  fclose(fp);

  printf("You entered the following items:\n");

  for(i=0; i<MAX; i++){
       printf("item #%d: %d\n", i,data[i]);
  }

  //simple sort

  for(i=0; i<MAX; i++){
    for(j=i; j<MAX; j++){
      if (data[i] > data[j]){
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }

// 0 6
// 1 1
// 2 8
// 3 4
// 4 9

fp = fopen("output.txt", "w");
if(fp == NULL){printf("Could not open file\n"); return(0);}


fprintf(fp, "\n Sorted data: \n");
for(i=0; i<MAX; i++){
  fprintf(fp, "item #%d: %d\n", i, data[i]);
}
fclose(fp);


// printf("\n Sorted data: \n");
// for(i=0; i<MAX; i++){
//   printf("item #%d: %d\n", i, data[i]);
// }

  return(0);
}
