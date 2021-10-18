#include <stdio.h>

int main()
{
	//declare variables
	
	int id;
	int age;
	char name[16];
	char class_name[4];
	
	//get information
	
	printf("Enter ID: ");
	scanf("%d",&id);
	
	printf("Enter class_name: ");
	scanf("%s",class_name);
	
	printf("Enter name: ");
	scanf("%s",name);
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	//printing out information given
	
	printf("\n\n\nStudent ID  :  %d\n",id);
	printf("Student name:  %s\n",name);
	printf("class name  :  %s\n",class_name);
	getchar();
	printf("Student age :  %d\n",age);
	
	printf("\n");
	
	return 0;
}
