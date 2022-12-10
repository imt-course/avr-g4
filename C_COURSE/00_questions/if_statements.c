#include<stdio.h>


#define Q_NO 4

#if Q_NO == 1
int main()
{
	int i = 6, j = 5, k = 1;
	if(i > j == k)
		printf("%d %d %d", i++, ++j, --k);
	else	
		printf("%d %d %d", i, j, k);
}

#elif Q_NO == 2
int main()
{
	int i = 5;
	if(i = i - 5 > 4)
		printf("IF");
	else
		printf("ELSE");
}

#elif Q_NO == 3
int main()
{
	int i = 5;
	if (i<2)
		if (i>10)
			i+=10;
	else
		i+=20;
	printf("%d", i);
}

#elif Q_NO == 4
int main()
{
    char check = 'a';
    switch (check)
    {
        case 'a' || 1:
			printf("1");
        case 'b' || 2:
			printf("2");
            break;
        default:
			printf("0");
    }
}

#elif Q_NO == 5
int main()
{
    char check = 'a';
    switch (check)
    {
        case 'a' | 1:
			printf("1");
        case 'b' | 2:
			printf("2");
            break;
        default:
			printf("0");
    }
}
#endif
