main: main.o
	gcc -Wall -Wextra -g main.c -c

main.o: main.c student.h
	gcc -Wall -Wextra -g main.c -o main


