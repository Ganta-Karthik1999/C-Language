#include<stdio.h>


int febinochi(int a){
    if(a==1 || a==0){

        return 1;
    }
    else{
        
        return febinochi(a-1)*a;

    }
    
    
}



int main()
{

int a=3;

int value=febinochi(a);
printf("Ya the value of the seris is %d\n",value);


    return 0;
}
