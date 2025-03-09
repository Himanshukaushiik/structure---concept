#include<stdio.h>
#include<string.h>

typedef struct {
    char name[100];
    float marks ;
    int roll_no ;
}bro;

int main(){
    
    bro s1 ={"himanshu" , 85.78 , 12};

    printf("Name: %s, Roll No: %d, Marks: %.2f\n", s1.name, s1.roll_no, s1.marks);

    
    

}
