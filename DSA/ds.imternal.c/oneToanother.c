#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    char gender;
};
int main ()
{
    struct student s1={"piyush", 168 , 'M'},s2;
    s2=s1;
    printf("student details are:\n");
    printf("name:%s\n roll:%d\n gender:%c",s2.name,s2.roll,s2.gender);
    return 0;
}