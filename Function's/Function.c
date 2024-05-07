#include<stdio.h>

void display();// Function prototype

int sum(int a,int b);

float float_sum(float a, float b);

char char_display(char * char1);


int main()
{
//    int c=sum(2,3);
  
//     printf("The value of the sum is %d\n",c);
//     display();
//     float float_value=float_sum(10,50);
//     printf("The float value of the function is: %f\n",float_value);
    char k[]="hii karthik how are you";
    char_display(&k);
    return 0;
}

// This is a basic function type with no return type.
void display(){
    printf("Hi i am karthik");

}
 

/* Now we will lwarn we will learn parameter function.*/ 

// This function will take two values and return the value.

//There ae three types of functions integer , float,String function.


int sum(int a,int b){

   int  sum=a+b;
    return sum;
}

float float_sum(float a, float b){

    float sum =(a+b)/2;
    return sum;
}

char char_display(char * char1){

    printf("%s",char1);

}