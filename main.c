#include "student.h"
#include <stdio.h>
#include <string.h>

# define MAX_SIZE 255

int main(int argc, char **argv) {

	char name[MAX_SIZE];
	int age = 0;
	int role = 0;
	char class[MAX_SIZE];
	float marks = 0.0f;
	int choice = 1;
	
	int loop = 1;

	printf("Add student(s): \n");

	while (loop) {
		
		printf("Enter a name: ");
		if (fgets(name, MAX_SIZE, stdin) == NULL) {
			scanf("%s", "anonymous");
		} else {
			name[strcspn(name, "\n")] = '\0';
		}

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
		printf("\n");

		printf("1. Add student\n");
		printf("2. List all student\n");
		printf("3. Exit\n");

		scanf("%d", &choice);
		printf("\n");

	    switch (choice) {
		case 1:
			continue;
		case 2:
			displayAll(); 
		case 3:
			loop = 0;
			break;
		}
	}
	
	return 0;
}
