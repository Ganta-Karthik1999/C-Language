#include <stdio.h>
#include <math.h>
int main()
{
    // First we need to learn arthemetic instruction.
    int a = 10;
    int b = 3;

    printf("The value of a+b is : %d\n", a + b);
    printf("The value of a-b is : %d\n", a - b);
    printf("The value of a*b is : %d\n", a * b);
    printf("The value of a/b is : %d\n", a / b);
    printf("To the remainder ot the a when devided my the b %d\n", a % b);
    printf("To the remainder ot the a when devided my the b %d\n", -a % b);
    printf("The value of 4 to the power 5 is %f\n", pow(4, 5));

// prority alocation 
//  first -- (),*,%,/
//  secoud-- +,-,

// accociation
// *,/ --> now thw compiler will go left to right.
printf("here the value is %d\n",3*2-2*3);
printf("here we can seee %d\n",8*3/3*2);



    return 0;
}
