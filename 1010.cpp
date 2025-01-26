#include<stdio.h>
int main(){
    int p1, up1, p2, up2;
    float ppu1, ppu2;
    scanf("%d %d %f %d %d %f", &p1, &up1, &ppu1, &p2, &up2, &ppu2);
    double pay=(up1*ppu1)+(up2*ppu2);
    printf("VALOR A PAGAR: R$ %.2lf\n",pay);
    return 0;
}