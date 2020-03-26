#include <stdio.h>

int main(){
    int arr[3][4];
    int i, j, sum;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter the value of arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("two dimensional array elements: \n");
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                 printf("%d",arr[i][j]);
         }
        printf("\n");
    }
    //sum of the row
    for(i=0; i<3; i++){
        sum =0;
             for(j=0; j<4; j++){
                 sum = sum + arr[i][j];
             }
         printf("The sum of the elements of the row %d \n", sum);
         printf("\n");
    
    }


    return 0;
}