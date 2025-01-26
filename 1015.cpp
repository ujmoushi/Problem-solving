#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    double dist= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    double dis= sqrt(dist);
    printf("%.4lf\n", dis);
    return 0;
}