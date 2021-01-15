#include <stdio.h>

int main(void) {
  // khai bao bien
  int a,b;
  // xuat ra man hinh tong tu 1 den 10
  for(a = 0, b = 1; a <10; a = a + 1)
      printf("\n %d + %d = %d",a,b,a + b);
  return 0;
}
