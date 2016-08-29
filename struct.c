#include<stdio.h>
#include<stdlib.h>
typedef struct
{
  int age;  //age of the employ;
  int salary; //salary of the employ;
  char a[40];    //name of the employ;
}person;
int main()
{
  typedef struct
  {
    int age;  //age of the employ;
    int salary; //salary of the employ;
    char a[40];    //name of the employ;
  }person;
  person p;
  scanf("%d%s%d",&p.age,p.a,&p.salary);
  printf("\n%s\n",p.a);
}
