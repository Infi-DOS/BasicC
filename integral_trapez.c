#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, n, h, sum, diff, exact_res;
	int i;

	printf("To programma ayto tha oloklirosei to cos(x) apo to a os to b se N vimata.\n");
	
	printf("Dose tin arxiki timi olokliromatos, a\n");
    scanf("%lf", &a);
    
	printf("Dose tin teliki timi olokliromatos, b\n");
    scanf("%lf", &b);
            
	printf("Dose ton synoliko arithmo vimaton N\n");
    scanf("%lf", &n);
    
    h = (b-a)/n;
    
    sum = 0.0;
    
    for (i=0; i<n+1; ++i)
        sum += cos(a+h*i)*h;
        
    sum -= 0.5*h*(cos(a)+cos(b));    
            	
	printf("arithmitiko apotelesma  = %lf \n", sum); 
	exact_res = sin(b)-sin(a);
	printf("akrives apotelesma  = %lf \n", exact_res); 
	diff = fabs(sum - exact_res);
	printf("diafora =  %e \n", diff ); 
	

//    system("pause");
    
    system("pause");

	return 0;
}
