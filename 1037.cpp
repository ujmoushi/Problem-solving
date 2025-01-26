#include<stdio.h>
#include<math.h>
int main(){
    float N;
    scanf("%f", &N);

    if(0.0<=N && N<=25.0){
        printf("Intervalo [0,25]\n");
    }
    else if(25.0<N && N<=50.0){
        printf("Intervalo (25,50]\n");
    }
    else if(50.0<N && N<=75.0){
        printf("Intervalo (50,75]\n");
    }
    else if(75.0<N && N<=100.0){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");
    }
}