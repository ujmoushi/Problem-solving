#include<stdio.h>
int main(){
    double R, n=3.14159;
    scanf("%lf", &R);
    double volume=n*(R*R*R)*4/3.0;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}