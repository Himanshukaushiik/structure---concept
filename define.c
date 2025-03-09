#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    float marks ;
    int roll_no ;
};


int main (){

    struct student s1;

    printf("\nenter the name of the 1st student = \n");
    fgets(s1.name , sizeof(s1.name) ,stdin );
    s1.name[strcspn(s1.name , "\n")] = '\0';


    printf("\nenter the marks of the 1st student = \n");
    scanf("%f",&s1.marks);
    printf("\nenter the roll no. of the 1st student = \n");
    scanf("%d",&s1.roll_no);
    
    printf("\n**------- student details ------**\n");

    printf("\nNAME = %s\n" , s1.name);
    printf("\nMARKS = %.2f\n" , s1.marks);
    printf("\nROLL NO = %d\n" , s1.roll_no);
}
