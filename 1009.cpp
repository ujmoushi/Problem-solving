#include<stdio.h>
int main(){
    char c;
    scanf("%s", &c);
    double S, sell;
    scanf("%lf %lf", &S, &sell);
    double salary= (S + ((sell*15)/100));
    printf("TOTAL = R$ %.2lf\n", salary);
    return 0;
}