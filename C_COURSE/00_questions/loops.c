#include <stdio.h>

#define Q_NO 8


#if		Q_NO == 0
int main()
{
    int i = 1024;
    for (; i; i >>= 1)
        printf("Hello");
}

#elif		Q_NO == 1
int main()
{
    unsigned char i;
    for (i=10; i>=0; i--) {
		printf("%d\n", i);
	}
}

#elif 	Q_NO == 2
int main()
{
    int c = 5, n = 10;
    do {
        n /= c;
    }
	while(c--); 
    printf ("%d", n);
}

#elif 	Q_NO == 3
int main()
{
    int c = 5, no = 10;
    do {
        no /= c;
    }
	while(--c);
  
    printf ("%d", no);
}

#elif 	Q_NO == 4
int main()
{
   int i = 0;
   for (i=0; i<20; i++)
   {
     switch(i)
     {
       case 0:
         i += 5;
       case 1:
         i += 2;
       case 5:
         i += 5;
       default:
         i += 4;
         break;
     }
   }
   printf("%d  ", i);
}

#elif 	Q_NO == 5
int main() 
{ 
  int i;   
  for (i = 1; i != 10; i += 2) 
    printf("Hello! "); 
}

#elif 	Q_NO == 6
int main() 
{ 
  int i;   
  for (i=1; i<10; i++)
    printf("%d", i); 
}

#elif 	Q_NO == 7
int main() 
{ 
	
  for (int i=1; i<10; i++);
    printf("%d", i); 
}


#elif 	Q_NO == 8
int main()
{
    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("Hello!");
    }
}

#endif