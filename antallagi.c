#include <stdio.h>

int main(void)
{
    double x, y, pros;
    
    printf("To programma ayto diavazei dyo arithmous ");
    printf("kai tous antimetathetei oste o protos na einai panta megalyteros");
    
    printf("\n Dose mou tis metavlites x, y. \n");
    printf("\n x = ");
    scanf("%lf", &x);
    printf("\n y = ");
    scanf("%lf", &y);
    
    if ( x < y )
    {   pros = x;    
        x = y;
        y = pros;
    }
    
    printf("\n x = %lf kai y = %lf\n", x, y);
             
    system("pause");


}












