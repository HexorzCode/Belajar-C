#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* fptr;
char nama[30],author[30],genre[30];
int halaman,id,delete_id;
void Create(){
    fptr = fopen("library_book.txt","r");
    int check_id = id;
    int add = 0;
    printf("Masukan ID Buku : ");
    scanf("%d%*c",&id);
    printf("Masukan Nama Buku : ");
    scanf("%[^\n]%*c",&nama);
    printf("Masukan Nama Author : ");
    scanf("%[^\n]%*c",&author);
    printf("Masukan Jumlah halaman : ");
    scanf("%d%*c",&halaman);
    printf("Masukan Genre Buku : ");
    scanf("%[^\n]%*c",&genre);
    while (fscanf(fptr, "%29[^;];%d;%29[^;];%d;%29[^\n]\n", nama, &id, author, &halaman, genre) != EOF) {
        if (id == check_id) {
            fclose(fptr);
            add = 1;
        }
    }
    if (add == 1)
    {
        fptr = fopen("library_book.txt","a");
        if (nama != 0 && id != 0 && author != 0 && halaman != 0 && genre != 0)
        {
            fprintf(fptr, "%s;%d;%s;%d;%s\n", nama, id, author, halaman, genre);
        }else{
            printf("Data Ada yg Kosong");
        }
        
    }else{
        printf("Id Sudah Ada Gunakan ID lain");
    }
    fclose(fptr);
}

void delete() {
    FILE* temp_file = fopen("temp.txt", "w");
    fptr = fopen("library_book.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    while (fscanf(fptr, "%29[^;];%d;%29[^;];%d;%29[^\n]\n", nama, &id, author, &halaman, genre) != EOF) {
        if (id != delete_id) {
            fprintf(temp_file, "%s;%d;%s;%d;%s\n", nama, id, author, halaman, genre);
        }
    }

    fclose(fptr);
    fclose(temp_file);
    remove("library_book.txt");
    rename("temp.txt", "library_book.txt");
    printf("Entry with ID %d has been deleted.\n", delete_id);
}

int main(){
    int selc;
    printf("===Menu===\n");
    printf("1.Tambahkan data\n");
    printf("2.Hapus Data\n");
    printf("Pilih Menu : ");
    scanf("%d",&selc);
    switch (selc)
    {
    case 1:
        Create();
        break;
    case 2:
        printf("Masukkan ID buku yang ingin dihapus: ");
        scanf("%d", &delete_id);
        delete(delete_id);
        break;
    
    default:
        break;
    }
    
    return 0;
}

