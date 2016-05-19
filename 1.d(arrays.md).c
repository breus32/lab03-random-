#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	double mas[300], n;
	int i, size;
	
	printf("Enter array size: ");
	scanf("%d", &size);
	
	printf("\nEnter n: ");
	scanf("%lf", &n);
	
	srand(time(0));
	
	for(i = 0; i < size; i++) {
		mas[i] = ((float)rand() / RAND_MAX) * n;
		printf("\n\tmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}
