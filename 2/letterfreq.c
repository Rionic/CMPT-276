#include <stdio.h>
#define letters 26

int main(){
	
	int c = getchar();
	int freq[letters] = {0};
	float sum = 0;

	while ( c != EOF ) {
		//if c is a lower case letter
		if ( c >= 'a' && c <= 'z') {
			freq[c-'a']++;
			sum++;
		}
		
		//if c is a upper case letter
		if ( c >= 'A' && c <= 'Z') {
			freq[c-'A']++;
			sum++;
		}

		c = getchar();
	}

	for ( int i = 0; i < letters; i++) {
		if (freq[i] != 0)
			printf( "%c %.4f\n", 'a'+i, freq[i]/sum);
	}

	return 0;
}