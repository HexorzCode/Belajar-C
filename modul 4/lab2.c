#include <stdio.h>
#include <string.h>

void carikata() {
    char string[100];
    char newstring[200] = "";
    int i;
    printf("Masukan : ");
    scanf("%100[^\n]", string);

    for (i = 0; i < strlen(string); i++) {
        strncat(newstring, &string[i],1);
        strcat(newstring, " ");
    }

    printf("%s\n", newstring);
    return 0;
}

void main(){
    carikata();
}
