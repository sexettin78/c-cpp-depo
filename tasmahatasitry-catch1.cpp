#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

	try
	{
		short x = SHRT_MAX;
		short y = x+1;
	}	
	
	catch(int y)
	{
	printf("sinira ulasildi");
	}
	
}
