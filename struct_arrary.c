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

struct tag1
{
      int a;
      int b;
}__attribute ((packed));   //不要强制对齐 

struct tag2
{
      int a;
      int b;
      char *c;
}__attribute ((packed));

struct tag3
{
    int a;
    int b;
    char c[0];
}__attribute ((packed));

struct tag4
{
    int a;
    int b;
    char c[1];
}__attribute ((packed));

      struct tag2 l_tag2;
      
int main()
{

      struct tag3 l_tag3;
      struct tag4 l_tag4;

      memset(&l_tag2,0,sizeof(struct tag2));
      memset(&l_tag3,0,sizeof(struct tag3));
      memset(&l_tag4,0,sizeof(struct tag4));

      printf("size of tag1 = %d\n",sizeof(struct tag1));
      printf("size of tag2 = %d\n",sizeof(struct tag2));
      printf("size of tag3 = %d\n",sizeof(struct tag3));
      printf("size of tag4 = %d\n",sizeof(struct tag4));

      printf("l_tag2 = %p,&l_tag2.c = %p,l_tag2.c = %p\n",&l_tag2,l_tag2->c,l_tag2.c);
      printf("l_tag3 = %p,&l_tag3.c = %p,l_tag3.c = %p\n",&l_tag3,&l_tag3.c,l_tag3.c);
      printf("l_tag4 = %p,&l_tag4.c = %p,l_tag4.c = %p\n",&l_tag4,&l_tag4.c,l_tag4.c);
      return 0;
 }
