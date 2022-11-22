#include <stdio.h>
#include <stdlib.h>

//Allocate the array
int *allocatearray(int n){
    int *p;
    p=(int *) malloc((n)*sizeof(int));
    if(p==NULL){
        printf("Error in allocating memory \n");
    }
    return p;
}

//Fill with ones
void fillwithones(int *array , int n){
    int i;
    for(i=0;i<n;i++){
        array[i]=1;
    }
}

//print array
void printarray(int *array ,int n){
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,array[i]);
    }
}
//deallocation of the array
void freearray(int *array){
    free(array);
}
int main(){
    int length,*a;
    printf("Please enter the size of the array: \n");
    scanf("%d",&length);
    a=allocatearray(length);
    fillwithones(a,length);
    printarray(a,length);
    freearray(a);
    a=NULL;

    return 0;
}
