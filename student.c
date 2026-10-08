#include "student.h"

#include <stdio.h>
#include <stdlib.h>

void addStudents(Student *student) {
	Student s;
	s.age = student->age;
	s.role = student->role;
	s.name = student->name;
	s.class = student->class;
	s.marks = student->marks;

	char *filename = "students.txt";

	FILE *file = fopen(filename, "a");
	if (file == NULL) {
		fprintf(stderr, "Failed to open the file: %s\n", filename);
		exit(1);
	}
	saveToFile(file, &s);
}


void editStudent(Student *student);
void deleteStudent(Student *student);
void searchStudent(Student *student);
void displayAll();


void saveToFile(FILE *file, Student *s) {
	fprintf(file, "%s, %d, %d, %s, %.2f\n", s->name, s->role, s->age, s->class, s->marks);

}


void loadFromFile(FILE *file);
