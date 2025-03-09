#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll_no;
    float marks;
}bro;

int main(){
    struct student students[3];


    for (int i = 0; i < 3; i++)
    {
        printf("\n ENTER THE STUDENTS DETAILS for student %d = \n" , i + 1);
        
        printf("\nENTER THE NAME =  ");
        // getchar();
    
        fgets(students[i].name , sizeof(students[i].name) , stdin);

        students[i].name[strcspn(students[i].name , "\n")] = '\0';
        
        
        printf("\nENTER THE  ROLL NO. = ");
        scanf("%d",&students[i].roll_no);
        getchar();
        
        

        
        
        printf("\nENTER THE  marks = ");
        
        scanf("%f",&students[i].marks);
        getchar();
    }
    
    printf("\n ****STUDENTS DETAILS****\n");
    for (int i = 0; i <3; i++)
    {
        
    printf(" \n name = %s\t roll no =  %d\t  marks = %.2f\t" , students[i].name, students[i].roll_no,students[i].marks);

    }
}