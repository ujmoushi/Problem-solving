#include<stdio.h>
int main(){
    double a,b,c, n=3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    double tri= (a*c)/2;
    double cir= (n*(c*c));
    double tra= ((a+b)/2)*c;
    double sqr= b*b;
    double rec= a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri,cir,tra,sqr,rec);
    return 0;
}