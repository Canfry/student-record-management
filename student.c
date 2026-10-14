#include "student.h"

#include <stdio.h>
#include <stdlib.h>

void addStudents(Student *student) {

	char *filename = "students.txt";

	FILE *file = fopen(filename, "a");
	if (file == NULL) {
		fprintf(stderr, "Failed to open the file: %s\n", filename);
		exit(1);
	}
	saveToFile(file, student);

	fclose(file);
}


void editStudent(Student *student);
void deleteStudent(Student *student);
void searchStudent(Student *student);


void displayAll() {
	
	char *line = NULL;
	size_t linecap = 0;
	ssize_t linelen;
	
	char *filename = "students.txt";
	FILE *file = fopen(filename, "r");
	if (file == NULL) {
		fprintf(stderr, "Failed to open file: %s\n", filename);
		exit(1);
	}
	while ((linelen = getline(&line, &linecap, file)) > 0) {
		fwrite(line, linelen, 1, stdout);
	}
}


void saveToFile(FILE *file, Student *s) {
	fprintf(file, "%s, %d, %d, %s, %.2f\n", s->name, s->role, s->age, s->class, s->marks);

}


void loadFromFile(FILE *file);
