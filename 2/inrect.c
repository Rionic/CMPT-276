
/*
int InRectangle( float pt[2], float rect[4]) {
	
	if ( pt[0] < rect[0] && pt[0] < rect[2] ) 
		return 0;

	if ( pt[0] > rect[0] && pt[0] > rect[2] )
		return 0;

	if ( pt[1] < rect[1] && pt[1] < rect[3] ) 
		return 0;

	if ( pt[1] > rect[1] && pt[1] > rect[3] )
		return 0;

	return 1;
}
*/
#include <math.h>


int InRectangle( float pt[2], float rect[4] )
{
  // first normalize the rect to top-left to bottom-right
  float r[4];
  
  r[0] = fmin( rect[0], rect[2] );
  r[1] = fmin( rect[1], rect[3] );
  r[2] = fmax( rect[0], rect[2] );
  r[3] = fmax( rect[1], rect[3] );

  return( pt[0] >= r[0] &&
	  pt[0] <= r[2] &&
	  pt[1] >= r[1] &&
	  pt[1] <= r[3] );
}