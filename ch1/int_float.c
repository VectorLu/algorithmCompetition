#include <stdio.h>
#include <math.h>
int main() {
  //the argument formats should correspond with each other
  //int - %d , real number - %f
  //int/int = int; float/float = float;
  //if use 8/5, on mac the output is 0, because 8/5 is int
  //if use "%d", the output is 1606416392(maybe other numbers)
  printf("%.1f\n", 8.0/5.0);
  printf("%.8f", 1 + 2*sqrt(3)/(5-0.1));
  printf("\n");
  return 0;
}
