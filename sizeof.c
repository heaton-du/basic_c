#include <stdio.h>

typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;

typedef struct a{
	uint8 element_a;
	uint32 elementA_b;
	uint32 elementA_c;
	uint32 elementA_d;
	uint32 elementA_e;
}Type_A;

typedef struct b{
	Type_A *element_a;
}Type_B;

int main()
{
	printf("size Type_A:%d Type_A*:%d Type_B:%d \n",sizeof(Type_A),sizeof(Type_A*),sizeof(Type_B));
	return 0;
}
