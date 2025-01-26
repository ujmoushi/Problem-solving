#include<stdio.h>
#include<math.h>
int main(){
    int N;
    scanf("%d", &N);

    int Y= N/365;
    int N1 = N%365;

    int M= N1/30;
    int N2= N1%30;

    int D= N2;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Y,M,D);

    return 0;
}