#include<stdio.h>
#include<string.h>
union student
 {
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    union student s1;
    s1.rollno =121;
        printf("rollno: %d\n",s1.rollno);

    strcpy(s1.name,"khushi");
        printf("name: %s\n",s1.name);

    s1.marks =50.6;
        printf("marks: %f\n",s1.marks);
    return 0;
}