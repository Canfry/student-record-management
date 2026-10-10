#include "student.h"
#include <stdio.h>


int main(int argc, char **argv) {

	char name[1024];
	int age = 0;
	int role = 0;
	char class[1024];
	float marks = 0.0f;
	char again = '\0';
	
	int loop = 1;

	printf("Add student(s): \n");

	while (loop) {		
		printf("Do you want to add student? (y/n): ");
		scanf("%c", &again);
		if (again == 'n') {
			loop = 0;
			break;
		} else if (again == 'y') {
		
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
			again = '\0';
		}
	}
	
	return 0;
}
