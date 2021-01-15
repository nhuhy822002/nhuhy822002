#include <stdio.h>
int main(void) {
  // khai bao bien a, b kieu int
  int a, b;
  // khoi tao bien a = 3
  a= 3;
  // khoi tao bien b = 5
  b= 5;
  int tong, hieu, tich;
  double thuong;
  tong = a + b;
  hieu = a - b;
  tich = a * b;
  thuong = (double)a / b;
  printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
  return 0;
}
