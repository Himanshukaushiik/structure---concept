#include<stdio.h>
#include<string.h>


struct adress
{
    char city[100];
    int pincode;
};


struct student
{
    char name[100];
    int roll_no ;
    struct adress addr;
};

void inputstudent(struct student *s){
    printf("****ENTER THE STUDENT DETAILS ****\n");
    getchar();
    printf("\n enter the name = ");
    fgets(s->name , sizeof(s->name) , stdin);
    s->name[strcspn(s->name , "\n")] = '\0';
    
    printf("\n enter the city name = ");
    fgets(s->addr.city , sizeof(s->addr.city ) , stdin );
    s->addr.city[strcspn(s->addr.city , "\n")] = '\0';
    
    printf("\n enter the roll no = ");
    scanf("%d",&s->roll_no);
    getchar();
    
    printf("\nenter the pincode = ");
    scanf("%d", &s->addr.pincode);
    getchar();
}

    void display(struct student s){

    printf("\n -----STUDENT DETAILS -----\n");

    printf("\n name = %s  " , s.name );
    printf("\n city = %s  " , s.addr.city );
    printf("\n ROLL NO = %d  " , s.roll_no );
    printf("\n AREA PINCODE = %d  " , s.addr.pincode);
    

}

int main(){
    struct student bhai[10];
    int count =1;
    
    bhai[0] =(struct student){"Himanshu" ,1 , {"Rohtak" , 124501}};

    char choice;

    while (1)
    {
        printf("\n DO YOU WANT TO ADD A NEW STUDENT RECORD ?? Y/N = ");
        scanf("%c",&choice);

        if (choice == 'y' || choice == 'Y')
        {
            inputstudent (&bhai[count]);
            count ++ ;

        } else{
            break;
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        display(bhai [i]);
    }
    
    return 0;
}