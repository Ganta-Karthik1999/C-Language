#include<stdio.h>


void address(int n);
void _address(int *n);


int main(){
    int n=10;
    int sample=20;
    int *A=&sample;
    address(n);
    _address(&sample);

    printf("==================\n");
    printf("The value of a outside the loop %d\n",*A);

    return 0;
}

void address(int n){

    printf(" call by value = %d\n",n);
}

void _address(int *n){
    *n=80;
    printf(" call by reference =%d\n",*n);
}