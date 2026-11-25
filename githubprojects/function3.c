#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct student s1;
    s1.rollno =121;
    strcpy(s1.name,"khushi");
    s1.marks =50.6;
    printf("rollno: %d\n",s1.rollno);
    printf("name: %s\n",s1.name);
    printf("marks: %f\n",s1.marks);
    return 0;
}