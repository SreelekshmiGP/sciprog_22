# include<stdlib.h>
#include<stdio.h>

//logic to change all the disk from source to destination
void hanoi(int n, int source,int destination , int inter ){
    if(n==1){
        printf("Move disc from %d to %d\n",source,destination);
    }else{
        hanoi(n-1,source,inter,destination);
        printf("Move disc from %d to %d\n",source,destination);
        hanoi(n-1,inter,destination,source);
    }

}

int main(){
      //intialize the number of disk
      int h=3;
    printf("Solution for %d discs \n",h);
    hanoi(h,1,3,2); // calling the functio to find the solution
    return 0;
}
