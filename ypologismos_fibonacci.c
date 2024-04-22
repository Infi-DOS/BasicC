/*Ypologiste tis akolouthias Fibonacci A(n+1)=A(n)+A(n-1)*/
#include<stdio.h>
int main(void)
{
	/*Orismos metavliton*/
	int i, n, an, an1, an2;

	printf("Doste to n>=2: n = "); 
	scanf("%d", &n);
/* Ypologismos tou athroismatos */
   an = 1;   /*arxiki timi */
   an1 = 1;   /*arxiki timi */
   printf("\n a[0] =%d\n", an);
   printf("\n a[1] =%d\n", an1);
   for (i = 2; i<=n; ++i)
   {
		an2 = an1+ an;
		an = an1;
        an1 = an2;
        printf("\n a(%d] =%d\n", i, an2);
        }
	system("pause");
    return 0;
}
