#include <stdio.h>
#include <string.h>
#include <ctype.h>
char kalimat[1000],kata[50],selc;

int main(){
    do{
        int i;
        printf("Masukan Kalimat: ");
        scanf(" %[^\n]", kalimat); 
        printf("Masukan Kata yang Mau Dicari: ");
        scanf("%s", kata);
        for (i = 0;kalimat[i]; i++)
        {
            kalimat[i] = tolower(kalimat[i]);
        }
        for (i = 0;kata[i]; i++)
        {
            kata[i] = tolower(kata[i]);
        }
        char *kata_kalimat = strtok(kalimat, " ");
        int index = 1;
        
        while (kata_kalimat != 0)
        {
            if (strcmp(kata_kalimat,kata) == 0)
            {
                printf("Kata %s Ditemukan Pada Kata ke %d \n",kata,index);
            }
            kata_kalimat = strtok(0," ");
            index++;
        }
        
        printf("Apakah Anda mau menjalan kan lagi Y/N : ");
        scanf(" %c", &selc);
    }while(selc == 'y' || selc == 'Y');
    return 0;
}
