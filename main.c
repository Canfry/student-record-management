#include "student.h"
#include <stdio.h>


int main(int argc, char **argv) {

	char name[1024];
	int age = 0;
	int role = 0;
	char class[1024];
	float marks = 0.0f;
	int choice = 1;
	
	int loop = 1;

	printf("Add student(s): \n");

	while (loop) {
		//char again = '\0';
		
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
				
		printf("What do you want to do next? Type the number: \n");
		//scanf("%d", &choice);

		printf("1. Add student\n");
		printf("2. List all student\n");
		printf("3. Exit\n");

		scanf("%d", &choice);

	    switch (choice) {
		case 1:
			continue;
		case 2:
			printf("List\n");
		case 3:
			loop = 0;
			break;
		}
	}
	
	return 0;
}
