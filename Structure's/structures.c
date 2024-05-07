#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    char roll;
    float cgpa;
};



int main(){

struct student s1;
s1.roll=23;
s1.cgpa=7.5;
strcpy(s1.name,"karthik");

printf("The roll number of the student is",s1.roll);
printf("The cgpa of the student is ",s1.cgpa);
printf(" The name of the student is ",s1.name);


struct student s2;
s2.roll=23;
s2.cgpa=7.5;
strcpy(s2.name,"karthik");

printf("The roll number of the student is",s2.roll);
printf("The cgpa of the student is ",s2.cgpa);
printf(" The name of the student is ",s2.name);

struct student s3;
s1.roll=23;
s1.cgpa=7.5;
strcpy(s3.name,"karthik");

printf("The roll number of the student is",s3.roll);
printf("The cgpa of the student is ",s3.cgpa);
printf(" The name of the student is ",s3.name);

return 0;

}