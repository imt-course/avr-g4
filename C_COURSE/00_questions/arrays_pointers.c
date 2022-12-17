#include<stdio.h>

#define Q_NO 7


#if Q_NO == 0
int main()
{
	int arr[2] = {1, 2, 3, 4, 5};
	printf("%d", arr[3]);
}

#elif Q_NO == 1
int main()
{
	int a, b, c;	
	int arr[5] = {1, 2, 3, 25, 7};
	a = ++arr[1]; // 3
	// {1, 3, 3, 25, 7}
	b = arr[1]++; // 3
	// {1, 4, 3, 25, 7}
	c = arr[a++]; // 25
	// a = 4
	d = arr[++a]; // garbage
	printf("%d--%d--%d--%d", a, b, c, d);
}

#elif Q_NO == 2
int main () {
	int arr[10], i;
	for (i=0; i<=10; i++) {
		arr[i] = 0;
		printf("Hello\n");
	}
}

#elif Q_NO == 3
int main()
{
	int arr[3], i = 0;
	while(i < 3)
	{
		arr[i] = ++i;
	}
	for(i=0; i<3; i++)
	{
		printf("%d\n", arr[i]);
	}
}

#elif Q_NO == 4
int main() {
	int arr[1] = {2};
	printf("%d", 0[arr]);
}

#elif Q_NO == 5
int main(){
	char arr[15] = "pointer array";
	int *ptr;
	ptr = arr;
	printf("%c",ptr[1]);
}

#elif Q_NO == 6
int main()
{
	int a = 10, b = 6;
	int *ptr;
	ptr = &b;
	printf(" %d ", a  **ptr);
}

#elif Q_NO == 7
int main()
{
	int *iptr;
	int i, arr[2][2] = {10, 11, 12, 13};
	iptr = *arr ;
	printf("%d ", *(iptr+2));
}

#elif Q_NO == 8
int main(){
	char array[5] = "Knot";
	char *ptr, i, *ptr1;
	ptr = &array[1];
	ptr1 = ptr + 3;
	*ptr1 = 101;
	for(i = 0; i < 4;i++)
		printf("%c", *ptr++);
}

#elif Q_NO == 9
int main()
{
	char *ptr = "Pointer-to-String";
	printf("%p\n", ptr);
	printf("%d", sizeof(int*));
}

#elif Q_NO == 10
int main(void)
{
    int b = 20;
    int* y = &b;
    char n = 'A';
    char* z = &n;
    y[0] = z[0];
    printf((*y == *z) ? "True" : "False");
}

#elif Q_NO == 11
int main(void)
{
    int a = 20, b = 10;
    int *x = &a, *y = &b;
    int c = y[0], d = x[0];
    x[0] = c; //10
    y[0] = d; //20
    printf("%d %d", *x, *y);
}

#endif