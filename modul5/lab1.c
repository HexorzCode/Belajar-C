#include <stdio.h>
#include <string.h>

int main(){
    char car[10][5]= {
        {'n', 'e', 'o', 'n', ' '},
        {'g', 'e', 'k', 'k', 'o'},
        {'o', 'm', 'e', 'n', ' '},
        {'s', 'a', 'g', 'e', ' '},
        {'j', 'e', 't', 't', ' '},
        {'n', 'e', 'o', 'n', ' '},
        {'g', 'e', 'k', 'k', 'o'},
        {'o', 'm', 'e', 'n', ' '},
        {'k', 'a', 'g', 'e', ' '},
        {'j', 'e', 't', 't', ' '}
    };
    int i,j;
    printf("Daftar Agent\n");
    for (i = 0; i < 5; i++)
    {
        printf("Agent ke %d-",i);
        for (j = 0; j < 5; j++)
        {
            printf("%c",car[i][j]);
        }
        printf("\n");
    }
    printf("Daftar Agent Setelah Perubahan\n");
    for (i = 5; i < 10; i++)
    {
        printf("Agent ke %d-",i-4);
        for (j = 0; j < 5; j++)
        {
            printf("%c",car[i][j]);
        }
        printf("\n");
    }
    return 0;
}