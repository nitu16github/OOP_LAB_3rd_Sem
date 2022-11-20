#include<stdio.h>

struct student {
		char name[20];
		int roll;
		int marks[5];
};

int main()
{
	struct student s1;
	
	printf("Name: ");
	scanf("%s",&s1.name);
	printf("Roll Number: ");
	scanf("%d",&s1.roll);
	
	int i;
	for(i = 0 ; i < 5 ; i++)
    {
		printf("Enter the marks in subject %d: ",i+1);
		scanf("%d",&s1.marks[i]);
	}
	
    printf("\n");

	printf("Displaying \n");
    printf("\n");

	printf("Name: %s\n",s1.name);
	printf("Roll number: %d\n",s1.roll);
	printf("Marks: \n");
	for(i = 0 ; i < 5 ; i++)
    {
		printf("%d ",s1.marks[i]);
    }
	
	printf("\n");
	return 0;
}