#include<stdio.h>
int main(){
    int a;
    float b;
    scanf("%d %f", &a, &b);
    double cons= a/b;
    printf("%.3lf km/l\n", cons);
    return 0;
}