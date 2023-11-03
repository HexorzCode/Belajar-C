#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char add1[30],add2[30],add3[30];
int append(){
    FILE* fptr;

    fptr = fopen("lab2.txt","a");

    if (fptr != 0)
    {
        printf("File Berhasil Di Buka");
        if (strlen(add1)>0){
            fprintf(fptr,"Nama : %s\n",add1);
            fprintf(fptr,"Nim : %s\n",add2);
            fprintf(fptr,"Progdas : %s\n\n",add3);
        }
    }else{
        printf("File Gagal Dibuka");
    }
    
    fclose(fptr);

    
}

int main(){
    printf("Masukan Nama : ");
    scanf("%s",&add1);
    printf("Masukan Nim : ");
    scanf("%s",&add2);
    printf("Masukan Prodi : ");
    scanf("%s",&add3);

    append();
}