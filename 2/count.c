#include <stdio.h>

int wordvalid( char c ) {
	if ( c >= 'a' && c <= 'z' )
		return 1;
	if ( c >= 'A' && c <= 'Z' )
		return 1;
	if ( c == 39 )	
		return 1;
	return 0;
}

int main() {
		
	unsigned long charcount = 0, wordcount = 0, linecount = 0;

	int c = getchar();
	int inword = 0;

	while ( c != EOF ) {
		charcount++;

		if ( !inword && wordvalid(c) ) {
			inword = 1;
		}

		if ( inword && !wordvalid(c) ) {
			inword = 0;
			wordcount++;
		}

		if ( c == '\n')	
			linecount++;

		c = getchar();
	}

	printf("%lu %lu %lu\n", charcount, wordcount, linecount);
	return 0;
}