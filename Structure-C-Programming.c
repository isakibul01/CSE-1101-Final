//Structure of Student
#include<stdio.h>

struct student{
    char name[50];
    int roll, mark;
};

int main(){
    struct student a;

    printf("Name: ");
    scanf("%s", a.name);

    printf("Roll: ");
    scanf("%d", &a.roll);

    printf("Mark: ");
    scanf("%d", &a.mark);

    printf("\nName:%s \nRoll:%d \nRoll:%d", a.name, a.roll, a.mark);
    return 0;
}




//Structure of Employee
#include<stdio.h>

struct employee{
    char name[50];
    int age, phone;
};

int main(){
    struct employee a;

    printf("Name: ");
    scanf("%s", a.name);

    printf("Age: ");
    scanf("%d", &a.age);

    printf("Phone: ");
    scanf("%d", &a.phone);

    printf("\nName:%s \nAge:%d \nPhone:%d", a.name, a.age, a.phone);
    return 0;
}