#include "student.h"
#include <stdio.h>


int main(int argc, char **argv) {

	Student s = {1, "Chris", 43, "Math", 14.2};
	Student s2 = {5, "John", 19, "Law", 13.75};
	addStudents(&s);
	addStudents(&s2);
	
	return 0;
}
