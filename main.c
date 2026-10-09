#include "student.h"
#include <stdio.h>


int main(int argc, char **argv) {

	char name[1024];
	int age = 0;
	int role = 0;
	char class[1024];
	float marks = 0.0f;
	
	printf("Add student(s): \n");
	printf("Enter a name: ");
	scanf("%s", name);

	printf("Enter an age: ");
	scanf("%d", &age);

	printf("Enter a role: ");
	scanf("%d", &role);

	printf("Enter a class: ");
	scanf("%s", class);

	printf("Enter marks: ");
	scanf("%f", &marks);

	Student s1 = {role, name, age, class, marks};
	addStudents(&s1);
	
	printf("%s\n", name);
	
	/* Student s = {1, "Chris", 43, "Math", 14.2}; */
	/* Student s2 = {5, "John", 19, "Law", 13.75}; */
	/* addStudents(&s); */
	/* addStudents(&s2); */
	
	return 0;
}
