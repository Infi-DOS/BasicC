#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, n, h, sum, diff, exact_res;
	int i;

	printf("To programma ayto tha oloklirosei to exp(-x^2/2) apo to a os to b se N vimata.\n");
	
	printf("Dose tin arxiki timi olokliromatos, a\n");
    scanf("%lf", &a);
    
	printf("Dose tin teliki timi olokliromatos, b\n");
    scanf("%lf", &b);
            
	printf("Dose ton synoliko arithmo vimaton N\n");
    scanf("%lf", &n);
    
    h = (b-a)/n;
    
    sum = 0.0;
    
    for (i=0; i<n+1; ++i)
        sum += exp(- pow(a+h*i,2.0)/2.0 )*h;
        
    sum -= 0.5*(exp(- pow(a,2.0)/2.0 ) + exp(- pow(b,2.0)/2.0))*h;    
            	
	printf("arithmitiko apotelesma  = %lf \n", sum/sqrt(2.0*3.1415)); 
	    
    system("pause");

	return 0;
}
