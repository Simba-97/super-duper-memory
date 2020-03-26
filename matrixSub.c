#include <stdio.h>
int i, j, matrix3[3][4];

int main(){
    int matrix1[3][4];
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter the value of matrix1[%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
     printf("two dimensional array elements: \n");
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                 printf("%d",matrix1[i][j]);
         }
        printf("\n");
    }
    int matrix2[3][4];
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter the value of matrix2[%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
     printf("two dimensional array elements: \n");
         for(i=0; i<3; i++){
             for(j=0; j<4; j++){
                 printf("%d",matrix2[i][j]);
         }
        printf("\n");
    }
    printf("Subtraction matrix2 from matrix1[matrix1 - matrix2]....\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            matrix3[i][j] = matrix1[i][j]- matrix2[i][j];
        }
    }
    printf("result of the subtraction is :\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;

}