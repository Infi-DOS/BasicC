#include <stdio.h>
#include <math.h>

int main(void)
{
	double s;
	int a, b, i, n;
	
	printf("Doste times gia to n\n");
    scanf("%d", &n);
	
	s=1;
   for (i = 1; i<=n; ++i)
   {
		s = 1+ 1/s;
        printf("s[%d] =%f\n", i, s);
        }

	printf("diff = %e", s-sqrt(5)/2.0-0.5); 

    system("pause");

	return 0;
}
