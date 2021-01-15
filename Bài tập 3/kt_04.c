//Viet chuong trinh in ra tong cac chu so cua mot so nguyen n (n > 0) cho truoc
#include <stdio.h>
#include <iostream.h>

using namespace std;
const int DEC_10 = 10;

//Tinh tong cac chu so cua mot so nguyen duong
int totalDigitsOfNumber(int n) {
    int total = 0;
    do {
        total = total + n % DEC_10;
        n = n / DEC_10;
    } while (n > 0);
    return total;
}

//Ham main
int main() {
 int n;
    cout << "Nhap so nguyen duong n = ";
    cin >> n;
    printf("Tong cac chu so cua %d la: %d", n, totalDigitsOfNumber(n));

return 0; 
}

