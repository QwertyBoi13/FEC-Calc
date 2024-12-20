#include <stdio.h>
#include <stdlib.h>

void usage(char *cmd) {
  printf("Usage Examples\n");
  printf("10 + 10\n");
  printf("10 - 10\n");
  printf("don't input ./main before doing 10 + 10 or it won't work\n Also make sure it isn't on interactive mode");
  //I struggled with this for an hour trying to figure out the command line
  exit(0);
}

int main(int argc, char *argv[]) {
  printf("Calc by Levi Leichtfuss\n");
  if (argc != 4) {
    usage(argv[0]);
  }
  
  int num1 = atoi(argv[1]);
  char op = *argv[2];
  int num2 = atoi(argv[3]);
   // printf("%s, %s, %s\n", argv[1], argv[2], argv[3]);
  int result;
  switch (op) {
    case '+': result = num1 + num2; 
    break;
    case '-': result = num1 - num2;
    break;
    default: 
      printf("????\n");
      usage(argv[0]);
  }
  printf("result: %d\n", result);
  return 0;
}
