#include<stdio.h>


//0,1,1,2,3

/*     
    1=0+1
    2=1+1
    3=2+1


*/
int Febinacci(int a,int b,int temp,int n){
    if(n==0){

        return 0;
    }
    else{
        for(int i=0;i<=n;i++){
            
            temp=a+b;
            a=b;
            b=temp;
            printf("%d\n",temp);

        }
    }   

}

int main()
{
    int a=0;
    int b=1;
    int temp=0;
    int n=3;
    int value=Febinacci(a,b,temp,n);
    return 0;
}
