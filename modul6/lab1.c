#include <stdio.h>
int volume,luas,p,l,t;
void balok(){
    volume = p*l*t;
    luas = (p*l+p*t+l*t)*2;
    return volume,luas;
}

int main(){
    printf("===Kalkulator Menghitung Balok===\n");
    printf("masukan panjang balok : ");
    scanf("%d",&p);
    printf("masukan lebar balok : ");
    scanf("%d",&l);
    printf("masukan tinggi balok : ");
    scanf("%d",&t);
    balok(p,l,t);
    printf("Luas Permukaan Balok : %dcm^3\n",luas);
    printf("Volume Balok : %dcm^3",volume);
}