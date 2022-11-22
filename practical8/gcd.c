#include <stdio.h>

int iterativeGCD(int a, int b); // Finds Elucid's GCD using iterative method
int recursiveGCD(int a, int b); // Finds Elucid's GCD using recursive method

//calculate iterative gcd
int iterativeGCD(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//calculate recursive gcd
int recursiveGCD(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return recursiveGCD(b, a % b); // Recursive function call
    }
}

int main(){
    int a, b, ierror;
    printf("Please input two positive integers:\n");
    ierror = scanf("%d %d", &a, &b);
    if(ierror != 2){ // input error testing
        printf("Please enter two positive integers\n");
        return 1;
    }
    if(a <= 0 || b <= 0){ // validating positive integers
        printf("These numbers are not positive!\n");
        return 1;
    }
    //function call and output
    printf("iterativeGCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));
    printf("recursiveGCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));
    
    return 0;
}
