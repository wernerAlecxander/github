#include <stdio.h>
#include <string.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  float z;
  float a;
  char nameFull[30];
  printf("enter a nameFull: \n");
  fgets(nameFull, sizeof(nameFull), stdin);
  printf("enter a two number: \n");
  scanf("%f, %f", &z, &a); 
  printf("Result is: %d", myFunction(z, a));
  return 0;
}