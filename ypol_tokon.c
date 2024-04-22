#include <stdio.h>

int main(void)
{
    double arx_kefalaio, epitokio, tokos, axia_kef;
    int plithos_eton, i;
    
    printf("\nDose arhiko kefalaio se euro. K = ");
    scanf("%lf", &arx_kefalaio);
    
    printf("\n Dose epitokio Epit = ");
    scanf("%lf",&epitokio);
    
    printf("\n Dose arithmo eton, N = ");
    scanf("%d",&plithos_eton);
    
    axia_kef = arx_kefalaio;
    for (i=1; i<=plithos_eton; ++i)
        {
        tokos = axia_kef*epitokio;
        axia_kef += tokos;      
        printf("\nAxia kefalaiou meta apo %d eti = %7.1lf euro",i, axia_kef);   
        }
    
    printf("\n");
    system("pause");
    return 0;

}
