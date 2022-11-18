#include <stdio.h>
#include <math.h>

int main(void){
    int N=12,i;
    float a=0.0, b_deg=60.0;
    float b_rad,area,mult_rad;

    //Convert b_deg=pi/3 to radians
    b_rad=(M_PI*b_deg)/180.0;
    printf("Pi/3 in radians = %f\n", b_rad);

    //Sum tan(a)+tan(b)
    area = tan(a)+tan(b_rad);
    //Calculate the area at the points x1,x2,...,x11 multiplying by 2
    //Then add them together
    for(i=5;i<60;i=i+5){
        area = area+2*tan((M_PI*i)/180.0);
    }

    //multiply partial area by  ((pi/3)-0)/(2*12)
    //Convert it to radians first
    mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
    area=mult_rad*area;
    printf("Approximated=%f, Exact=%f\n",area,log(2.0));
    return 0;
}
