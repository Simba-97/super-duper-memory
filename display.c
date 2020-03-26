#include <stdio.h>

    int arr1[3][4];
    int i, j, sum;
//printing the elements of the array
    void method(){
    printf("two dimensional array elements: \n");
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                 printf("%d",arr1[i][j]);
         }
        printf("\n");
    }
    //sum of the columns
    for(j=0; j<4; j++){
        sum =0;
             for(i=0; i<3; i++){
                 sum = sum + arr1[j][i];
             }
         printf("The sum of the elements of the row %d \n", sum);
         printf("\n");
    
        }
    }



int main(){
  
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter the value of arr1[%d][%d]:", i, j); //taking input
            scanf("%d", &arr1[i][j]);
        }
    }

        method();
    
    return 0;
    }
    