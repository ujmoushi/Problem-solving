#include<stdio.h>
#include<math.h>
int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", N);
    int X = N/100;
    printf("%d nota(s) de R$ 100,00\n", X );

    int Y= N%100;
    int X2 = Y/50;
    printf("%d nota(s) de R$ 50,00\n", X2 );
    
    int Y2= Y%50;
    int X3= (Y2)/20;
    printf("%d nota(s) de R$ 20,00\n", X3 );
    
    int Y3= Y2%20;
    int X4= Y3/10;
    printf("%d nota(s) de R$ 10,00\n", X4 );

    int Y4= Y3%10;
    int X5= Y4/5;
    printf("%d nota(s) de R$ 5,00\n", X5 );

    int Y5= Y4%5;
    int X6= Y5/2;
    printf("%d nota(s) de R$ 2,00\n", X6 );

    int Y6= Y5%2;
    int X7= Y6/1;
    printf("%d nota(s) de R$ 1,00\n", X7 );
    return 0;
}