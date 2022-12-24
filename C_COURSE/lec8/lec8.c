#include <stdio.h>
#include "Types.h"

struct student {
	u8 id;
	f32 grade;
	char gender[7];
};


typedef struct {
	u32 id;
	f32 grade;
	char gender[7];
} Student;

typedef struct {
	u32 salary;
	u32 bonus;
	u32 deductions;
	u32 net;
	char name[10];
}Employee;

typedef struct {
	s32 x;
	s32 y;
} Complex;

typedef struct {
	u32 arr[100];
} MyStruct;


typedef struct {
	u8 a : 3;
	u8 b : 1;
	u8 c : 2;
	u8 d : 2;
} BitField;


typedef struct {
	u8 a;
	u8 e;
	u16 c;
	u16 f;
	u32 b;
	u32 d;
	u32 g;
} StructType;

typedef union {
	u8 x;
	u16 y;
	u32 z;
} MyUnion;



typedef union {
	struct {
		u8 B0 : 1;
		u8 B1 : 1;
		u8 B2 : 1;
		u8 B3 : 1;
		u8 B4 : 1;
		u8 B5 : 1;
		u8 B6 : 1;
		u8 B7 : 1;
	} Bit;
	u8 Byte;
} Register;


Complex addComplex (Complex num1, Complex num2);
Complex addComplexByRef (const Complex *num1_ref, const Complex *num2_ref);
int main (void) {
	/*
	struct student ahmed = {1,250,"male"};
	struct student nada;
	nada.id = 2;
	nada.grade = 200;
	nada.gender[0] = 'f';
	nada.gender[1] = 'e';
	nada.gender[2] = 'm';
	nada.gender[3] = 'a';
	nada.gender[4] = 'l';
	nada.gender[5] = 'e';
	nada.gender[6] = '\0';
	printf("ahemd.id = %d\n",ahmed.id);
	printf("ahemd.grade = %f\n",ahmed.grade);
	printf("ahemd.gender = %s\n",ahmed.gender);
	printf("nada.id = %d\n",nada.id);
	printf("nada.grade = %f\n",nada.grade);
	printf("nada.gender = %s\n",nada.gender);
	*/
	/*
	Student students[10];
	u32 n, i;
	printf("Please enter number of students: ");
	scanf("%d", &n);
	printf("Enter Students data: \n");
	for (i=0; i<n; i++) {
		scanf("%d %f %s", &students[i].id, 
						  &students[i].grade,
						   students[i].gender);
	}
	
	for (i=0; i<n; i++) {
		printf("Student %d id = %d\n", i, students[i].id);
		printf("Student %d grade = %f\n", i, students[i].grade);
		printf("Student %d gender = %s\n", i, students[i].gender);
	}
	*/
	
	/*
	Employee ahmed, ali, waleed;
	u32 total_pay;
	
	printf("Enter ahmed salary: ");
	scanf("%d", &ahmed.salary);
	printf("Enter ahmed bonus: ");
	scanf("%d", &ahmed.bonus);
	printf("Enter ahmed deductions: ");
	scanf("%d", &ahmed.deductions);
	ahmed.net = ahmed.salary + ahmed.bonus - ahmed.deductions;

	printf("Enter ali salary: ");
	scanf("%d", &ali.salary);
	printf("Enter ali bonus: ");
	scanf("%d", &ali.bonus);
	printf("Enter ali deductions: ");
	scanf("%d", &ali.deductions);
	ali.net = ali.salary + ali.bonus - ali.deductions;

	printf("Enter waleed salary: ");
	scanf("%d", &waleed.salary);
	printf("Enter waleed bonus: ");
	scanf("%d", &waleed.bonus);
	printf("Enter waleed deductions: ");
	scanf("%d", &waleed.deductions);
	waleed.net = waleed.salary + waleed.bonus - waleed.deductions;

	total_pay = ahmed.net + ali.net + waleed.net;
	printf("Total = %d", total_pay);
	*/

	/*
	Employee employees[10];
	u32 total_pay=0, n, i;
	printf("Please enter number of employees: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("Enter employee %d name: ", i+1);
		scanf("%s", employees[i].name);
		printf("Enter %s salary: ", employees[i].name);
		scanf("%d", &employees[i].salary);
		printf("Enter %s bonus: ", employees[i].name);
		scanf("%d", &employees[i].bonus);
		printf("Enter %s deductions: ", employees[i].name);
		scanf("%d", &employees[i].deductions);
		employees[i].net = employees[i].salary + employees[i].bonus - employees[i].deductions;
		total_pay += employees[i].net;
	}
	printf("Total = %d", total_pay);
	*/
	/*
	Complex n1,n2,res;
	printf("Please enter first number: ");
	scanf("%d %di", &n1.x, &n1.y);
	printf("Please enter second number: ");
	scanf("%d %di", &n2.x, &n2.y);
	res = addComplex(n1,n2);
	printf("Result = %d %+di", res.x, res.y);
	*/
	
	/*
	Complex n1,n2,res;
	printf("Please enter first number: ");
	scanf("%d %di", &n1.x, &n1.y);
	printf("Please enter second number: ");
	scanf("%d %di", &n2.x, &n2.y);
	res = addComplexByRef(&n1,&n2);
	printf("Result = %d %+di", res.x, res.y);
	*/
	
	//MyStruct x = {{1,2,3,4,5}};

/*
	BitField x = {0,0,0,0};
	x.a = 5;
	x.b = 1;
	x.c = 3;
	x.d = 5;
	printf("x.a = %d\n", x.a);
	printf("x.b = %d\n", x.b);
	printf("x.c = %d\n", x.c);
	printf("x.d = %d\n", x.d);
	printf("size of x = %d\n", sizeof(x));
	*/
	
	//printf("%d", sizeof(StructType));
	
	
	/*
	MyUnion a;
	a.z = 0;
	a.x = 5;
	
	
	a.z = 0x00112233;
	printf("a.x = 0x%x\n", a.x);
	printf("a.y = 0x%x\n", a.y);
	printf("a.z = 0x%x\n", a.z);
	*/
	
	
	Register x;
	x.Byte = 0;	
	printf("%d\n", x.Byte);
	x.Bit.B2 = 1;	
	printf("%d\n", x.Byte);
}

Complex addComplex (Complex num1, Complex num2) {
	Complex result;
	result.x = num1.x + num2.x;
	result.y = num1.y + num2.y;
	return result;
}

Complex addComplexByRef (const Complex *num1_ref, const Complex *num2_ref) {
	Complex result;
	//result.x = (*num1_ref).x + (*num2_ref).x;
	result.x = num1_ref->x + num2_ref->x;
	//result.y = (*num1_ref).y + (*num2_ref).y;
	result.y = num1_ref->y + num2_ref->y;
	return result;
}