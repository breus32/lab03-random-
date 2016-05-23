#include <stdio.h>

int main ()
{
	int i;
	double mas[100];
	double n, a;
	
	printf("\nVvedite n: ");
	scanf("%lf", &n);
	
	for(a = 1; a < n; i++) {
		a = a + 0.1;
		mas[i] = a;
		printf("%.1lf\n", a);
	}	
	
	return 0;
}
