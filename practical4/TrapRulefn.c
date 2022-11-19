#include<stdio.h>
#include<math.h>

 //Function for converting theta to radians
float deg_radians(float theta){

    return (M_PI * theta)/180.0;
}

//Function for area calculation using trap rule.
float area(float b_rad,int N, float function_array[N+1]){
    int i;
    float initial_area = function_array[0] + function_array[N];
    for(i=1;i<N;i++){
        initial_area+=2*function_array[i];
    }
//Converting the multiplier (b-a)/2N to radians
 float mul_rad = (M_PI*((b_rad)/(2*N)))/180.0;
 //Calculating the complete Area
 float Complete_Area = mul_rad*initial_area;
 return Complete_Area;
 }
 int main(void){
     float a =0.0;
     float b = 60.0;
     int N = 12;
     float step_size = (b-a)/N;
     float tan_arr[N+1]; // Static declaration of array
     int i;
     for( i =0;i<=N;i++){
           tan_arr[i] = tan(deg_radians(step_size * i));
     }
//Approximated result
 float ans = area(b,N,tan_arr);
 printf("Approximted_area = %f\n", ans);
//Actual Result
//Integral of tan is ln(2)
 printf("Exact_area = %f\n", log(2.0));
 
 return 0;
 }
