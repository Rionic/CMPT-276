#include <stdio.h>
#include <math.h>

int main(){
	
	int x, y ,z, left, right;
	scanf("%d %d %d", &x, &y, &z);

	for (int j = z-1; j >= 0; j--){

		left = floor( j * (x/(2.0*z)) );
		right = ceil( (x-1) + -j * (x/(2.0*z)) );

		for (int i = 0; i < left; i++)	printf(" ");

		for (int i = left; i <= right ; i++){

			if (j == 0 || j == z-1)	{
				printf("#");
			}else{
				if (i == left || i == right)	printf("#");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}