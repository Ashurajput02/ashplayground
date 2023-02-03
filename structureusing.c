#include<stdio.h>

struct student 
{
    int rollno;
    char name[20];
    float marks;
} b={2,"vishu",100.0},c={3,"jiggi",98.0};

struct student a={1,"ashu",96.0};

struct student d;
struct student e;
int main()
{
 printf("%d %s %.2f\n",a.rollno,a.name,a.marks);
 printf("%d %s %f\n",b.rollno,b.name,b.marks);
 printf("%d %s %f\n",c.rollno,c.name,c.marks);
 int k=sizeof(struct student);
 printf("%d\n",k);
 printf("enter info for student 4\n");
 scanf("%d %s %f",&d.rollno,&d.name,&d.marks);
printf("%d %s %f\n",d.rollno,d.name,d.marks);
 
printf("enter info for student 5\n");

 scanf("%d",&e.rollno);
 scanf("%s",&e.name);
 scanf("%f",&e.marks);
  printf("%d\n",e.rollno);
 printf("%s\n",e.name);
 printf("%f\n",e.marks);

 struct student f;
 f=a;
 printf("%d %s  %f\n",f.rollno,f.name,f.marks);

printf("%c",a.name[0]);

printf("%c",b.name[0]);

printf("%c",c.name[0]);

printf("%c",d.name[0]);

printf("%c",e.name[0]);

printf("%c\n",f.name[0]);

// printf("%d\n"(sizeof(a.name)));

struct student arr[3];
for(int i=0;i<3;i++)
{
printf("enter details for student %d\n",(i+7));
scanf("%d %s %f",&arr[i].rollno,&arr[i].name,&arr[i].marks);
}
for(int i=0;i<3;i++)
{
printf("%d %s %f\n",arr[i].rollno,arr[i].name,arr[i].marks);

}
    printf("Thanksylawda");
    
    printf("Thanks For joining us in our learning journey");
}

