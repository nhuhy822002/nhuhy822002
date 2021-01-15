#include <stdio.h>

int main(){
	//Khai bao bien 
	float dongia,thanhtien;
	int soluong;
	//Nhap don gia cua mon hang va so luong
	printf("Nhap so luong muon mua: ");
	scanf("%d",&soluong);
	printf("Nhap gia mon hang: ");
	scanf("%f",&dongia);
	
	if (soluong>=5){//kiem tra so luong mua >= 5 
		//giam gia 50% = 50/100
		thanhtien = (dongia*soluong)*500/100;
		printf("Thanh tien: %g",thanhtien);
	}
	else{//so luong mua tu >=5 
		thanhtien = (dongia*soluong);
		printf("Thanh tien: %g",thanhtien);
	}
	
	getchar();
	return 0;
}
