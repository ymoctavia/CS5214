#include <stdio.h>
#include <time.h>

#define SIZE 1000
float matrixA[SIZE][SIZE];
float matrixB[SIZE][SIZE];
float matrixC[SIZE][SIZE];

main() {
	time_t start, end;
	double diff;
	  
	printf("Starting Initilizing Matrix..\n");
	int a, b;
	for(a = 0; a<SIZE; a++){
	    for(b = 0; b<SIZE; b++){
		matrixA[a][b] = 1.0;
		matrixB[a][b] = 1.0;
	    }
	}
	
	printf("Starting Matrix Multiplication...\n");
	time(&start);

	int i, j, curIndex;
	for(i = 0; i < SIZE; i ++){
	   for(j = 0; j < SIZE; j ++){
	       float tempSum = 0;
	       for(curIndex = 0; curIndex < SIZE; curIndex ++){
	       	   tempSum += matrixA[i][curIndex] * matrixB[curIndex][j];
	       }
	       matrixC[i][j] = tempSum;
	   }
	}
	
	printf("Finished Matrix Multiplication...\n");
	
	time(&end);
	diff = difftime(end, start);

	printf("Time Spent: %f\n", diff);
		
}


