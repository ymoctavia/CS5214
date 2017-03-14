#include <stdio.h>
#include <sys/time.h>

#define SIZE 1000

float matrixA[SIZE][SIZE];
float matrixB[SIZE][SIZE];
float matrixC[SIZE][SIZE];

float timeDiffenrenceMili(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

void doMultiplication(int tileSize){

	int i, j, m, n, curIndex;
	for(i = 0; i < SIZE; i += tileSize){
	   for(j = 0; j < SIZE; j += tileSize){

	       for(m = i; m < (i+tileSize) && m < SIZE; m++){
		  for(n = j; n < (i+tileSize) && n < SIZE; n++){
		      for(curIndex = 0; curIndex < SIZE; curIndex ++){
		       	   matrixC[m][n] += matrixA[m][curIndex] * matrixB[curIndex][n];
		      }
		  }
	       }
	      
	   }
	}

}

void MultiplyMatrix(int tileSize){

	struct timeval start, end;
	float diff;
	  
	int a, b;
	for(a = 0; a<SIZE; a++){
	    for(b = 0; b<SIZE; b++){
		matrixA[a][b] = 1.0;
		matrixB[a][b] = 1.0;
	    }
	}
	
	gettimeofday(&start, 0);

	doMultiplication(tileSize);

	gettimeofday(&end, 0);
	diff = timeDiffenrenceMili(start, end);

	printf("(Tile Size, Time Spent): (%d,%f)\n", tileSize, diff);

}

main() {
	int rangeStart, rangeEnd, stepSize;
	printf("Enter Tile Size Range Start: ");
	scanf("%d", &rangeStart);

	printf("Enter Tile Size Range End: ");
	scanf("%d", &rangeEnd);

	printf("Enter Step Size: ");
	scanf("%d", &stepSize);
	
	int a;
	for(a = rangeStart; a <= rangeEnd; a += stepSize){
		MultiplyMatrix(a);
	}
}





