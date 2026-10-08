#ifndef STUDENT
#define STUDENT

#include <stdio.h>

typedef struct Student {
	int role;
	char *name;
	int age;
	char *class;
	float marks;
} Student;


void addStudent();
void editStudent(Student *student);
void deleteStudent(Student *student);
void searchStudent(Student *student);          // By name or role number
void displayAll();             // Sorted by role number
void saveToFile(FILE *file);
void loadFromFile(FILE *file);

#endif // !STUDENT
