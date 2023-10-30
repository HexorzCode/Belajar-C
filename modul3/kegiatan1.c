#include <stdio.h>

int main(){
    int nasi = 50000, mie = 45000, ayam = 65000;
    int mineral = 13000,teh = 15000,jeruk = 20000;
    int pillihmakan,pilihminum,pembayaran;
    float totalharga = 0;
    int *ptr;
    ptr = &totalharga;
    char memb;

    printf("================ Warteg Mamat ==================\n");
    printf("\n   ============= Menu Makanan =============");
    printf("\n\t1. Nasi Goreng \tRP.%d\n",nasi);
    printf("\t2. Mie Goreng \tRP.%d\n", mie);
    printf("\t3. Ayam Goreng \tRP.%d\n", ayam);

    printf("\tPilih Menu Makanan : ");
    scanf("%d",&pillihmakan);
    switch (pillihmakan)
    {
    case 1:
        totalharga += nasi;
        break;
    case 2:
        totalharga += mie;
        break;
    case 3:
        totalharga += ayam;
        break;
    
    default:
        break;
    }
    
    printf("   ============= Menu Minuman =============");
    printf("\n\t1. Air Mineral \tRP.%d\n",mineral);
    printf("\t2.Es Teh \tRP.%d\n", teh);
    printf("\t3. Es Jeruk \tRP.%d\n", jeruk);

    printf("\tPilih Menu Minuman : ");
    scanf("%d",&pilihminum);
    switch (pilihminum)
    {
    case 1:
        totalharga += mineral;
        break;
    case 2:
        totalharga += teh;
        break;
    case 3:
        totalharga += jeruk;
        break;
    
    default:
        break;
    }

    printf("\tApakah Anda Punya Member (Y/N) : ");
    scanf(" %c",&memb);
    if (memb == 'y' || memb == 'Y'){
        totalharga = totalharga - 0.1 * totalharga;
    }else{
        totalharga = totalharga;
    }
    
    printf("Total Harga : RP. %.2f\n",totalharga);
    printf("Alamat memori variabel total harga : %p\n",ptr);

    printf("Masukan Uang Pambayaran : ");
    scanf("%d", &pembayaran);
    if (pembayaran - totalharga < 0)
    {
        printf("Uang Anda Kurang : %.2f",pembayaran-totalharga);
    }else{
        printf("Kembalian Anda : %.2f",pembayaran-totalharga);
    }
    
    

}