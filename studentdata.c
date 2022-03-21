#include<stdio.h>
int main()
{
struct student
{
int rollno,sem;
char  name[10];
float m1,m2,m3,m4,m5,avg;
};
int n,i;
printf("enter no of students:\n");
scanf("%d",&n);
struct student s[n];
printf("enter %d student information :\n",n);
for(i=0;i<n;i++)
{
printf("enter roll no :");
scanf("%d",&s[i].rollno);
printf("enter sem :");
scanf("%d",&s[i].sem);
printf("enter name :");
scanf("%s",&s[i].name);
printf("enter 5 subject marks");
scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}

printf("student above average are :\n");
for(i=0;i<n;i++)
{
if(s[i].avg>35.0)
{
printf("%s\t%d\t%f\n",s[i].name,s[i].sem,s[i].avg);
}
}
printf("student below average are :\n");
for(i=0;i<n;i++)
{
if(s[i].avg<=35.0)
{
printf("%s\t%d\t%f\n",s[i].name,s[i].sem,s[i].avg);
}
}
return 0;
}



