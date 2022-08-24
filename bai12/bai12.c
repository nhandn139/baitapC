// Tim giá trị xuất hiện nhiều lần nhất trong mảng, in ra giá trị và vị trí của nó
#include <stdio.h>

int XuatHienNhieuNhat(int a[], int n, int *gtmax){
    int max = 0;
    int key, j, i;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if(a[i]==a[j]){
                count++;
            }
        }
        if (max < count){
            max = count;
            *gtmax = a[i];
        }
    }
    return max;
}

void Vitri(int a[], int n, int gtmax){
    for (int i = 0; i < n; i++)
    {
        if (a[i] == gtmax)
            printf("%d ", i+1);
    }
}

int main(){
    int a[] = {6,4,6,2,5,6,3,6,8};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Mang ta co: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    int gtmax = 0;
    if (XuatHienNhieuNhat(a,n,&gtmax) > 1){
        printf("\nSo %d xuat hien %d lan", gtmax , XuatHienNhieuNhat(a,n,&gtmax));
        printf(" tai vi tri: ");
        Vitri(a, n, gtmax);
    }
    
    else printf("\nKhong co so nao xuat hien qua 1 lan");
}