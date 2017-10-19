all: acc

acc: main.o wiimote.o
	g++ main.o wiimote.o -o acc

main.o: main.cc
	g++ main.cc -c -o main.o

wiimote.o: wiimote.h wiimote.cc
	g++ wiimote.cc -c -o wiimote.o

clean:
	rm *.o button
