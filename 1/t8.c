#include <stdio.h>
#include <math.h>

int main(){
	
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	for (int i = 0; i < y; i++){
//first and last line
		if (i == 0 || i == y-1){
			for(int j = 0; j < x; j++){
				printf("#");
			}
			printf("\n");
		} else {
//inner lines
			printf("#");
			for (int j = 0; j < x-2; j++){
				printf(".");
			}
			printf("#\n");
		}
	}
	return 0;
}