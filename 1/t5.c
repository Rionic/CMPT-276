#include <stdio.h>
#include <math.h>

int main(){

	float i = 0;
	int result = 0;

	while (result != EOF) {
		result = scanf("%f", &i);

		if (result != EOF)
			printf("%.0f %.0f %.0f\n", floor(i), round(i), ceil(i));
	} 

	printf("Done.\n");
	return 0;
}