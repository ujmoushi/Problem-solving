#include<stdio.h>
int main(){
    double n1,n2,n3,n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double avg= ((n1 * 2)+(n2 * 3)+(n3 * 4)+(n4 *1))/(2+3+4+1);
    printf("Media: %.1lf\n", avg);

    if (avg>= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<=5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");

        double n;
        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n",n);

        double final = (avg + n)/2;
        if (final >=5.0)
            printf("Aluno aprovado.\n");
        else if(final <=4.9)
            printf("Aluno reprovado.\n");

       printf("Media final: %.1lf\n", final);
    }
    
    
return 0;
} 