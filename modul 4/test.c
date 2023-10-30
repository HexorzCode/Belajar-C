#include <stdio.h>
#include <string.h>

int main(){
    char car[10][5]= {
        {'n', 'e', 'o', 'n', '\0'},
        {'g', 'e', 'k', 'k', 'o'},
        {'o', 'm', 'e', 'n', '\0'},
        {'s', 'a', 'g', 'e', '\0'},
        {'j', 'e', 't', 't', '\0'},
        {'n', 'e', 'o', 'n', '\0'},
        {'g', 'e', 'k', 'k', 'o'},
        {'o', 'm', 'e', 'n', '\0'},
        {'k', 'a', 'g', 'e', '\0'},
        {'j', 'e', 't', 't', '\0'}
    };
    int i,j;
    for (i = 0; i < 10; i++)
    {
        printf("Agent ke %d-",i);
        for (j = 0; j < 5; j++)
        {
            printf("%c",car[i][j]);
        }
        printf("\n");
    }
    return 0;
}
