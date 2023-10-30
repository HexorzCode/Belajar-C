#include <stdio.h>
int main(){
    int n,i;
    printf("masukan jumlah array yg mau di input : ");
    scanf("%d",&n);

    int arr[n],ganjil[n],genap[n];
    int count = 0,count2 = 0;
    for (i = 0; i < n; i++)
    {
        printf("array - %d : ",i);
        scanf("%d",&arr[i]);
        if (arr[i] % 2 == 0)
        {
            genap[count] = arr[i];
            count++;
        }else{
            ganjil[count2] = arr[i];
            count2++;
        }
    }
    printf("Bilangan Genap: ");
    for (i = 0; i < count; i++){
        printf("%d ", genap[i]);
    }
    printf("\nBilangan Ganjil: ");
    for (i = 0; i < count2; i++){
        printf("%d ", ganjil[i]);
    }
}