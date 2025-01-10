#include<stdio.h>
#include<string.h>

void swap(int *num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void transpose(int** matrix,int matSize,int* mColSize){

    for(int i=0;i<matSize;i++){

        for(int j=i;j<*mColSize;j++){

            if(i == j)continue;
            
            swap( *(matrix+i)+j, (*(matrix+j)+i ));
        }
    }
}

void reverseArray(int **matrix,int matrixSize,int* matrixColSize){
     for(int i=0;i<matrixSize;i++){

        int low = 0, high = *matrixColSize-1;
        
        while(low<high){
            swap( *(matrix+i)+low, *(matrix+i)+high  );
            low++;
            high--;
        }
    }
}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    
    transpose(matrix,matrixSize,matrixColSize);
    reverseArray(matrix,matrixSize,matrixColSize);
    
}


int main(){


    return 0;
}