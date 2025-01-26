#include<stdio.h>
#include<math.h>
int main(){
    int N;
    scanf("%d", &N);

    int h= N/3600;
    int N1 = N%3600;

    int m= N1/60;
    int N2= N1%60;

    int s= N2;
    printf("%d:%d:%d\n", h,m,s);

    return 0;
}