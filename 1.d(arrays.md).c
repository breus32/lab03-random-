#include <stdio.h>
#include <time.h>

int get_random_int(int max_rand)
{
    return rand() % max_rand;
}


int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int main() 
{
	double mas[100], n;
	int i;
	
	printf("Vvedite n:");
	scanf("%lf", &n);
	
	srand(time(0));
	
	for(i = 0; i < n; i++) {
		mas[i] = get_random_int_min_max(0, n);
		printf("\nmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}

