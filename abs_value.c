#include <stdio.h>
int main(void)
{
	double a, b, c;
	
	printf("Dose timi tou a\n");
    scanf("%lf", &a);
    
    if (a<0.0)
       a=-a;

	printf("Dose timi tou b\n");
    scanf("%lf", &b);

    if (b<0.0)
       b=-b;
            
            
	c = a-b;
	
	if (c<0.0)  
       c=-c;
	
	
	printf("c = %lf \n", c); 

    system("pause");

	return 0;
}
