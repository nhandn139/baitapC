//Tính cước Taxi

#include <stdio.h>

int main(){
    int km;
    do{
    printf("Nhap so km: ");
    scanf("%d", &km);
    }while(km<=0);

    int tinhtien;
    if(km > 31){
        tinhtien = (km - 31)*3000 + 30*4000 + 1*5000;
    }
    else if (km>1 && km<=31){
        tinhtien = (km - 1)*4000 + 1*5000;
    }
    else tinhtien = 1*5000;
    
    printf("Tong tien taxi la: %d VND", tinhtien);
}