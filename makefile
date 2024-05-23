all: Robo

run:
	./Robo

MatrizCom1.o: MatrizCom1.c
	gcc -o MatrizCom1.o -c MatrizCom1.c

Robo.o: Robo.c
	gcc -o Robo.o -c Robo.c

Robo: MatrizCom1.o Robo.o
	gcc -o Robo MatrizCom1.o Robo.o

clean: 
	rm *.o
	rm Robo

