#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f", &a, &b);

    if (a == 1)
    printf ("Total: R$ %.2f", 4.00 * b);

    else if(a == 2)
    printf ("Total: R$ %.2f", 4.50 * b);

    else if(a == 3)
    printf ("Total: R$ %.2f", 5.00 * b);

    else if(a == 4)
    printf ("Total: R$ %.2f", 2.00 * b);
    
    else if(a == 5)
    printf ("Total: R$ %.2f", 1.50 * b);
    
return 0;
}