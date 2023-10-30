#include <stdio.h>

int main() {
	int apples = 5; 
    int bananas = 8;
	float orangePrice = 1.5;
    float bananaPrice = 0.75;
    char curency = '$';
	
	float totalCost = (apples * orangePrice) + (bananas * bananaPrice);
	
	printf("Jumlah apel: %d\n",apples);
	printf("Jumlah pisang: %d\n",bananas );
	printf("Harga jeruk per buah: %.2f\n", orangePrice);
	printf("Harga pisang per buah: %.2f\n", bananaPrice);
	printf("Jumlah biaya: %.2f %c\n", totalCost, curency);
	
	return 0;
}