//Viet chuong trinh in ra cac so le tu 1 den 20 ngoai tru cac so 5, 11, 15
#include <stdio.h>

int main ()
{
// Khai bao bien
  int i;
  for(i = 1; i <= 20; i+= 1)
  {
    if ((i == 5) || (i == 11) || (i == 15)) // || la hoac
        continue;
    printf("%5d", i);
  }
  
return 0;
}
