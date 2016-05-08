#include <stdio.h>

int main ()
{
	int i;
	double mas[100];
	double max, a, min;
	
	printf("\nMin: ");
	scanf("%lf", &min);
	
	printf("\nMax: ");
	scanf("%lf", &max);
	
	for(i = 0, a = min; a < max; i++) {
		a = a + 0.1;
		mas[i] = a;
		printf("%.1lf\n", a);
	}	
	
	return 0;
}
