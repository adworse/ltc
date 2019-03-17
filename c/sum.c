#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
  return a + b;
}

int main(int argc, char const *argv[]) {

  if (argc != 3) {
    fprintf(stderr, "usage: %s argument1 argument2\n", argv[0]);
    exit(1);
  }


  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("The sum is %d\n", sum(a, b));
  return 0;
}