#include <stdio.h>

int main(){
    const int bobot_matematika = 4,bobot_fisika = 3,bobot_biologi = 2;
    float mtk,bio,fsi;

    printf("=============== Penghitung Rata Rata ================\n");
    printf("============= Bobot MATEMATIKA :   4   ==============\n");
    printf("============= Bobot FISIKA     :   3   ==============\n");
    printf("============= Bobot BIOLOGI    :   2   ==============\n");
    printf("=====================================================\n");
    printf("\ninput nilai Matematika : ");
    scanf("%f", &mtk);
    printf("input nilai Fisika : ");
    scanf("%f", &fsi);
    printf("input nilai Biologi :");
    scanf("%f", &bio);

    float rata_rata = (mtk*bobot_matematika + fsi*bobot_fisika + bio*bobot_biologi)/(bobot_biologi+bobot_fisika+bobot_matematika);
    printf("\n================== Nilai Rata Rata ==================\n");
    printf("Rata Rata  : %.2f\n",rata_rata);

}