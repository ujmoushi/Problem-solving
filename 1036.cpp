#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    double sroot = ((b*b)-(4*a*c));
    double R1 = (-b+ sqrt(sroot))/(2*a);
    double R2 = (-b- sqrt(sroot))/(2*a);

    if ( sroot<0 || a == 0.0 )
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    
    return 0;
}