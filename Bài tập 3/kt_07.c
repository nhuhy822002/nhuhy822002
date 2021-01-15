#include <stdio.h>
#include <math.h>

int main(void) {
  //Khai bao bien
  int a, b, c;
  printf("Nhap a, b, c = ");scanf("%d%d%d",&a, &b, &c);
  if(abs(a - c) < b && b < (a + c)){
    printf("La 3 canh cua tam giac");
  } else {
    printf("Khong phai 3 canh cua tam giac");
  }
  return 0;
}
