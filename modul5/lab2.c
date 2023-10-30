#include <stdio.h>

int main(){
    int matrix[2][2]  = {{2,3},{5,3}};
    int matrix2[2][2] = {{4,6},{2,9}};
    int i,j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ",matrix[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
    
}