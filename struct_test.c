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

typedef struct birthday{
	uint8 day;
	uint8 month;
	uint16 year;
}Birthday_type;

typedef struct student{
	char name[20];
	uint32 munber;
	Birthday_type *birthday;
	uint8 score; 
}Student_Type;

Birthday_type birthday; //必须为指针分配空间，否则程序运行错误 
Student_Type student;

int main()
{
	Student_Type *stu = &student; //必须为指针分配空间 
	stu->birthday =  &birthday;
	//student.name = "xidongd";
	strcpy(stu->name,"xidongd");
	stu->munber = 10;
	stu->birthday->day = 14;
	stu->birthday->month = 9;
	stu->birthday->year = 1990;
	stu->score = 89;
	printf("name:%s number:%d birthday:%d-%d-%d score:%d \n",stu->name,stu->munber,\
		stu->birthday->year,stu->birthday->month,stu->birthday->day,stu->score);
	return 0;
}
