# include <stdio.h>
# include <string.h>

// Ex: 01

//struct DATE
//{
//	int year;
//	int month;
//	int day;
//};
//
//int main()
//{
//	struct DATE dob;
//	
//	dob.year = 1980;
//	dob.month = 7;
//	dob.day = 31;
//	
//	printf("Date of Birth %d-%d-%d\n", dob.year,dob.month,dob.day);
//
//	return 0;
//}

// Ex: 02

//struct STUDENT
//{
//	int regNo;
//	char fname[26];
//	char grade;
//};
//
//int main()
//{
//	struct STUDENT stdnt;
//	
//	stdnt.regNo = 123;
//	strcpy(stdnt.fname, "Saman Kumara");
//	stdnt.grade = 'A';
//
//	struct STUDENT stdnt2 = {125,"Nimal Shantha", 'A'};
//	
//	printf("Reg No : %d\n", stdnt.regNo);
//	printf("Full Name : %s\n", stdnt.fname);
//	printf("Grade : %c\n", stdnt.grade);
//
//	printf("Reg No : %d\n", stdnt2.regNo);
//	printf("Full Name : %s\n", stdnt2.fname);
//	printf("Grade : %c\n", stdnt2.grade);
//
//	return 0;
//}

// Ex: 03

struct DATE
{
	int year;
	int month;
	int day;
};

struct STUDENT
{
	int regNo;
	char fname[26];
	char grade;
	struct DATE dob;
};

int main()
{
	struct STUDENT stdnt;
	
	stdnt.regNo = 123;
	strcpy(stdnt.fname, "Saman Kumara");
	stdnt.grade = 'A';
	stdnt.dob.year = 2000;
	stdnt.dob.month = 05;
	stdnt.dob.day = 13;
		
	printf("Reg No : %d\n", stdnt.regNo);
	printf("Full Name : %s\n", stdnt.fname);
	printf("Grade : %c\n", stdnt.grade);
	printf("Date of Birth %d-%d-%d\n", stdnt.dob.year, stdnt.dob.month, stdnt.dob.day);

	return 0;
}