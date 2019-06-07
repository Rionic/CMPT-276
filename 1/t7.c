#include <stdio.h>
#include <math.h>
/*
int main() {
	
	int input[100];
	int n = 0;
	int result = scanf("%d", &input[n]);

	while (result != EOF){
		n++;
		result = scanf("%d", &input[n]);
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<input[i]; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}*/
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

int main(void)
{
  int a=0;
  int res = 0;

  do {
    res = scanf( "%d", &a);
    
    if( res == 1 )
      {
	
	for( int i=0; i<a; i++ )
	  printf( "#" );
	printf("\n");	
      }

  } while( res != EOF );
    
  return 0;
}


