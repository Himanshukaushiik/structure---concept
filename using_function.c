#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    float marks ;
    int roll_no ;
};

void display(struct student s){
    printf(" name = %s\n  marks = %f\n roll no =  %d\n" , s.name,s.marks,s.roll_no);
}

int main (){
    struct student s1 ={"himanshu" , 85.78 , 12};
    struct student s2 ={"abhijeet" , 85.78 , 13};

    display(s1);
    printf("\n \n \n");
    display (s2);
    return 0;
}