#include <stdio.h>
#include <math.h>

int main(){

	float input;
	int result = scanf("%f", &input);
	float min = input, max = input;
	float sum = 0, n = 0;

	while (result != EOF) {
		//if (max < input)	max = input;
		max = (max > input) ? max : input;			
		//if (min > input)	min = input;
		min = (min < input) ? min : input;
		sum += input;
		n++;
		result = scanf("%f", &input);
	} 
	printf("%.2f %.2f %.2f\n", min, max, sum/n);
	return 0;
}