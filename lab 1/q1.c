#include <stdio.h>
struct student
{
   char name[50];
   int roll;
   int marks[5];
};
int main()
{
    struct student s1;
    printf("Enter Name:\n");
    scanf("%[^\n]s",s1.name);
    printf("Enter roll:\n");
    scanf("%d",&s1.roll);
    for(int i=0;i<5;i++){
        printf("enter marks %d\n",i+1);
        scanf("%d",&s1.marks[i]);
    }
    printf("Name of the student is : ");
    printf("%s",s1.name);
    printf("\n");
    printf("Roll of the student : %d\n",s1.roll);
    printf("Marks are :  ");
    for(int i=0;i<5;i++){
        printf("%d ",s1.marks[i]);
    }
    printf("\n");
    return 0;
}