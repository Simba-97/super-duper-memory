#include <stdio.h>
    int arr[3][4];
    int i, j, sum;

 //modifying and printing the array
    void modification(){
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                arr[i][j] += 20;
            }
         }
        printf("two dimensional modified array: \n");
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                 printf("%d",arr[i][j]);
         }
        printf("\n");
    }
}


int main(){
    
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter the value of arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    modification();
    return 0;
}
   