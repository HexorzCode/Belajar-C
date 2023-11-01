#include <stdio.h>

int i,j,p,selc;
int matrix1[3][3],matrix2[3][3],hasil[3][3];

int penjumahan(){
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",matrix1[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
}

int pengurangan(){
    for (i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {
            printf("%d ",matrix1[i][j]-matrix2[i][j]);
        }
    }
    
}

int perkalian(){
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (p = 0; p < 3; p++)
            {
                hasil[i][p]+= matrix1[i][p]*matrix2[j][p];
            }
            
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",hasil[i][j]);
        }
        printf("\n\n");
    }    
}

int main(){
    printf("================Operasi Matrix=============\n");
    printf("Penjumlahan\n");
    printf("Pengurangan\n");
    printf("Perkalian\n");
    printf("Pillih Salah Satu (1/2/3) : ");
    scanf("%d",&selc);

    printf("Masukan Elemen Pada Matrix Pertama : \n");
    for (i = 0; i < 3; i++)
    {    
        for (j = 0; j < 3; j++)
        {
            printf(" ");
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Masukan Elemen Pada Matrix Kedua : \n");
    for (i = 0; i < 3; i++)
    {    
        for (j = 0; j < 3; j++)
        {
            printf("");
            scanf("%d",&matrix2[i][j]);
        }
    }
    switch (selc)
    {
    case 1:
        penjumahan(matrix1,matrix2);
        break;
    case 2:
        perkalian(matrix1,matrix2);
        break;
    case 3:
        pengurangan(matrix1,matrix2);
        break;
    default:
        printf("Input Anda Tidak Valid");
        break;
    }
    return 0;
}