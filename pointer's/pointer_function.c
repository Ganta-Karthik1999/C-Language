#include<stdio.h>

void square(int n);
void _square(int* n);

int main(){

    int number=4;
    printf("The value of the number is %d\n",number);
    square(number);
    printf(" After square value outside the function %d\n",number);
    _square(&number);
    printf("after _square value outside the function %d\n",number);

    return 0;

}

void square(int n){
    n=n*n;
    printf("The value of the square in the function is %d\n",n);
}

void _square(int* n){

    *n= (*n) * (*n);
    printf("The value of the square in the function is %d  \n",*n);

}