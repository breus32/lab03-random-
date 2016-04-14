#include <stdio.h>

int main ()
{
	int i;
	double mas[100];
	double n, a;
	
	printf("\nVvedite n: ");
	scanf("%lf", &n);
	
	for(i = 0, a = 1; a < n; a = a + 0.1, i++) {
		mas[i] = a;
		printf("%.1lf\n", a);
	}	
	
	return 0;
}
