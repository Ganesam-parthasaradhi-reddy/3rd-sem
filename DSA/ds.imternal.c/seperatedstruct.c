
//w a p to store student information name , rollno, datels ofbirth using seperated structure ??????
#include<stdio.h>
struct date 
{
int dd;
int mm;
int yy;

};
struct student {
    char name[10];
    char roll;
    struct date d;

}s ;
int main ()
{
printf("enter the student information :\n");
printf("enter the name and roll no :\n");
scanf("%s%d",&s.name,&s.roll);
printf("enter the dateof birth of stundent :\n");
scanf("%d %d %d ",&s.d.dd, &s.d.mm, &s.d.yy);
printf("stdudent data  is :\n");
printf("name is %s \n roll is %d\n dob is :%d%d%d",s.name,s.roll,s.d.dd,s.d.mm,s.d.yy);
return 0;
}
