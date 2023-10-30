#include <stdio.h>

int main() {
    float sap1, sap2, sap3, sap4;
    const float kam1=120,kam2=85.8,kam3=23 ;
    printf("Masukkan berat sapi 1: ");
    scanf("%f", &sap1);
    printf("Masukkan berat sapi 2: ");
    scanf("%f", &sap2);
    printf("Masukkan berat sapi 3: ");
    scanf("%f", &sap3);
    printf("Masukkan berat sapi 4: ");
    scanf("%f", &sap4);

    float totalsapi = (sap1 + sap2 + sap3 + sap4);
    float totalkambing = kam1+kam2+kam3;
    printf("Berat total sapi: %.2f \n", totalsapi);
    printf("Berat total Kambing: %.2f \n", totalkambing);

    return 0;
}
