// define structure using multiple variable like in a format ............

#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    float marks ;
    int roll_no ;
};

int main (){
    struct student s1 ={"himanshu" , 85.78 , 12};
    struct student s2 ={"abhijeet" , 85.78 , 13};

    printf(" name = %s\n  marks = %f\n roll no =  %d\n" , s1.name,s1.marks,s1.roll_no);
    printf(" name = %s\n  marks = %f\n roll no =  %d\n" , s2.name,s2.marks,s2.roll_no);
};
    