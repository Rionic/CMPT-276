#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int input[80];
	int len = 0, max = 0, res = 0;

	do {
		res = scanf("%d", &input[len]);
		if ( res == 1 ) {
			//max = (max < input[len]) ? input[len] : max;
			if ( max < input[len] )
				max = input[len];
			len++;
		}
	} while ( res != EOF );

	while ( max > 0 ) {
		for ( int i = 0; i < len; i++ ) {
			if ( input[i] >= max )
				printf("#");
			else
				printf(" ");
		}
		max--;
		printf("\n");
	}
	return 0;
}