//Sắp xếp mảng tăng dần giảm dần

#include <stdio.h>

int Tangdan(int a[], int n){
    int key, j, i, count = 0;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i-1;
        while (j>=0 && a[j] > key){
                a[j+1] = a[j];
                j--;
            }
        a[j+1] = key;
    }
}

int Giamdan(int a[], int n){
    int key, j, i, count = 0;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i-1;
        while (j>=0 && a[j] < key){
                a[j+1] = a[j];
                j--;
            }
        a[j+1] = key;
    }
}

int main(){
    int a[] = {6,4,8,7,5,2,3,9,1};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Mang ta co: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    Tangdan(a,n);
    
    printf("\nMang tang dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    Giamdan(a,n);
    
    printf("\nMang giam dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}