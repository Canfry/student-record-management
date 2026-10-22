main: main.o student.o
	gcc -Wall -Wextra -g -fsanitize=address main.c student.c -o main

main.o: main.c student.c student.h
	gcc -Wall -Wextra -g main.c -c main


