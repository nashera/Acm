main:main.o mytool1.o mytool2.o
	gcc -o main main.o mytool1.o mytool2.o
main.o:main.c mytool1.h mytool2.h
	gcc -c main.c -I.
mytool1.o:mytool1.c mytool1.h
	gcc -c mytool1.c -I.
mytool2.o:mytool2.c mytool2.h
	gcc -c mytool2.c -I.