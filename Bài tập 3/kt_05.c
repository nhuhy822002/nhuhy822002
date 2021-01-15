#include <stdio.h>

int main(void) {
  //khai bao bien
  int n,i;
  printf(" Nhap n = ");scanf("%d",&n);
  int s1 = 0, s2= 0;
  for(i = 1; i <= n; i++){
    if(i % 2 == 0){
      //chan
      s1 = s1 + i;
    }else {
      //le
      s2 = s2 + i;
    }
  }
  printf("Tong so chan s1 = %d\n",s1);
  printf("Tong so le s2 = %d",s2);
  return 0;
}
