#include <stdio.h>

int main() {
    int n, num = 0,i = 0;
    printf("masukan nilai : ");
    scanf("%d", &n);

    for (; i < n + 1; i++) {
        num += i;
        printf("%d\n", num);
        if(i==n){
            break;
        }
    }

    return 0;
}
