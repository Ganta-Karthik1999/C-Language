#include<stdio.h>
#include<string.h>



struct employee{
 int code;
 float salary;
 char name[20];
};


int main()
{
    struct employee e1;
    e1.code=46822;
    e1.salary=10000.50;
    strcpy(e1.name,"karthik");
    printf(" The name of the emplo is %s",e1.name);
    return 0;
}
