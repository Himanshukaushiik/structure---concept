#include<stdio.h>
#include<string.h>


struct student
{
    char name[100];
    int roll;
    float marks;

};


int main (){
struct student s1 ={"rahul" , 12 ,12.8};
struct student *ptr = &s1;

    printf("\n USING POINTERS = ");

    printf("\n name = %s" , ptr->name);
    printf("\n roll = %d" , ptr->roll);
    printf("\n marks = %f" , ptr->marks);

}