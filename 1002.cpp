#include<stdio.h>
int main(){
    double n = 3.14159;
    double R;
    scanf("%lf", &R);
    double Area= n*(R*R);
    printf("A=%.4lf", Area);
    return 0;
}