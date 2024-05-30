SuiteUn : SuiteUn.c 
	gcc -c SuiteUn.c -o SuiteUn.o
SuiteVn : SuiteVn.c
	gcc -c SuiteVn.c -o SuiteVn.o
main : SuiteUn.o SuiteVn.o
	gcc -c main.c -o main.o
	gcc -o out main.o SuiteUn.o SuiteVn
	./oout