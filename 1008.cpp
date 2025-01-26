#include<stdio.h>
int main(){
    int n,h;
    float a;
    scanf("%d %d %f", &n,&h,&a);
    double salary= h*a;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}