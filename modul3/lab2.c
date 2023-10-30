#include <stdio.h>

enum film {Unstoppable = 1,Insidious,Us};

int main(){
    enum film choice;

    printf("============= List FILM ==============\n");
    printf("1. Unstoppable\n");
    printf("2. Insidious\n");
    printf("3. US\n");

    printf("masukan list film : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Action");
        break;
    case 2:
        printf("Horror");
        break;
    case 3:
        printf("Thriller");
        break;
    
    default:
        break;
    }
}