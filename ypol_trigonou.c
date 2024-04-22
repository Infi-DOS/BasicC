#include <stdio.h>
#include <math.h>

int main(void)
{
    // Edo dilonoume metavlites

    double x, h, E;
    
    printf("\n Typose to mikos tis pleyras tou trigonou\n");
    scanf("%lf", &x);
    
    h = sqrt(3)/2.0*x;
    E = 0.5*x*h;
    
    printf("\n To ypsos tou trigonou einai: %lf", h);
    
    printf("\n To embadon tou trigonou einai: %lf\n", E);
        
    system("pause");
    
    return 0;
}
