#include<stdio.h>
#include<string.h>
struct student {
char name[10];
int roll;
float cgpa;
char sec;
};
int main(){
struct student s1,s2;
printf("Data of first student ");
scanf("%s %d %f ",&s1.name,&s1.roll,&s1.cgpa);
scanf("%c",&s1.sec);
printf("Data of second student ");
scanf("%s %d %f ",&s2.name,&s2.roll,&s2.cgpa);
scanf("%c",&s2.sec);
printf("Student information is:\n");
printf("Name is %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s1.name,s1.roll,s1.cgpa,s1.sec);
printf("Name is %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s2.name,s2.roll,s2.cgpa,s2.sec);

}