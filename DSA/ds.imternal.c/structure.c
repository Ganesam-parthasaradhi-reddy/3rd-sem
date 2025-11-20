#include<stdio.h>
#include<string.h>
struct student {
    char name[10];
    int rollno;
    float cgpa;
    char sec;
} s1, s2;
int main ()
{
    strcpy(s1.name,"piyush");
    s1.rollno=168;
    s1.cgpa=8.25;
    s1.sec='A';
    
    strcpy(s2.name,"laila");
    s2.rollno=011;
    s2.cgpa=9.25;
    s2.sec='B';
    printf("student information is :\n");
    printf("roll no is :%d\n name:%s\n cgpa:%.1f\n sec:%c\n",s1.rollno,s1.name,s1.cgpa,s1.sec);
    printf("roll no is :%d\n name:%s\n cgpa:%.2f\n sec:%c\n",s2.rollno,s2.name,s2.cgpa,s2.sec);

return 0;

}
/*#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int rollno;
    float cgpa;
    char sec;
} s1, s2;

int main() {
    strcpy(s1.name, "piyush");
    s1.rollno = 168;
    s1.cgpa = 8.25;
    s1.sec = 'A';

    strcpy(s2.name, "laila");
    s2.rollno = 11;  // Removed leading zero
    s2.cgpa = 9.25;
    s2.sec = 'B';

    printf("Student Information:\n");
    printf("Roll No: %d\nName: %s\nCGPA: %.2f\nSection: %c\n\n", s1.rollno, s1.name, s1.cgpa, s1.sec);
    printf("Roll No: %d\nName: %s\nCGPA: %.2f\nSection: %c\n", s2.rollno, s2.name, s2.cgpa, s2.sec);

    return 0;
}*/
