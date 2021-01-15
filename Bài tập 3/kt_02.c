// Giai phuong trinh bac 2: ax^2 + bx + c = 0 
#include <stdio.h>
#include <math.h>

void GiaiPhuongTrinhBacHai(float a, float b, float c)
{
  if ( a == 0 )
  {
  if ( b == 0 )
    printf("\n Phuong trinh vo nghiem");
  else
    printf("\n Phuong trinh co 1 nghiem: x = %f", -c/b);
  }
  else // a # 0
  {
    float delta, x1, x2;
    delta = b*b - 4*a*c;
    if (delta > 0)
    {
      x1 = ((-b + sqrt(delta))/ 2*a);
      x2 = ((-b - sqrt(delta))/ 2*a);
      printf("\n Phuong trinh co 2 nghiem: x1 = %f, x2 = %f", x2, x2);
    }
    else if (delta == 0)
    {
      x1 = (-b/(2*a));
      printf("\n Phuong trinh co nghiem kep: x1 = x2 = %f", x1);
    }
    else
      printf("\n Phuong trinh vo nghiem!");
  }
}
int main() 
{
// Khai bao bien
  float a, b, c;
  printf("\n Nhap he so bac 2: a = " );
  scanf("%f",&a);
  printf("\n Nhap he so bac 1: b = " );
  scanf("%f",&b);
  printf("\n Nhap he so tu do: c = " );
  scanf("%f",&c);
  // Goi ham tinh toan, xu ly phuong trinh bac hai
  GiaiPhuongTrinhBacHai (a,b,c);
  return 0;
}


