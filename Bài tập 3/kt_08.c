#include <stdio.h>

int main(void) {
  float a, b;
  printf("Nhap a, b = ");scanf("%f%f",&a, &b);
  if(a * b > 0){
    printf("Cung dau", a, b);
  } else {
    printf("Khong cung dau ", a, b);
  }
  return 0;
}
