#include<stdio.h>
#include<math.h>
int main(){
    int h, speed;
    scanf("%d %d", &h, &speed);

    double dis= speed*h;
    double fuel= dis/12;
    printf("%.3lf\n", fuel);
    return 0;


}