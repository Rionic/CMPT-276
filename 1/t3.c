#include <stdio.h>
#include <math.h>

int main(){

	float i = 0;
 
	scanf("%f", &i);

	printf("%.0f %.0f %.0f\n", floor(i), round(i), ceil(i));

	return 0;
}