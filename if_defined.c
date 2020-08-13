#include <stdio.h>

#define MAX 10

int main(void){

#if (defined(MAX)) && !(defined(MIN))
	printf("max value = 10 \n");
#else
	printf("max value != 10 \n");
#endif
	return 0;
} 
