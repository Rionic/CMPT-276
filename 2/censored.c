#include <stdio.h>
#include <string.h>

int wordvalid( char c ) {
	if ( c >= 'a' && c <= 'z' )
		return 1;
	if ( c >= 'A' && c <= 'Z' )
		return 1;
	if ( c == 39 )	
		return 1;
	return 0;
}

int main( int argc, char* argv[] ) {

	int c = getchar();
	char word[128];
	int len = 0, pos = 0, inword = 0;
	int word_match = 0;

	while ( c != EOF ) {
		//check if entering word
		if ( !inword && wordvalid(c) )
			inword = 1;

		//check if leaving word
		if ( !wordvalid(c) && inword ) {
			inword = 0;

			//check if the word needs to be censored
			for ( int i = 1; i < argc; i++ ) {
				if ( strstr(word,argv[i]) != NULL && len == strlen(argv[i]) ) {
					printf("CENSORED");
					word_match = 1;
					break;
				} else
					word_match = 0;
			}

			//if the word should not be censored
			if (!word_match) {
				//prints the original word
				for (int j = 0; j < len; j++) {
					printf("%c",word[j]);
				}
			}
				
			len = 0;
			pos = 0;
		}

		if ( inword ) {
			word[pos] = c;
			len++;
			pos++;
		} else {
			printf("%c",c);
		}

		c = getchar();
	}
	return 0;
}