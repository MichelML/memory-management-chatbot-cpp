#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(sizeof(int));
  printf("address=%p, value=%d\n", p, *p);

  struct MyStruct {
    int i;
    double d;
    char a[5];
  };

  MyStruct *c = (MyStruct *)calloc(4, sizeof(MyStruct));
  c[0].i = 1;
  c[0].d = 3.14159;
  c[0].a[0] = 'a';
  return 0;
}