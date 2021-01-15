#include <stdio.h>
#include <math.h>

int main(void) {
	//Khai bao bien
  int h;
  printf("Nhap h = ");scanf("%d",&h);
  //a. Tam giac can dac nam giua man hinh
  if(h > 0){
    int i,j;
    for(i = 1; i <= h; i++){
    for(j = 1; j < h * 2; j++){
    	//abs tri tuyet doi
        if(abs(h - j)<= (i - 1)){
            printf(" * ");
        } else {
        printf("   ");
        }
      }
        printf("\n");
    }
  } else {
    printf("Nhap h > 0");
  }
  int k,a,b ;
  k = h -1;
  //b. Tam giac can rong nam giua man hinh
  for(a = 0; a < h - 1; a++){
  for(b = 0; b < 2 * h - 1; b++){
  		// || co nghia la hoac
        if(b == k - a || b == k + a){ printf(" * ");
        } else {
          printf("   ");
        }
      }
        printf("\n");
    } for(a = 0; a < 2 * h - 1; a++) printf(" * ");
  return 0;
}
