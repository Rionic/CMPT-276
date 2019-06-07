#include <stdio.h>
#include <math.h>

int main(){

	float i = 0;
	int result = scanf("%f", &i);

	if (result == 0){
		printf("scanf error: (%d)\n", result);
	} else {
		printf("%.0f %.0f %.0f\n", floor(i), round(i), ceil(i));
	}

	return 0;
}