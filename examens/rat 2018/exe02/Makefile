Un : Un.c 
	gcc -c Un.c -o Un.o
Vn : Vn.c
	gcc -c Vn.c -o Vn.o
Wn : Wn.c
	gcc -c Wn.c -o Wn.o
main : Un.o Vn.o Wn.o
	gcc -c main.c -o main.o
	gcc -o out main.o Un.o Vn.o Wn.o
	./out