#include<stdio.h>
int main(){
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double WA=2 , WB= 3, WC=5;
    double M = ((A*WA)+(B*WB)+(C*WC))/(WA+WB+WC);
    printf ("MEDIA = %.1lf\n", M);
    return 0;
}