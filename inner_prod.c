#include <stdio.h>
#include <math.h>

int main(void){

    int n, k;
    double sum_aa, sum_ab, sum_bb, cos_theta;
    
    printf("\n Give me the size of the vectors: n = ");
    scanf("%d",&n);
    
    double a[n], b[n];
    
    for (k=0; k<n; k++){
        printf("a[%d] = ", k);
        scanf("%lf",&a[k]);
        }

    for (k=0; k<n; k++){
        printf("b[%d] = ", k);
        scanf("%lf",&b[k]);
        }
        
        sum_ab = 0.0;
        sum_bb = 0.0;
        sum_aa = 0.0;
    
    for (k=0; k<n; k++){
        sum_ab = sum_ab+a[k]*b[k];
        sum_aa = sum_aa+a[k]*a[k];
        sum_bb = sum_bb+b[k]*b[k];
        }
        
    cos_theta = sum_ab/sqrt(sum_aa*sum_bb);
    
    printf("\nesot ginomeno a.b = %lf", sum_ab); 
    printf("\n metro a = %lf", sum_aa); 
    printf("\n metro b = %lf", sum_bb); 
        
    printf("\n cosine of angle btw a b = %lf\n", cos_theta); 
    
    system("pause");
    
    return 0; 
    
}
     






