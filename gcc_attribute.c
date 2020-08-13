#include <stdio.h>

struct data_A {
	char a;
}__attribute__ ((aligned(2)));

struct data_B{
	char b[3];
}; 

enum A{
	A,
}__attribute__ ((aligned(8)));

enum B{
	B,
};

int main(void)
{
	printf("struct A:%d \n",sizeof(struct data_A));
	printf("struct B:%d \n",sizeof(struct data_B));
	
	printf("enum A:%d \n",sizeof(enum A));
	printf("enum B:%d \n",sizeof(enum B)); 
	return 0; 
} 




