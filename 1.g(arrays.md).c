#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	double mas[100];
	int i, n;
	
	printf("Vvedite n= ");
    	scanf("%d", &n);
	
	srand(time(0));
	
	for(i = 0; i < n; i++) {
		mas[i] = (float)rand() / RAND_MAX;
		printf("\nmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}
