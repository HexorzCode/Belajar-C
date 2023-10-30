#include <stdio.h>

int main () {
	int a = 12 ;
    int b = 28;
	float c = 2.5 ;
    float d = 8.9;
	char e = 'R';

// (tambahakan komentar disini)
    int sum = a+ (b * c) - d;
    printf ("Bilangan a: %d\n",a);
    printf ("Bilangan b: %d\n",b);
    printf ("Bilangan c: %2f\n",c);
    printf ("Bilangan d: %2f\n",d);
    printf ("Bilangan e: %c\n",e);
    printf ("Hasil: %.2f\n", sum);

    return 0;
}