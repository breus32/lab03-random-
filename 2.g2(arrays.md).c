#include <stdio.h>

int main ()
{
	int i;
	int mas[100];
	int n, a;
	
	printf("\nVvedite n: ");
	scanf("%d", &n);
	
	for(i = 0, a = 1; a < n; i++) {
		a = a + 2;
		mas[i] = a;
		printf("%.1ld\n", a);
	}	
	
	return 0;
}
