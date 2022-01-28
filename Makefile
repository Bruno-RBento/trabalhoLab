main-team-8.exe : main-team-8.o functions-team-8.o
	gcc -o main-team-8.exe main-team-8.o functions-team-8.o -lm

main-team-8.o : main-team-8.c
	gcc -c main-team-8.c

functions-team-8.o : functions-team-8.c functions-team-8.h
	gcc -c functions-team-8.c

clean :
	rm *.o