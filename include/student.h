#ifndef STUDENT
#define STUDENT

#include <stdio.h>

typedef struct Student {
	int role;
	char *name;
	int age;
	char *class;
	float marks;
};


void addStudent();
void editStudent();
void deleteStudent();
void searchStudent();
void displayAll();
void saveToFile(FILE file);
void loadFromFile(FILE file);

#endif // !STUDENT
